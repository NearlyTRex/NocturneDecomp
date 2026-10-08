#pragma once

#include "core/fwd.h"
#include "engine/fwd.h"

namespace nocturne::core {

class CMirror {
public:
    CMirror();
    ~CMirror();

    void setupCorners(CVector3f *corner1, CVector3f *corner2, CVector3f *corner3,
                      CVector3f *corner4);
    void clipAndRenderReflectedPrimitive(engine::SMRGLHeaderPrimitive *prim);
    int renderReflectedPrimitive(engine::SMRGLHeaderPrimitive *prim);
    void renderMirroredPrimitive(engine::SMRGLHeaderPrimitive *prim);
    void renderMirrorQuadDepth();
};

} // namespace nocturne::core
