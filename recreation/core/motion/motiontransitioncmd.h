#pragma once

#include <cstdint>

namespace nocturne::core {

// How a motion controller moves to its next motion.
enum class EMotionTransitionCmd : std::uint8_t {
    MOTION_CMD_NONE = 0,
    MOTION_CMD_JUMP = 1,
    MOTION_CMD_WAIT_EXIT = 2,
    MOTION_CMD_TWEEN = 3,
    MOTION_CMD_TWEEN_ADVANCE = 4,
    MOTION_CMD_TWEEN_ADVANCE_BOTH = 5,
    MOTION_CMD_TWEEN_BIDIR = 6,
};

} // namespace nocturne::core
