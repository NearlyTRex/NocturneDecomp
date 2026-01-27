#pragma once

// Dependencies
#include "system/basetypes.h"
#include "types/funcdefs/CDemonActor_FactoryFunc.h"

// Structure: CDemonActorType
// Ghidra size: 0x3c (60 bytes)
typedef struct CDemonActorType {
    char class_name[40]; // 0x0
    struct CDemonActorType* parent_type; // 0x28
    CDemonActor_FactoryFunc* factory_func; // 0x2c
    void* type_info; // 0x30
    int type_id; // 0x34
    uint name_hash; // 0x38
} CDemonActorType;

