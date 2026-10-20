#include "core/motion/motioncontroller.h"

#include "common/error/error.h"

#include <cmath>

namespace nocturne::core {

// deferred: starting with no motion list and no motion name, with setMotionList,
//   getMotionList and getCurrentStateName
// deferred: starting the tween at speed 0 towards motion 0, frame 0, direction 1 and no new
//   state (MOTION_TWEEN_INIT), with advanceTween and reverseTransition
// nocedit 0x0052d570
CMotionController::CMotionController() {
    reset();
}

// nocedit 0x0052d5a0
CMotionController::~CMotionController() = default;

// nocedit 0x0052dad0
void CMotionController::reset() {
    current_motion_index_ = 0;
    current_frame_number_ = 0.0F;
    in_transition_ = nullptr;
    state_index_ = -1;
    clearTweenState();
}

// nocedit 0x0052dc80
int CMotionController::findPatchToFrame(int /*source_motion_index*/, float /*source_frame*/,
                                        int /*target_motion_index*/) {
    common::displayErrorAndQuit(
        "CMotionController::findPatchToFrame should never be called for this base class!");
}

// A controller of its own has no root motion to gather.
// nocedit 0x0052e570
void CMotionController::accumulateScaledRootMotion(float /*start_frame*/, float /*end_frame*/,
                                                   float /*scale_factor*/) {}

// A NaN frame takes the patch too, as the original's unordered compare does.
// nocedit 0x0052dde0
void CMotionController::jumpToMotion(int target_motion_index, float target_frame_number) {
    if (!std::islessgreater(target_frame_number, kPatchFrame)) {
        target_frame_number = static_cast<float>(
            findPatchToFrame(current_motion_index_, current_frame_number_, target_motion_index));
    }
    in_transition_ = nullptr;
    current_motion_index_ = target_motion_index;
    current_frame_number_ = target_frame_number;
    clearTweenState();
}

// nocedit 0x0052de40
void CMotionController::clearTweenState() {
    tween_progress_ = -1.0F;
    tween_type_ = EMotionTransitionCmd::MOTION_CMD_NONE;
}

int CMotionController::getCurrentMotionIndex() const {
    return current_motion_index_;
}

float CMotionController::getCurrentFrameNumber() const {
    return current_frame_number_;
}

int CMotionController::getStateIndex() const {
    return state_index_;
}

const SMotionTransition *CMotionController::getInTransition() const {
    return in_transition_;
}

EMotionTransitionCmd CMotionController::getTweenType() const {
    return tween_type_;
}

float CMotionController::getTweenProgress() const {
    return tween_progress_;
}

} // namespace nocturne::core
