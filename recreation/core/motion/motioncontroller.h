#pragma once

#include "core/fwd.h"

#include <cstdio>

namespace nocturne::core {

class CMotionController {
public:
    CMotionController();
    virtual ~CMotionController();

    virtual int findPatchToFrame();
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
    void jumpToMotion(int target_motion_index, float target_frame_number);
    float frameToMarkerPosition();
    float markerPositionToFrame(int motion_index, float marker_position);
    void getFramesForInterpolation(int motion_index, float frame_number, int *out_frame1,
                                   int *out_frame2, float *out_blend_weight);
    void load(std::FILE *file_handle);
    void save(std::FILE *file_handle, char *indent_prefix);
    void render(CDemonActor *actor);
};

} // namespace nocturne::core
