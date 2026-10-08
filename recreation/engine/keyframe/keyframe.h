#pragma once

#include "core/fwd.h"
#include "engine/fwd.h"

namespace nocturne::engine {

void calculateSurfaceNormal(core::CVector3i *vertex_data, SMRGLPrimitiveTriangle *texture);
void loadAndInterpolateKeyframes(SMRGLKeyframeModel *keyframe_model);
SMRGLHeaderExtended *interpolateCubicKeyframes(SMRGLKeyframeModel *keyframe_model);

} // namespace nocturne::engine
