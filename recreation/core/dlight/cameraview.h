#pragma once

#include "common/fwd.h"
#include "engine/fwd.h"

namespace nocturne::core {

class CCameraView {
public:
    virtual ~CCameraView();

    virtual void setupPerspectiveAndFog(common::CVector3f *position,
                                        engine::SProjectedVertex *projected_vertex);
    virtual int getFogValueAtPosition(common::CVector3i *world_position,
                                      engine::SProjectedVertex *projected_vertex);
    virtual void saveAlphaTransform(int alpha_index);
};

} // namespace nocturne::core
