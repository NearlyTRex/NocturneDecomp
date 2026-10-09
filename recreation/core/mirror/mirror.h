#pragma once

#include "common/fwd.h"
#include "core/fwd.h"
#include "engine/fwd.h"

namespace nocturne::core {

class CMirror {
public:
    CMirror();
    ~CMirror();

    void setupCorners(common::CVector3f *corner1, common::CVector3f *corner2,
                      common::CVector3f *corner3, common::CVector3f *corner4);
    void clipAndRenderReflectedPrimitive(engine::SMRGLHeaderPrimitive *prim);
    int renderReflectedPrimitive(engine::SMRGLHeaderPrimitive *prim);
    void renderMirroredPrimitive(engine::SMRGLHeaderPrimitive *prim);
    void renderMirrorQuadDepth();
};

} // namespace nocturne::core
