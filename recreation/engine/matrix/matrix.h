#pragma once

#include "common/fwd.h"
#include "platform/fwd.h"

#include <array>

namespace nocturne::engine {

// The software renderer's fixed-point transform state: the trig tables, the matrix and viewport
// stacks and the camera. Angles are 65536 to a turn; sines and cosines are 16.16.
class CMatrix {
public:
    CMatrix();

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
    void getCameraOrigin(common::CVector3i *output);
    void getCameraRotation(common::CVector3i *output);
    void pushViewport(int x, int y, int width, int height);
    void popViewport();

private:
    // 256 entries to a turn, and a 257th equal to the first so interpolation can read one past.
    static constexpr int kTrigTableSize = 257;

    void initializeTrigTables();

    std::array<int, kTrigTableSize> sin_table_{};
    std::array<int, kTrigTableSize> cos_table_{};
};

} // namespace nocturne::engine
