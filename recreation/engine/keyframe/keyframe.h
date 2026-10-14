#pragma once

#include "common/fwd.h"
#include "common/math/vector3i.h"
#include "engine/fwd.h"
#include "platform/clipplane.h"
#include "platform/fwd.h"

#include <span>

namespace nocturne::engine {

// The plane through the polygon's first three corners, wound as they are.
[[nodiscard]] platform::SClipPlane
calculateSurfaceNormal(std::span<const common::CVector3i> vertex_data,
                       const platform::SMRGLPrimitiveQuad &polygon);
void loadAndInterpolateKeyframes(SMRGLKeyframeModel *keyframe_model);
SMRGLHeaderExtended *interpolateCubicKeyframes(SMRGLKeyframeModel *keyframe_model);

} // namespace nocturne::engine
