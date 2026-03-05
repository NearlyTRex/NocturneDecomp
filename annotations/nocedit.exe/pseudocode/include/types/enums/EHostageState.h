#pragma once

// Enum: EHostageState
enum {
    HOSTAGE_STATE_IDLE = 0,
    HOSTAGE_STATE_FOLLOWING = 1,
    HOSTAGE_STATE_WALKING = 2,
    HOSTAGE_STATE_GRABBED = 3,
    HOSTAGE_STATE_RESCUED = 4,
    HOSTAGE_STATE_DEAD = 5
};
typedef int EHostageState;

