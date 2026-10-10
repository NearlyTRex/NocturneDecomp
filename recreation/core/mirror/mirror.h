#pragma once

#include "common/fwd.h"
#include "core/fwd.h"
#include "platform/fwd.h"

namespace nocturne::core {

class CMirror {
public:
    CMirror();
    ~CMirror();

    void setupCorners(common::CVector3f *corner1, common::CVector3f *corner2,
                      common::CVector3f *corner3, common::CVector3f *corner4);
    void clipAndRenderReflectedPrimitive(platform::SMRGLHeaderPrimitive *prim);
    int renderReflectedPrimitive(platform::SMRGLHeaderPrimitive *prim);
    void renderMirroredPrimitive(platform::SMRGLHeaderPrimitive *prim);
    void renderMirrorQuadDepth();
};

} // namespace nocturne::core
