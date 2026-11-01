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
#include <format>
#include <span>
#include <string>
#include <utility>

namespace nocturne::core {
namespace {

// The most steps one advance takes; time left after them is dropped.
constexpr int kMaxAdvanceSteps = 5;
// Time to advance at or below this is none. The original holds it as a double.
constexpr double kMinAdvanceTime = 1e-05;
// A tween swaps its motions once its progress passes this, before half way, as a double.
constexpr double kTweenMidpoint = 0.4999;
// Where a tween's progress runs to, and as a double the original works it from.
constexpr double kTweenHalf = 0.5;
// A tween past its midpoint ends once its progress is below this, as a double.
constexpr double kTweenEnd = 0.0001;
// How short of an exit a frame still counts as before it, as a double.
constexpr double kExitMargin = 0.0001;
// A signal's frame is taken from this far ahead, and the frame stops this far past it, as a double.
constexpr double kSignalReach = 0.001;

bool isTween(EMotionTransitionCmd command) {
    return command >= EMotionTransitionCmd::MOTION_CMD_TWEEN &&
           command <= EMotionTransitionCmd::MOTION_CMD_TWEEN_BIDIR;
}

common::CExtendedFloat extended(double value) {
    return common::CExtendedFloat(value);
}

// The int and the float added at the x87's precision, then stored.
float addStored(int whole, float part) {
    return (extended(whole) + extended(part)).toFloat();
}

// As far as delta_time takes the frame at the motion's rate, at the x87's precision, then stored.
float stepFrame(const SMotion &motion, float frame, float delta_time) {
    return ((extended(delta_time) * extended(motion.fps)) + extended(frame)).toFloat();
}

// The time from the frame to the end frame at the motion's rate.
float timeBetween(const SMotion &motion, float frame, double end) {
    return ((extended(end) - extended(frame)) / extended(motion.fps)).toFloat();
}

// The last signal the step from the frame reaches, each one reached cutting it short to just past
// that signal; 0 for none. A NaN end reaches none.
struct SSignalStep {
    float end = 0.0F;
    int signal = 0;
};

SSignalStep findSignal(const SMotion &motion, float frame, float end) {
    SSignalStep step{.end = end};
    for (const SMotionSignal &signal : motion.signals) {
        const auto signal_frame = static_cast<float>(signal.frame_number);
        if (!(frame > signal_frame) &&
            extended(step.end) + extended(kSignalReach) >= extended(signal_frame)) {
            step.end = (extended(signal_frame) + extended(kSignalReach)).toFloat();
            step.signal = signal.value;
        }
    }
    return step;
}

} // namespace

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

// A command that isn't a cut, a wait or a tween matches the state and drops what was under way
// without going anywhere. The original also takes the wanted state's route when the one under way
// is for another, which can't be: a new state drops the route, and keepState only changes the
// state as a route lands, in the step that drops it. Nor can the route found be the one under way.
// nocedit 0x0052d950
bool CMotionController::findAndStartTransition() {
    const SMotion &motion = getCurrentMotion();
    if (state_index_ < 0 || state_index_ == motion.state_index) {
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
    } else if (isTween(transition.cmd)) {
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

// nocedit 0x0052d610
int CMotionController::advance(float &delta_time) {
    for (int step = 0; step < kMaxAdvanceSteps; ++step) {
        if (!(static_cast<double>(delta_time) > kMinAdvanceTime)) {
            break;
        }
        if (findAndStartTransition()) {
            continue;
        }
        float step_time = delta_time;
        const int signal = 0.0F > tween_progress_ ? stepToExit(step_time) : stepTween(step_time);
        delta_time -= step_time;
        if (in_transition_ != nullptr &&
            in_transition_->to_motion_number == current_motion_index_) {
            in_transition_ = nullptr;
        }
        if (signal != 0) {
            return signal;
        }
    }
    delta_time = 0.0F;
    return 0;
}

int CMotionController::stepToExit(float &step_time) {
    SMotionTransition exit;
    const int signal =
        advanceFrameToExitPoint(current_motion_index_, current_frame_number_, step_time, exit);
    if (exit.cmd == EMotionTransitionCmd::MOTION_CMD_JUMP ||
        exit.cmd == EMotionTransitionCmd::MOTION_CMD_WAIT_EXIT) {
        current_motion_index_ = exit.to_motion_number;
        current_frame_number_ = exit.to_frame_number;
        if (exit.set_new_state_as_desired) {
            state_index_ = getCurrentMotion().state_index;
        }
    } else if (isTween(exit.cmd)) {
        startTransition(exit);
    } else {
        common::displayErrorAndQuit(std::format(
            "Invalid transition command returned by CMotionControler::advanceComplex: {}",
            static_cast<int>(exit.cmd)));
    }
    return signal;
}

// The original also quits on a tween of any other type, which startTransition never starts.
int CMotionController::stepTween(float &step_time) {
    const common::CExtendedFloat left_to_run =
        tween_past_midpoint_ ? extended(tween_progress_)
                             : extended(kTweenHalf) - extended(tween_progress_);
    // A NaN time left stays NaN.
    const float time_left = std::max((left_to_run / extended(tween_speed_)).toFloat(), 0.0F);
    if (!(time_left >= step_time)) {
        step_time = time_left;
    }
    int signal = 0;
    bool target_plays = false;
    if (!(0.0F >= step_time)) {
        if (tween_type_ == EMotionTransitionCmd::MOTION_CMD_TWEEN_ADVANCE) {
            target_plays = true;
            advanceTween(tween_target_motion_, tween_target_frame_, step_time);
        } else if (tween_type_ == EMotionTransitionCmd::MOTION_CMD_TWEEN_ADVANCE_BOTH ||
                   tween_type_ == EMotionTransitionCmd::MOTION_CMD_TWEEN_BIDIR) {
            advanceTween(current_motion_index_, current_frame_number_, step_time);
            if (tween_type_ == EMotionTransitionCmd::MOTION_CMD_TWEEN_BIDIR) {
                target_plays = true;
                advanceTween(tween_target_motion_, tween_target_frame_, step_time);
            }
            signal = advanceFrameAndCheckSignals(current_motion_index_, current_frame_number_,
                                                 step_time, tween_progress_);
        }
    }
    if (target_plays) {
        const int target_signal = advanceFrameAndCheckSignals(
            tween_target_motion_, tween_target_frame_, step_time, 1.0F - tween_progress_);
        if (signal == 0) {
            signal = target_signal;
        }
    }
    const common::CExtendedFloat moved = extended(step_time) * extended(tween_speed_);
    if (!tween_past_midpoint_) {
        const common::CExtendedFloat progress = moved + extended(tween_progress_);
        tween_progress_ = progress.toFloat();
        if (progress > extended(kTweenMidpoint)) {
            reverseTransition();
            if (tween_sets_new_state_) {
                state_index_ = getCurrentMotion().state_index;
            }
        }
        return signal;
    }
    const common::CExtendedFloat progress = extended(tween_progress_) - moved;
    tween_progress_ = progress.toFloat();
    if (!(progress >= extended(kTweenEnd))) {
        clearTweenState();
    }
    return signal;
}

// A NaN step runs the frame to NaN, before the motion's end.
// nocedit 0x0052de70
int CMotionController::advanceFrameAndCheckSignals(int &motion_index, float &frame_number,
                                                   float delta_time, float scale_factor) {
    const SMotion &motion = motion_list_->getMotions()[static_cast<std::size_t>(motion_index)];
    const SSignalStep step =
        findSignal(motion, frame_number, stepFrame(motion, frame_number, delta_time));
    if (!(extended(step.end) >= extended(motion.frame_count) + extended(-kExitMargin))) {
        accumulateScaledRootMotion(addStored(motion.frame_start, frame_number),
                                   addStored(motion.frame_start, step.end), scale_factor);
        frame_number = step.end;
        return step.signal;
    }
    accumulateScaledRootMotion(addStored(motion.frame_start, frame_number),
                               static_cast<float>(motion.frame_start + motion.frame_count),
                               scale_factor);
    const int last_frame = motion.frame_count - 1;
    if (isTween(motion.exit_forward_cmd)) {
        frame_number = static_cast<float>(last_frame);
        return step.signal;
    }
    float exit_frame = motion.exit_forward_to_frame;
    if (!std::islessgreater(exit_frame, kPatchFrame)) {
        exit_frame = static_cast<float>(findPatchToFrame(
            motion_index, static_cast<float>(last_frame), motion.exit_forward_to_motion));
    }
    motion_index = motion.exit_forward_to_motion;
    frame_number = exit_frame;
    return step.signal;
}

// Before the exit frame the step is a cut to where it reached; otherwise the motion's exit, taken
// to the target of a route waiting for it. A NaN step counts as before the exit.
// nocedit 0x0052e020
int CMotionController::advanceFrameToExitPoint(int motion_index, float current_frame,
                                               float &delta_time,
                                               SMotionTransition &out_transition) {
    const SMotion &motion = motion_list_->getMotions()[static_cast<std::size_t>(motion_index)];
    const float full_step = stepFrame(motion, current_frame, delta_time);
    const SSignalStep step = findSignal(motion, current_frame, full_step);
    if (!(extended(step.end) >=
          extended(motion.exit_forward_from_frame) + extended(-kExitMargin))) {
        accumulateScaledRootMotion(addStored(motion.frame_start, current_frame),
                                   addStored(motion.frame_start, step.end), 1.0F);
        out_transition.cmd = EMotionTransitionCmd::MOTION_CMD_JUMP;
        out_transition.set_new_state_as_desired = false;
        out_transition.to_motion_number = motion_index;
        out_transition.to_frame_number = step.end;
        if (!(step.end >= full_step)) {
            delta_time = timeBetween(motion, current_frame, step.end);
        }
        return step.signal;
    }
    accumulateScaledRootMotion(
        addStored(motion.frame_start, current_frame),
        static_cast<float>(motion.frame_start + motion.exit_forward_from_frame), 1.0F);
    out_transition.cmd = motion.exit_forward_cmd;
    out_transition.to_motion_number = motion.exit_forward_to_motion;
    out_transition.to_frame_number = motion.exit_forward_to_frame;
    out_transition.tween_time = motion.exit_forward_tween_time;
    out_transition.set_new_state_as_desired = motion.exit_forward_set_new_state;
    if (in_transition_ != nullptr &&
        in_transition_->cmd == EMotionTransitionCmd::MOTION_CMD_WAIT_EXIT) {
        out_transition.to_motion_number = in_transition_->to_motion_number;
        out_transition.to_frame_number = in_transition_->to_frame_number;
    }
    delta_time = timeBetween(motion, current_frame, motion.exit_forward_from_frame);
    return step.signal;
}

// The step cut short at the first signal it reaches, or at the motion's end.
// nocedit 0x0052e1d0
void CMotionController::advanceTween(int motion_index, float current_frame,
                                     float &remaining_time) const {
    const SMotion &motion = motion_list_->getMotions()[static_cast<std::size_t>(motion_index)];
    const float full_step = stepFrame(motion, current_frame, remaining_time);
    // A NaN end stays NaN.
    const float end = std::min(findSignal(motion, current_frame, full_step).end,
                               static_cast<float>(motion.frame_count));
    if (!(end >= full_step)) {
        remaining_time = timeBetween(motion, current_frame, end);
    }
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

// nocedit 0x0052dcb0
void CMotionController::setMotionList(const CMotionList &motion_list) {
    motion_list_ = &motion_list;
    if (current_motion_name_.empty()) {
        return;
    }
    current_motion_index_ = motion_list_->findMotionIndex(current_motion_name_, true);
    current_motion_name_.clear();
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

// A dropped tween leaves nothing to turn back. The original leaves one dropped before its midpoint
// unturned, so a new state with a route waiting turns back the tween that has gone: the motion
// swaps for its stale target, and its progress of 2 runs advance into a fatal error.
// nocedit 0x0052de40
void CMotionController::clearTweenState() {
    tween_progress_ = -1.0F;
    tween_type_ = EMotionTransitionCmd::MOTION_CMD_NONE;
    tween_past_midpoint_ = true;
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
