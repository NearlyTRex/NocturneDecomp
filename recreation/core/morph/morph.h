#pragma once

#include "core/fwd.h"

namespace nocturne::core {

class CMorph {
public:
    CMorph();
    ~CMorph();

    void setupModelFromDeformable(int model_index, CDeformableModelInstance *model_ptr);
    void setupModelFromKeyframed(int model_index, CKeyFramedModel *model_ptr, int frame_index);
    void addPartFromKeyframedModel(int model_index, CKeyFramedModel *model_ptr, int frame_index);
    void updateModelFromDeformable(int model_index, CDeformableModelInstance *model_ptr,
                                   int part_index);
    void updateModelFromKeyframed(int model_index, CKeyFramedModel *model_ptr, int frame_index,
                                  int part_index);
    void getReady();
    void render(float morph_t);
};

} // namespace nocturne::core
