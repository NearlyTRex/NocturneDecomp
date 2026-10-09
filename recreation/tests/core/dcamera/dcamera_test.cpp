#include "core/dcamera/dcamera.h"

#include <gtest/gtest.h>

#include <type_traits>

namespace nocturne::core {
namespace {

TEST(CoreDcameraFunctions, PublicInterface) {
    static_assert(std::is_same_v<decltype(&staticInit), void (*)()>);
    static_assert(std::is_same_v<decltype(&initializeCoronaBuffers), void (*)()>);
    static_assert(std::is_same_v<decltype(&renderCoronaDepthScanline),
                                 void (*)(int, engine::SSoftwareEdge *, engine::SSoftwareEdge *)>);
    static_assert(std::is_same_v<decltype(&renderVolumetricLightScanline),
                                 void (*)(int, engine::SSoftwareEdge *, engine::SSoftwareEdge *)>);
    static_assert(std::is_same_v<decltype(&renderFlatColorScanline),
                                 void (*)(int, engine::SSoftwareEdge *, engine::SSoftwareEdge *)>);
    static_assert(std::is_same_v<decltype(&loadCameraFog), void (*)(SFog *, std::FILE *, int)>);
}

} // namespace
} // namespace nocturne::core
