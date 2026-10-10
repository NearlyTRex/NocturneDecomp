#pragma once

#include "common/fwd.h"
#include "core/fwd.h"

namespace nocturne::core {

class CCloth {
public:
    CCloth();
    ~CCloth();

    int load(char *filename);
    void setup(common::CVector3f *position, common::CVector3f *euler,
               CDeformableModelInstance *model_ptr);
    void process(common::CVector3f *position, common::CVector3f *euler, float delta_time,
                 float floor_y, CDeformableModelInstance *model_ptr);
    int saveJoinedLight(CDeformableModelInstance *model_ptr);
    void render(CDeformableModelInstance *deformable_model);
    void grabCloth(char *bone_name, int vertex_index);
    void resetState(int vertex_index);
    void applyRotation(common::CVector3f *euler);
};

} // namespace nocturne::core
