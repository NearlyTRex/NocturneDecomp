#pragma once

#include "common/fwd.h"
#include "core/fwd.h"
#include "core/motion/motiontransitioncmd.h"

#include <cstdio>
#include <string>

namespace nocturne::core {

// The two of the skeleton's frames a point in a motion lies between, and how far towards the
// second it is.
struct SInterpolationFrames {
    int frame_1 = 0;
    int frame_2 = 0;
    float blend_weight = 0.0F;
};

// Plays an actor's motions from its motion list: which motion and frame it is at, and how it is
// moving to the next.
class CMotionController {
public:
    // jumpToMotion's frame for the one findPatchToFrame picks.
    static constexpr float kPatchFrame = -1.0F;

    CMotionController();
    virtual ~CMotionController();
    CMotionController(const CMotionController &) = delete;
    CMotionController &operator=(const CMotionController &) = delete;
    CMotionController(CMotionController &&) = delete;
    CMotionController &operator=(CMotionController &&) = delete;

    virtual int findPatchToFrame(int source_motion_index, float source_frame,
                                 int target_motion_index);
    virtual void accumulateScaledRootMotion(float start_frame, float end_frame, float scale_factor);

    int advance(float *delta_time);
    // From the motion list.
    [[nodiscard]] const SMotion &getCurrentMotion() const;
    // Wants the state, -1 for none; one past the list's states is fatal. A new state drops the
    // transition under way, turning a tween back from before its midpoint. Forced, the current
    // motion's route to the state is taken at once.
    void setDesiredState(int desired_state_index, bool force_immediate);
    void setDesiredStateByName(char *state_name, int force_immediate);
    // Looks up the motion a file named, which isn't ported yet.
    void setMotionList(const CMotionList &motion_list);
    // Null until setMotionList.
    [[nodiscard]] const CMotionList *getMotionList() const;
    char *getCurrentStateName();
    float getStateBlendWeight(int desired_state_index);
    void jumpToMotionByName(char *motion_name, float frame_number);
    // Starts the motion at the frame, or at the frame findPatchToFrame gives for kPatchFrame,
    // dropping any transition or tween under way.
    void jumpToMotion(int target_motion_index, float target_frame_number);
    float frameToMarkerPosition();
    float markerPositionToFrame(int motion_index, float marker_position);
    // From the motion's first frame up to its last; past the last, towards where its forward
    // exit jumps to when it jumps from there.
    [[nodiscard]] SInterpolationFrames getFramesForInterpolation(int motion_index,
                                                                 float frame_number) const;
    // Reads the motion and frame a file saved, as an index or a quoted name, to the end of the
    // line. Neither is fatal.
    void load(common::CTextScanner &scanner);
    void save(std::FILE *file_handle, char *indent_prefix);
    void render(CDemonActor *actor);

    [[nodiscard]] int getCurrentMotionIndex() const;
    [[nodiscard]] float getCurrentFrameNumber() const;
    // The motion a file named instead of giving its index, until it is looked up; empty for none.
    [[nodiscard]] const std::string &getCurrentMotionName() const;
    // The state setDesiredState last moved to, or -1.
    [[nodiscard]] int getStateIndex() const;
    [[nodiscard]] const SMotionTransition *getInTransition() const;
    [[nodiscard]] EMotionTransitionCmd getTweenType() const;
    // From 0 to 1 through a tween, -1 outside one.
    [[nodiscard]] float getTweenProgress() const;
    // The motion and frame the tween blends towards.
    [[nodiscard]] int getTweenTargetMotion() const;
    [[nodiscard]] float getTweenTargetFrame() const;
    // Of the tween, a second.
    [[nodiscard]] float getTweenSpeed() const;
    // Once it has swapped its motions at the midpoint.
    [[nodiscard]] bool isTweenPastMidpoint() const;
    // keepState: the midpoint makes the state landed in the one wanted.
    [[nodiscard]] bool getTweenSetsNewState() const;

private:
    // The progress a tween starts at, as the original's float holds it.
    static constexpr float kTweenStartProgress = 0.001F;

    void reset();
    void clearTweenState();
    // The current motion's route to the wanted state, taken unless it is the one under way.
    // True when it cut straight to the motion.
    bool findAndStartTransition();
    // Cuts to the motion at once without a tween time, else starts the tween towards it.
    void startTransition(const SMotionTransition &transition);
    // Swaps the motion and frame with the tween's target, and the tween's progress runs back.
    void reverseTransition();

    const CMotionList *motion_list_ = nullptr;
    int current_motion_index_ = 0;
    float current_frame_number_ = 0.0F;
    std::string current_motion_name_;
    int state_index_ = -1;
    const SMotionTransition *in_transition_ = nullptr;
    EMotionTransitionCmd tween_type_ = EMotionTransitionCmd::MOTION_CMD_NONE;
    float tween_progress_ = -1.0F;
    float tween_speed_ = 0.0F;
    int tween_target_motion_ = 0;
    float tween_target_frame_ = 0.0F;
    // Past the midpoint from the start, so a new controller has no stale tween to turn back.
    bool tween_past_midpoint_ = true;
    bool tween_sets_new_state_ = false;
};

} // namespace nocturne::core
