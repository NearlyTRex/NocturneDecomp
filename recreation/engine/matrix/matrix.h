#pragma once

#include "common/fwd.h"
#include "common/math/matrix3x3i.h"
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
    // The transform's inverse, in 16.16, for taking points back out of camera space.
    void invertTransformMatrix();
    void transformToCache(int cacheIndex, common::CVector3i *inputPoint);
    void projectCachedPoint(int cacheIndex);
    void projectTransformedPoint(platform::SProjectedVertex *point);
    void projectCachedPointUnchecked(int cache_index);
    // Saves the transform, origin and light direction, then turns them by the three angles and
    // moves the origin by the translation. Nine can be saved; a tenth is fatal.
    void matrixPushAndTransform(int rot_x, int rot_y, int rot_z, int translate_x, int translate_y,
                                int translate_z);
    // Saves the transform, origin and light direction as they are.
    void matrixPush();
    // Puts back the last saved; with none saved it is fatal.
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
    void setProjectionScale(int scale);
    // The angles alone; unlike setCameraRotation, the transform is not rebuilt from them.
    void storeCameraRotation(const common::CVector3i &rotation);
    // What carries a point into camera space: the rotation, then the origin added.
    [[nodiscard]] const common::CMatrix3x3i &getTransformMatrix() const;
    void setTransformMatrix(const common::CMatrix3x3i &transform);
    [[nodiscard]] const common::CVector3i &getRelativeOrigin() const;
    void setRelativeOrigin(const common::CVector3i &origin);
    [[nodiscard]] const common::CMatrix3x3i &getInverseMatrix() const;

private:
    // 256 entries to a turn, and a 257th equal to the first so interpolation can read one past.
    static constexpr int kTrigTableSize = 257;
    static constexpr std::size_t kViewportStackSize = 10;
    static constexpr std::size_t kMatrixStackSize = 10;

    struct STransformState {
        common::CMatrix3x3i transform;
        common::CVector3i relative_origin;
        common::CVector3i light_direction;
    };

    struct SViewportState {
        common::CVector3i camera_origin;
        common::CVector3i camera_rotation;
        common::CVector3i light_direction;
        SProjectionParams projection;
        int projection_scale = 0;
        SClipRect clip;
    };

    void initializeTrigTables();
    void pushTransformState();

    C2d &two_d_;
    CLight &light_;
    std::array<int, kTrigTableSize> sin_table_{};
    std::array<int, kTrigTableSize> cos_table_{};
    common::CVector3i camera_origin_;
    common::CVector3i camera_rotation_;
    int projection_scale_ = kUnitProjectionScale;
    std::array<SViewportState, kViewportStackSize> viewport_stack_{};
    std::size_t viewport_stack_index_ = 0;
    common::CMatrix3x3i transform_matrix_;
    common::CVector3i relative_origin_;
    common::CMatrix3x3i inverse_matrix_;
    std::array<STransformState, kMatrixStackSize> matrix_stack_{};
    std::size_t matrix_stack_index_ = 0;
};

} // namespace nocturne::engine
