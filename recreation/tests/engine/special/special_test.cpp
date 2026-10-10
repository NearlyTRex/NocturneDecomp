#include "engine/special/special.h"

#include <gtest/gtest.h>

#include <type_traits>

namespace nocturne::engine {
namespace {

TEST(EngineSpecialFunctions, PublicInterface) {
    static_assert(std::is_same_v<decltype(&clearScreen), void (*)()>);
    static_assert(std::is_same_v<decltype(&clearZBufferNative), void (*)()>);
    static_assert(std::is_same_v<decltype(&renderMMXPerspectiveScanline32),
                                 void (*)(SSoftwareEdge *, SSoftwareEdge *, int)>);
    static_assert(std::is_same_v<decltype(&renderMMXPerspectiveScanline16),
                                 void (*)(SSoftwareEdge *, SSoftwareEdge *, int)>);
    static_assert(std::is_same_v<decltype(&renderPerspectiveCorrectScanline32),
                                 void (*)(SSoftwareEdge *, SSoftwareEdge *, int)>);
    static_assert(std::is_same_v<decltype(&renderPerspectiveCorrectScanline16),
                                 void (*)(SSoftwareEdge *, SSoftwareEdge *, int)>);
    static_assert(
        std::is_same_v<decltype(&renderAlphaRow32),
                       void (*)(std::uint32_t *, std::uint8_t *, std::uint8_t *, int, int)>);
    static_assert(
        std::is_same_v<decltype(&renderAlphaRow16),
                       void (*)(std::uint16_t *, std::uint8_t *, std::uint8_t *, int, int)>);
    static_assert(
        std::is_same_v<decltype(&renderScanline), void (*)(SSoftwareEdge *, SSoftwareEdge *, int)>);
    static_assert(std::is_same_v<decltype(&transformAndProjectPoint),
                                 void (*)(platform::SProjectedVertex *, common::CVector3i *)>);
    static_assert(std::is_same_v<decltype(&transformPoint),
                                 void (*)(platform::SProjectedVertex *, common::CVector3i *)>);
    static_assert(std::is_same_v<decltype(&loadExternalRenderer), int (*)()>);
    static_assert(std::is_same_v<decltype(&kill), int (*)()>);
    static_assert(std::is_same_v<decltype(&lockFrame), int (*)()>);
    static_assert(std::is_same_v<decltype(&unlockFrame), int (*)(int)>);
    static_assert(std::is_same_v<decltype(&beginScene), int (*)()>);
    static_assert(std::is_same_v<decltype(&endScene), int (*)()>);
    static_assert(std::is_same_v<decltype(&selectTextureFromPalette),
                                 int (*)(platform::SMRGLTextureBasic *, SRGBColorPalette *)>);
    static_assert(std::is_same_v<decltype(&updateTextureFromPalette),
                                 int (*)(platform::SMRGLTextureBasic *, SRGBColorPalette *)>);
    static_assert(std::is_same_v<decltype(&setResolutionAndColorTable), int (*)(int, int, int)>);
    static_assert(std::is_same_v<decltype(&restoreVideoMode), int (*)()>);
    static_assert(
        std::is_same_v<decltype(&drawPolygon), int (*)(platform::SRenderVertex *, int, int)>);
    static_assert(
        std::is_same_v<decltype(&drawPolygon2), int (*)(platform::SRenderVertex **, int, int)>);
    static_assert(std::is_same_v<decltype(&drawPolyList),
                                 int (*)(platform::SRenderVertex *, platform::SMRGLPrimitiveQuad **,
                                         int, int)>);
    static_assert(
        std::is_same_v<decltype(&drawPolyList2),
                       int (*)(platform::SRenderVertex *, platform::SInputFace **, int, int)>);
    static_assert(std::is_same_v<decltype(&clear), int (*)()>);
    static_assert(std::is_same_v<decltype(&setFogColor), int (*)(int, int, int)>);
    static_assert(std::is_same_v<decltype(&sync), int (*)()>);
    static_assert(std::is_same_v<decltype(&clearZBuffer), int (*)()>);
    static_assert(std::is_same_v<decltype(&presentToExternalRenderer), void (*)(int)>);
    static_assert(std::is_same_v<decltype(&masterZBuffer), int (*)(int)>);
    static_assert(std::is_same_v<decltype(&restoreZBuffer), int (*)(int, int, int, int, int)>);
    static_assert(std::is_same_v<decltype(&getVideoMemory), int (*)(int *, int *, int *)>);
    static_assert(std::is_same_v<decltype(&selectCard), int (*)(int)>);
    static_assert(
        std::is_same_v<decltype(&buildCardList), int (*)(int *, char **, char **, int *, int *)>);
    static_assert(std::is_same_v<decltype(&lockHoldBuffer), int (*)()>);
    static_assert(std::is_same_v<decltype(&unlockHoldBuffer), int (*)()>);
}

} // namespace
} // namespace nocturne::engine
