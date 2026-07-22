#pragma once

// Enum: EMotionTransitionCmd
enum {
    MOTION_CMD_NONE = 0x0,
    MOTION_CMD_JUMP = 0x1,
    MOTION_CMD_WAIT_EXIT = 0x2,
    MOTION_CMD_TWEEN = 0x3,
    MOTION_CMD_TWEEN_ADVANCE = 0x4,
    MOTION_CMD_TWEEN_ADVANCE_BOTH = 0x5,
    MOTION_CMD_TWEEN_BIDIR = 0x6
};
typedef int EMotionTransitionCmd;

