#pragma once

#include "common/fwd.h"
#include "platform/fwd.h"

namespace nocturne::core {

class CCameraView {
public:
    virtual ~CCameraView();

    virtual void setupPerspectiveAndFog(common::CVector3f *position,
                                        platform::SProjectedVertex *projected_vertex);
    virtual int getFogValueAtPosition(common::CVector3i *world_position,
                                      platform::SProjectedVertex *projected_vertex);
    virtual void saveAlphaTransform(int alpha_index);
};

} // namespace nocturne::core
