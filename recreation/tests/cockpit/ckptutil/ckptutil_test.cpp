#include "cockpit/ckptutil/ckptutil.h"

#include <gtest/gtest.h>

#include <type_traits>

namespace nocturne::cockpit {
namespace {

TEST(CockpitCkptutilFunctions, PublicInterface) {
    static_assert(std::is_same_v<decltype(&expandIndexedToRGB), void (*)(void *, void *, int)>);
    static_assert(std::is_same_v<decltype(&optimizedMemcpy), void (*)(void *, void *, int)>);
    static_assert(std::is_same_v<decltype(&mmxOptimizedMemcpy), void (*)(void *, void *, int)>);
    static_assert(std::is_same_v<decltype(&basicIndexedTo16Bit), void (*)(void *, void *, int)>);
    static_assert(
        std::is_same_v<decltype(&getColorConversionFunction), ColorConversionFunc *(*)()>);
    static_assert(
        std::is_same_v<decltype(&getOptimizedMemcpyFunction), OptimizedMemcpyFunc *(*)()>);
    static_assert(
        std::is_same_v<decltype(&get16BitConversionFunction), ColorConversionFunc *(*)()>);
    static_assert(std::is_same_v<decltype(&readBitmapFile), void *(*)(char *, void *, int)>);
    static_assert(
        std::is_same_v<decltype(&loadACTToIndexedPalette), void (*)(char *, std::uint8_t *)>);
    static_assert(std::is_same_v<decltype(&drawLineAA), void (*)(int, int, int, int, int)>);
    static_assert(std::is_same_v<decltype(&isLineClippingDisabled), int (*)()>);
    static_assert(std::is_same_v<decltype(&setLineClippingDisabled), void (*)(int)>);
}

} // namespace
} // namespace nocturne::cockpit
