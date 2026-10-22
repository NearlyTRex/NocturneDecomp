#pragma once

#include "core/fwd.h"
#include "core/motion/motiontransitioncmd.h"

#include <cstdio>

namespace nocturne::core {

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
    SMotion *getCurrentMotion();
    void setDesiredState(int desired_state_index, int force_immediate);
    void setDesiredStateByName(char *state_name, int force_immediate);
    void setMotionList(CMotionList *motion_list);
    CMotionList *getMotionList();
    char *getCurrentStateName();
    float getStateBlendWeight(int desired_state_index);
    void jumpToMotionByName(char *motion_name, float frame_number);
    // Starts the motion at the frame, or at the frame findPatchToFrame gives for kPatchFrame,
    // dropping any transition or tween under way.
    void jumpToMotion(int target_motion_index, float target_frame_number);
    float frameToMarkerPosition();
    float markerPositionToFrame(int motion_index, float marker_position);
    void getFramesForInterpolation(int motion_index, float frame_number, int *out_frame1,
                                   int *out_frame2, float *out_blend_weight);
    void load(std::FILE *file_handle);
    void save(std::FILE *file_handle, char *indent_prefix);
    void render(CDemonActor *actor);

    [[nodiscard]] int getCurrentMotionIndex() const;
    [[nodiscard]] float getCurrentFrameNumber() const;
    // The state setDesiredState last moved to, or -1.
    [[nodiscard]] int getStateIndex() const;
    [[nodiscard]] const SMotionTransition *getInTransition() const;
    [[nodiscard]] EMotionTransitionCmd getTweenType() const;
    // From 0 to 1 through a tween, -1 outside one.
    [[nodiscard]] float getTweenProgress() const;

private:
    void reset();
    void clearTweenState();

    int current_motion_index_ = 0;
    float current_frame_number_ = 0.0F;
    int state_index_ = -1;
    const SMotionTransition *in_transition_ = nullptr;
    EMotionTransitionCmd tween_type_ = EMotionTransitionCmd::MOTION_CMD_NONE;
    float tween_progress_ = -1.0F;
};

} // namespace nocturne::core
