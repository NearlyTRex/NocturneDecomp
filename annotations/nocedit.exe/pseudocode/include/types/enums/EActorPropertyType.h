#pragma once

// Enum: EActorPropertyType
enum {
    PROP_INT = 0x0,
    PROP_FLOAT = 0x1,
    PROP_VECTOR = 0x2,
    PROP_STRING = 0x3,
    PROP_BOOL = 0x4,
    PROP_CHOICE = 0x5,
    PROP_MODEL_KFM = 0x6,
    PROP_MODEL_DFM = 0x7,
    PROP_SOUND = 0x8,
    PROP_GROUND_TYPE = 0x9,
    PROP_FILE = 0xA,
    PROP_EVENT = 0xB,
    PROP_BUTTON = 0xC,
    PROP_MOTION = 0xD,
    PROP_CLOTH = 0xE,
    PROP_ENUM_PAIR = 0xF,
    PROP_RULE = 0x10,
    PROP_ACTION = 0x11,
    PROP_FLAGS = 0x12
};
typedef int EActorPropertyType;

