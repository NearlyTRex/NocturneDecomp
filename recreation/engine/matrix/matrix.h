#pragma once

#include "common/fwd.h"
#include "common/math/vector3i.h"
#include "engine/2d/2d.h"
#include "engine/fwd.h"
#include "platform/fwd.h"

#include <array>
#include <cstddef>

namespace nocturne::engine {

// The software renderer's fixed-point transform state: the trig tables, the matrix and viewport
// stacks and the camera. Angles are 65536 to a turn; sines and cosines are 16.16.
class CMatrix {
public:
    // The projection scale a fresh 3D window starts at: 1.0 in 16.16.
    static constexpr int kUnitProjectionScale = 0x10000;

    CMatrix(C2d &two_d, CLight &light);

    void doNothing();
    [[nodiscard]] int interpolatedSin(int angle) const;
    [[nodiscard]] int interpolatedCos(int angle) const;
    void invertTransformMatrix();
    void transformToCache(int cacheIndex, common::CVector3i *inputPoint);
    void projectCachedPoint(int cacheIndex);
    void projectTransformedPoint(platform::SProjectedVertex *point);
    void projectCachedPointUnchecked(int cache_index);
    void matrixPushAndTransform(int rot_x, int rot_y, int rot_z, int translate_x, int translate_y,
                                int translate_z);
    void matrixPush();
    void pop();
    common::CVector3i *normalizeVector3DFixed(common::CVector3i *input_vector,
                                              common::CVector3i *output_vector);
    common::CVector3i *normalizeVector3DFloat(common::CVector3i *input_vector,
                                              common::CVector3i *output_vector);
    void setCameraOrigin(int x, int y, int z);
    void setCameraRotation(int pitch, int yaw, int roll);
    [[nodiscard]] common::CVector3i getCameraOrigin() const;
    [[nodiscard]] common::CVector3i getCameraRotation() const;
    // Opens a 3D window: saves the camera, light, projection and clip, and clips to the
    // rectangle, which is one pixel wider and taller than width by height. Nine can be open.
    void pushViewport(int x, int y, int width, int height);
    // Puts back what the matching push saved; the viewport size stays the window's.
    void popViewport();
    [[nodiscard]] int getProjectionScale() const;

private:
    // 256 entries to a turn, and a 257th equal to the first so interpolation can read one past.
    static constexpr int kTrigTableSize = 257;
    static constexpr std::size_t kViewportStackSize = 10;

    struct SViewportState {
        common::CVector3i camera_origin;
        common::CVector3i camera_rotation;
        common::CVector3i light_direction;
        SProjectionParams projection;
        int projection_scale = 0;
        SClipRect clip;
    };

    void initializeTrigTables();

    C2d &two_d_;
    CLight &light_;
    std::array<int, kTrigTableSize> sin_table_{};
    std::array<int, kTrigTableSize> cos_table_{};
    common::CVector3i camera_origin_;
    common::CVector3i camera_rotation_;
    int projection_scale_ = kUnitProjectionScale;
    std::array<SViewportState, kViewportStackSize> viewport_stack_{};
    std::size_t viewport_stack_index_ = 0;
};

} // namespace nocturne::engine
