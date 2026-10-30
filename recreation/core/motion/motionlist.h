#pragma once

#include "common/fwd.h"
#include "core/fwd.h"
#include "core/motion/motiontransitioncmd.h"

#include <span>
#include <string>
#include <vector>

namespace nocturne::core {

// A way from a motion to the next, taken when the controller wants the state.
struct SMotionTransition {
    int desired_state = 0;
    EMotionTransitionCmd cmd = EMotionTransitionCmd::MOTION_CMD_NONE;
    int to_motion_number = 0;
    float to_frame_number = 0.0F;
    // Seconds.
    float tween_time = 0.0F;
    // keepState: the state the motion lands in becomes the one wanted.
    bool set_new_state_as_desired = false;
};

// A value a motion hands the game as it passes the frame.
struct SMotionSignal {
    int frame_number = 0;
    int value = 0;
};

// A run of the skeleton's frames, with the exits it leaves by and what it signals.
struct SMotion {
    std::string motion_name;
    float fps = 0.0F;
    int state_index = 0;
    // Into the skeleton's frames.
    int frame_start = 0;
    int frame_count = 0;
    int exit_forward_from_frame = 0;
    int exit_forward_to_motion = 0;
    float exit_forward_to_frame = 0.0F;
    EMotionTransitionCmd exit_forward_cmd = EMotionTransitionCmd::MOTION_CMD_NONE;
    float exit_forward_tween_time = 0.0F;
    bool exit_forward_set_new_state = false;
    int exit_backward_to_motion = 0;
    float exit_backward_to_frame = 0.0F;
    std::vector<SMotionTransition> transitions;
    std::vector<SMotionSignal> signals;
    std::vector<int> markers;
};

// A skeleton's states and motions, as its file lists them after the frames.
class CMotionList {
public:
    CMotionList();

    // A version past 2 is fatal; markers come from version 2. The original's fixed lists of 80
    // states, 120 motions and 45 transitions, 15 signals and 10 markers a motion overran.
    void load(common::CTextScanner &scanner);
    int findMotionIndex(char *motion_name, int error_on_not_found);
    int findStateIndex(char *state_name, int error_on_not_found);

    [[nodiscard]] std::span<const std::string> getStateNames() const;
    [[nodiscard]] std::span<const SMotion> getMotions() const;

private:
    static void loadMotion(common::CTextScanner &scanner, int version, SMotion &motion);

    std::vector<std::string> state_names_;
    std::vector<SMotion> motions_;
};

} // namespace nocturne::core
