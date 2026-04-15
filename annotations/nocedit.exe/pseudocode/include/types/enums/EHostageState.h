#pragma once

// Enum: EHostageState
enum {
    HOSTAGE_STATE_IDLE = 0x0,
    HOSTAGE_STATE_FOLLOWING = 0x1,
    HOSTAGE_STATE_WALKING = 0x2,
    HOSTAGE_STATE_GRABBED = 0x3,
    HOSTAGE_STATE_RESCUED = 0x4,
    HOSTAGE_STATE_DEAD = 0x5
};
typedef int EHostageState;

