#include "wincore/wddvmem/wddvmem.h"

#include <gtest/gtest.h>

#include <type_traits>

namespace nocturne::wincore {
namespace {

TEST(WincoreWddvmemFunctions, PublicInterface) {
    static_assert(std::is_same_v<decltype(&convertPaletteToDirectColor), void (*)()>);
    static_assert(std::is_same_v<decltype(&initializeGraphicsSystem), int (*)(int, int)>);
    static_assert(std::is_same_v<decltype(&cleanupGraphicsSystem), void (*)()>);
    static_assert(std::is_same_v<decltype(&setScreenResolution), int (*)(int, int, int)>);
    static_assert(std::is_same_v<decltype(&resetGraphicsSystem), void (*)()>);
    static_assert(std::is_same_v<decltype(&reinitializeGraphicsSystem), void (*)()>);
    static_assert(std::is_same_v<decltype(&openScreenDevice), void (*)()>);
    static_assert(std::is_same_v<decltype(&closeScreenDevice), void (*)()>);
    static_assert(std::is_same_v<decltype(&setupColorPalette), void (*)()>);
    static_assert(std::is_same_v<decltype(&swapBuffers), void (*)()>);
}

} // namespace
} // namespace nocturne::wincore
