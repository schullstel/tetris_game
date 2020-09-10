#include "ObjectType.h"

class Object
{
public:
    Object(ObjectType objectType) : type(objectType) {};
    Object() : type(ObjectType::NonType) {};
    virtual ~Object() {};

    ObjectType type;
};