#pragma once

#include "core/fwd.h"

namespace nocturne::core {

class CCameraView {
public:
    virtual ~CCameraView();

    virtual void setupPerspectiveAndFog(CVector3f *position, SProjectedVertex *projected_vertex);
    virtual int getFogValueAtPosition(CVector3i *world_position,
                                      SProjectedVertex *projected_vertex);
    virtual int testVisibility(CVector3i *corners);
    virtual void saveAlphaTransform(int alpha_index);
};

} // namespace nocturne::core
