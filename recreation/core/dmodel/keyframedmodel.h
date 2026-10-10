#pragma once

#include "common/fwd.h"
#include "core/fwd.h"

namespace nocturne::core {

class CKeyFramedModel {
public:
    CKeyFramedModel();
    ~CKeyFramedModel();

    void load(char *filename);
    void free();
    void prepareForRender(int frame_index, CKeyFramedModelInstance *instance, int render_flags);
    common::CVector3i *getFrameVertices(int frame_index);
    void captureTextures();
    float intersectRay(int frame_index, common::CVector3f *ray_origin,
                       common::CVector3f *ray_direction, common::CVector3f *output_normal);
    void intersectCylinder(int frame_index, SIntersectXZCylinder *cylinder,
                           common::CVector3f *transform_vector);
    int getFloorHeight(int frame_index, common::CVector3f *position, float search_radius,
                       float *out_height, common::CVector3f *transform_vector);
};

} // namespace nocturne::core
