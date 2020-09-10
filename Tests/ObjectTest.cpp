#pragma once

#include <gtest/gtest.h>
#include "../Engine/Object.h"

namespace {
    class ObjectTest : public testing::Test
    {
    public:
        Object sut;

        ObjectTest() {};
    };
}

TEST_F(ObjectTest, checkDefultObjectValue)
{
    ASSERT_EQ(sut.type, ObjectType::NonType);
}

TEST_F(ObjectTest, changeObjectTypeValue)
{
    sut.type = ObjectType::BlockType;
    ASSERT_EQ(sut.type, ObjectType::BlockType);
}