#pragma once

#include "common/fwd.h"
#include "core/fwd.h"
#include "platform/fwd.h"

namespace nocturne::core {

class CMorphModel {
public:
    CMorphModel();
    ~CMorphModel();

    void free();
    void addPartFromPolygon(int vertex_count, common::CVector3i *vertex_data, int poly_count,
                            platform::SMRGLHeaderPrimitive *poly_data, int poly_stride,
                            SMRGLTextureModel *texture_list, int *texture_index_list);
    void addPartFromDeformableModel(CDeformableModelInstance *model_ptr);
    void addPartFromKeyFramedModel(CKeyFramedModel *model_ptr, int frame_index);
    void animateFromPartVertexBuffer(int part_index, common::CVector3i *vertex_buffer);
    void animateFromDeformableModel(int part_index, CDeformableModelInstance *model_ptr);
    void animateFromKeyframedModel(int part_index, CKeyFramedModel *model_ptr, int frame_index);
    void render(float morph_t, SMorphPoint *ref_points);
    int findNearestPoint(common::CVector3f *position);
};

} // namespace nocturne::core
