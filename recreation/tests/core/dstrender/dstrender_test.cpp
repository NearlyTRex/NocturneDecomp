#include "core/dstrender/dstrender.h"

#include <gtest/gtest.h>

#include <type_traits>

namespace nocturne::core {
namespace {

TEST(CoreDstrenderFunctions, PublicInterface) {
    static_assert(std::is_same_v<decltype(&renderDepthOnlyStandard),
                                 void (*)(SSoftwareEdge *, SSoftwareEdge *, int)>);
    static_assert(std::is_same_v<decltype(&renderDepth16BitConditional),
                                 void (*)(SSoftwareEdge *, SSoftwareEdge *, int)>);
    static_assert(std::is_same_v<decltype(&renderTexturedAlphaMMXScanline),
                                 void (*)(SSoftwareEdge *, SSoftwareEdge *, int)>);
    static_assert(std::is_same_v<decltype(&renderZBufferFill16xUnrolled),
                                 void (*)(SSoftwareEdge *, SSoftwareEdge *, int)>);
    static_assert(std::is_same_v<decltype(&renderSolidColorDepth16xUnrolled),
                                 void (*)(SSoftwareEdge *, SSoftwareEdge *, int)>);
    static_assert(std::is_same_v<decltype(&renderDepthInterlacedProfiled),
                                 void (*)(SSoftwareEdge *, SSoftwareEdge *, int)>);
    static_assert(std::is_same_v<decltype(&renderScreenDepthTestInterlacedProfiled),
                                 void (*)(SSoftwareEdge *, SSoftwareEdge *, int)>);
    static_assert(std::is_same_v<decltype(&renderDepthTestStatistics16xUnrolled),
                                 void (*)(SSoftwareEdge *, SSoftwareEdge *, int)>);
    static_assert(std::is_same_v<decltype(&renderPerspectiveCorrectTextured16xCached),
                                 void (*)(SSoftwareEdge *, SSoftwareEdge *, int)>);
    static_assert(std::is_same_v<decltype(&renderTexturedDecalMMXScanline),
                                 void (*)(SSoftwareEdge *, SSoftwareEdge *, int)>);
    static_assert(std::is_same_v<decltype(&blendHBilerpLightmapSharedU64toU64pBB12Px2MMX),
                                 void (*)(std::uint64_t *, std::uint64_t *, std::uint8_t *,
                                          std::uint8_t *, int)>);
    static_assert(std::is_same_v<decltype(&blendVHBilerpLightmapSharedU64toU64pAmbientPx2MMX),
                                 void (*)(std::uint64_t *, std::uint64_t *, std::uint8_t *,
                                          std::uint8_t *, int)>);
    static_assert(
        std::is_same_v<decltype(&blendLightmapSharedU32toU32NoBiasPx1MMX),
                       void (*)(std::uint32_t *, std::uint32_t *, std::uint8_t *, std::uint8_t *)>);
    static_assert(std::is_same_v<decltype(&memcpyMMX), void (*)(void *, void *, int)>);
    static_assert(std::is_same_v<decltype(&verticalBlur3TapMMXStride320),
                                 void (*)(std::uint64_t *, std::uint64_t *, int)>);
    static_assert(std::is_same_v<decltype(&blendLightmapPerPxU32toU32BB12Px2MMX),
                                 void (*)(std::uint32_t *, std::uint32_t *, std::uint8_t *,
                                          std::uint8_t *, int)>);
    static_assert(std::is_same_v<decltype(&blendLightmapPerPxU64toU32AmbientPx2MMX),
                                 void (*)(std::uint32_t *, std::uint64_t *, std::uint8_t *,
                                          std::uint8_t *, int)>);
    static_assert(std::is_same_v<decltype(&alphaBlendPixelsMMX),
                                 void (*)(std::uint32_t *, std::uint32_t *, std::uint32_t *,
                                          std::uint32_t, std::uint32_t, int)>);
    static_assert(std::is_same_v<decltype(&blendHBilerpLightmapSharedU64toU16pBB56Px2MMX),
                                 void (*)(std::uint32_t *, std::uint64_t *, std::uint8_t *,
                                          std::uint8_t *, int)>);
    static_assert(std::is_same_v<decltype(&blendVHBilerpLightmapSharedU64toU16pBB34Px2MMX),
                                 void (*)(std::uint32_t *, std::uint64_t *, std::uint8_t *,
                                          std::uint8_t *, int)>);
    static_assert(
        std::is_same_v<decltype(&blendLightmapSharedU32toU16pNoBiasPx1MMX),
                       void (*)(std::uint16_t *, std::uint32_t *, std::uint8_t *, std::uint8_t *)>);
    static_assert(std::is_same_v<decltype(&blendLightmapPerPxU32toU16pBB12Px2MMX),
                                 void (*)(std::uint32_t *, std::uint32_t *, std::uint8_t *,
                                          std::uint8_t *, int)>);
    static_assert(std::is_same_v<decltype(&blendLightmapPerPxU64toU16pAmbientPx2MMX),
                                 void (*)(std::uint32_t *, std::uint64_t *, std::uint8_t *,
                                          std::uint8_t *, int)>);
}

} // namespace
} // namespace nocturne::core
