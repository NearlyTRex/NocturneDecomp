#pragma once

#include "core/fwd.h"

namespace nocturne::core {

class CKeyFramedModel {
public:
    CKeyFramedModel();
    ~CKeyFramedModel();

    void load(char *filename);
    void free();
    void prepareForRender(int frame_index, CKeyFramedModelInstance *instance, int render_flags);
    CVector3i *getFrameVertices(int frame_index);
    void captureTextures();
    float intersectRay(int frame_index, CVector3f *ray_origin, CVector3f *ray_direction,
                       CVector3f *output_normal);
    void intersectCylinder(int frame_index, SIntersectXZCylinder *cylinder,
                           CVector3f *transform_vector);
    int getFloorHeight(int frame_index, CVector3f *position, float search_radius, float *out_height,
                       CVector3f *transform_vector);
};

} // namespace nocturne::core
