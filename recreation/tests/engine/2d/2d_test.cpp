#include "engine/2d/2d.h"

#include <gtest/gtest.h>

#include <type_traits>

namespace nocturne::engine {
namespace {

TEST(Engine2dFunctions, PublicInterface) {
    static_assert(std::is_same_v<decltype(&initGraphicsSystem), void (*)()>);
    static_assert(std::is_same_v<decltype(&cleanupGraphicsSystem), void (*)()>);
    static_assert(std::is_same_v<decltype(&plotPixel), void (*)(int, int)>);
    static_assert(std::is_same_v<decltype(&drawLine), void (*)(int, int, int, int)>);
    static_assert(std::is_same_v<decltype(&drawLine3D),
                                 void (*)(int, int, std::uint32_t, int, int, std::uint32_t)>);
    static_assert(
        std::is_same_v<decltype(&setupViewportAndClipping), void (*)(int, int, int, int)>);
    static_assert(std::is_same_v<decltype(&getStringWidth), int (*)(char *)>);
    static_assert(std::is_same_v<decltype(&drawText), void (*)(char *, int, int)>);
    static_assert(std::is_same_v<decltype(&drawString), void (*)(char *, int, int, int)>);
    static_assert(std::is_same_v<decltype(&drawTextXY), void (*)(int, int, char *)>);
    static_assert(std::is_same_v<decltype(&drawTextColor), void (*)(char *, int, int)>);
    static_assert(std::is_same_v<decltype(&drawTextRightAlignedColor), void (*)(char *, int, int)>);
    static_assert(std::is_same_v<decltype(&drawTextCenteredAtColor), void (*)(char *, int, int)>);
    static_assert(
        std::is_same_v<decltype(&drawTextCenteredColor), void (*)(char *, int, int, int)>);
    static_assert(
        std::is_same_v<decltype(&drawTextCenteredXYColor), void (*)(int, int, int, char *)>);
    static_assert(std::is_same_v<decltype(&getTextWrapEnabled), int (*)()>);
    static_assert(std::is_same_v<decltype(&setTextWrapEnabled), void (*)(int)>);
    static_assert(std::is_same_v<decltype(&disableTextWrap), void (*)()>);
    static_assert(std::is_same_v<decltype(&getTextColor), int (*)()>);
    static_assert(std::is_same_v<decltype(&setTextColor), void (*)(int)>);
    static_assert(std::is_same_v<decltype(&resetGraphicsSystem), void (*)()>);
    static_assert(std::is_same_v<decltype(&reinitializeGraphicsSystem), void (*)()>);
    static_assert(std::is_same_v<decltype(&clipLineGlobal), void (*)(int, int, int, int)>);
    static_assert(std::is_same_v<decltype(&drawHLine), void (*)(int, int, int)>);
    static_assert(std::is_same_v<decltype(&drawVLine), void (*)(int, int, int)>);
    static_assert(std::is_same_v<decltype(&fillRectColor), void (*)(int, int, int, int, int)>);
    static_assert(
        std::is_same_v<decltype(&fillRectWithBorder), void (*)(int, int, int, int, int, int)>);
    static_assert(std::is_same_v<decltype(&clearInputAndWait), void (*)()>);
}

} // namespace
} // namespace nocturne::engine
