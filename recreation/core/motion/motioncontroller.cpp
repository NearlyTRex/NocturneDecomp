#include "core/motion/motioncontroller.h"

#include "common/error/error.h"
#include "common/math/extendedfloat.h"
#include "common/text/scanformat.h"
#include "common/text/textscanner.h"
#include "core/actor/notported.h"
#include "core/motion/motionlist.h"

#include <algorithm>
#include <cmath>
#include <cstddef>
#include <cstdint>
#include <span>
#include <string>
#include <utility>

namespace nocturne::core {

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

// nocedit 0x0052dab0
const SMotion &CMotionController::getCurrentMotion() const {
    return motion_list_->getMotions()[static_cast<std::size_t>(current_motion_index_)];
}

// nocedit 0x0052db00
void CMotionController::setDesiredState(int desired_state_index, bool force_immediate) {
    if (desired_state_index < 0) {
        state_index_ = -1;
        return;
    }
    if (static_cast<std::size_t>(desired_state_index) >= motion_list_->getStateNames().size()) {
        common::displayErrorAndQuit("CMotionController::setDesiredState - invalid state index");
    }
    if (desired_state_index != state_index_) {
        if (in_transition_ != nullptr) {
            if (!tween_past_midpoint_) {
                reverseTransition();
            }
            in_transition_ = nullptr;
        }
        tween_sets_new_state_ = false;
        state_index_ = desired_state_index;
    }
    if (force_immediate) {
        findAndStartTransition();
    }
}

// A command of none matches the state and drops what was under way without going anywhere. The
// original also checks the route found isn't the one under way, which the check before rules out.
// deferred: no state wanted dropping the route under way and taking none, with advance
// deferred: a route under way for another state than the one wanted, as keepState leaves one at a
//   tween's midpoint, giving way to the wanted state's route, with advance
// nocedit 0x0052d950
bool CMotionController::findAndStartTransition() {
    const SMotion &motion = getCurrentMotion();
    if (state_index_ == motion.state_index) {
        in_transition_ = nullptr;
        return false;
    }
    if (in_transition_ != nullptr) {
        return false;
    }
    const auto route =
        std::ranges::find(motion.transitions, state_index_, &SMotionTransition::desired_state);
    if (route == motion.transitions.end()) {
        return false;
    }
    const SMotionTransition &transition = *route;
    clearTweenState();
    if (transition.cmd == EMotionTransitionCmd::MOTION_CMD_JUMP) {
        jumpToMotion(transition.to_motion_number, transition.to_frame_number);
        if (transition.set_new_state_as_desired) {
            state_index_ = getCurrentMotion().state_index;
        }
        return true;
    }
    if (transition.cmd == EMotionTransitionCmd::MOTION_CMD_WAIT_EXIT) {
        in_transition_ = &transition;
    } else if (transition.cmd != EMotionTransitionCmd::MOTION_CMD_NONE) {
        in_transition_ = &transition;
        startTransition(transition);
    }
    return false;
}

// A NaN frame takes the patch, and a NaN tween time tweens, as the original's unordered compares
// do.
// nocedit 0x0052dbc0
void CMotionController::startTransition(const SMotionTransition &transition) {
    float target_frame = transition.to_frame_number;
    if (!std::islessgreater(target_frame, kPatchFrame)) {
        target_frame = static_cast<float>(findPatchToFrame(
            current_motion_index_, current_frame_number_, transition.to_motion_number));
    }
    if (transition.tween_time <= 0.0F) {
        jumpToMotion(transition.to_motion_number, target_frame);
        if (transition.set_new_state_as_desired) {
            state_index_ = getCurrentMotion().state_index;
        }
        return;
    }
    tween_target_motion_ = transition.to_motion_number;
    tween_target_frame_ = target_frame;
    tween_progress_ = kTweenStartProgress;
    tween_type_ = transition.cmd;
    tween_past_midpoint_ = false;
    tween_speed_ = 1.0F / transition.tween_time;
    tween_sets_new_state_ = transition.set_new_state_as_desired;
}

// A tween that plays only its target plays only the current motion once they swap, and the
// other way about.
// nocedit 0x0052da50
void CMotionController::reverseTransition() {
    tween_past_midpoint_ = true;
    std::swap(current_motion_index_, tween_target_motion_);
    std::swap(current_frame_number_, tween_target_frame_);
    if (tween_type_ == EMotionTransitionCmd::MOTION_CMD_TWEEN_ADVANCE_BOTH) {
        tween_type_ = EMotionTransitionCmd::MOTION_CMD_TWEEN_ADVANCE;
    } else if (tween_type_ == EMotionTransitionCmd::MOTION_CMD_TWEEN_ADVANCE) {
        tween_type_ = EMotionTransitionCmd::MOTION_CMD_TWEEN_ADVANCE_BOTH;
    }
    tween_progress_ = 1.0F - tween_progress_;
}

// The motion by its index, or failing that by its quoted name with no index, then the frame. A
// number read before the failure stays, as fscanf leaves it.
// nocedit 0x0052e5d0
void CMotionController::load(common::CTextScanner &scanner) {
    scanner.skipWhitespace();
    current_motion_name_.clear();
    current_motion_index_ = -1;
    if (common::scanFormat(scanner, "%d,%f", current_motion_index_, current_frame_number_) != 2 &&
        common::scanFormat(scanner, R"("%[^"]" , %f)", current_motion_name_,
                           current_frame_number_) != 2) {
        common::displayErrorAndQuit("CMotionController::load - error parsing file");
    }
    scanner.skipLine();
}

// deferred: looking up the motion a file named, with CMotionList::findMotionIndex
// nocedit 0x0052dcb0
void CMotionController::setMotionList(const CMotionList &motion_list) {
    motion_list_ = &motion_list;
    if (!current_motion_name_.empty()) {
        quitNotPorted("CMotionList", "findMotionIndex");
    }
}

// nocedit 0x0052dce0
const CMotionList *CMotionController::getMotionList() const {
    return motion_list_;
}

// Each frame's start and position add at the x87's precision and are then chopped, as the CRT
// round does. A NaN position is past the last frame, and is taken as having jumped.
// nocedit 0x0052e4c0
SInterpolationFrames CMotionController::getFramesForInterpolation(int motion_index,
                                                                  float frame_number) const {
    const std::span<const SMotion> motions = motion_list_->getMotions();
    const SMotion &motion = motions[static_cast<std::size_t>(motion_index)];
    if (frame_number <= 0.0F) {
        return {.frame_1 = motion.frame_start, .frame_2 = motion.frame_start};
    }
    const int last_frame = motion.frame_count - 1;
    if (static_cast<double>(last_frame) > frame_number) {
        const common::CExtendedFloat position =
            common::CExtendedFloat(motion.frame_start) + common::CExtendedFloat(frame_number);
        const std::int32_t frame_1 = position.truncateToInt();
        return {.frame_1 = frame_1,
                .frame_2 = frame_1 + 1,
                .blend_weight =
                    (position + common::CExtendedFloat(-static_cast<double>(frame_1))).toFloat()};
    }
    const int frame_1 = motion.frame_start + last_frame;
    if (last_frame > motion.exit_forward_from_frame ||
        motion.exit_forward_cmd != EMotionTransitionCmd::MOTION_CMD_JUMP) {
        return {.frame_1 = frame_1, .frame_2 = frame_1};
    }
    const SMotion &target = motions[static_cast<std::size_t>(motion.exit_forward_to_motion)];
    const std::int32_t frame_2 = (common::CExtendedFloat(target.frame_start) +
                                  common::CExtendedFloat(motion.exit_forward_to_frame))
                                     .truncateToInt();
    const double past_last = static_cast<double>(frame_number) - last_frame;
    if (!(1.0 > past_last)) {
        return {.frame_1 = frame_2, .frame_2 = frame_2};
    }
    return {.frame_1 = frame_1, .frame_2 = frame_2, .blend_weight = static_cast<float>(past_last)};
}

const std::string &CMotionController::getCurrentMotionName() const {
    return current_motion_name_;
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

int CMotionController::getTweenTargetMotion() const {
    return tween_target_motion_;
}

float CMotionController::getTweenTargetFrame() const {
    return tween_target_frame_;
}

float CMotionController::getTweenSpeed() const {
    return tween_speed_;
}

bool CMotionController::isTweenPastMidpoint() const {
    return tween_past_midpoint_;
}

bool CMotionController::getTweenSetsNewState() const {
    return tween_sets_new_state_;
}

} // namespace nocturne::core
