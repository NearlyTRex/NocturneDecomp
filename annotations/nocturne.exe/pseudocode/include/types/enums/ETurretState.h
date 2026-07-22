#pragma once

// Enum: ETurretState
enum {
    TURRET_STATE_IDLE = 0x0,
    TURRET_STATE_CHARGING = 0x1,
    TURRET_STATE_ACTIVE = 0x2,
    TURRET_STATE_PATROL = 0x3,
    TURRET_STATE_POWERING_DOWN = 0x4
};
typedef int ETurretState;

