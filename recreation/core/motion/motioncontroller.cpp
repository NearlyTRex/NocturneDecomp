#include "core/motion/motioncontroller.h"

#include "common/error/error.h"
#include "common/math/extendedfloat.h"
#include "common/text/scanformat.h"
#include "common/text/textscanner.h"
#include "core/actor/notported.h"
#include "core/motion/motionlist.h"

#include <cmath>
#include <cstddef>
#include <cstdint>
#include <span>
#include <string>

namespace nocturne::core {

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

} // namespace nocturne::core
