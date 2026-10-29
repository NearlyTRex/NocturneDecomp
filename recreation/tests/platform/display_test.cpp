#include "platform/display.h"
#include "platform/upscaler.h"

#include <gtest/gtest.h>

#include <type_traits>
#include <vector>

namespace nocturne::platform {
namespace {

TEST(IDisplay, IsAbstractWithVirtualDestructor) {
    static_assert(std::is_abstract_v<IDisplay>);
    static_assert(std::has_virtual_destructor_v<IDisplay>);
}

TEST(IDisplay, PublicInterface) {
    static_assert(
        std::is_same_v<decltype(&IDisplay::setDisplayMode), bool (IDisplay::*)(int, int, int)>);
    static_assert(
        std::is_same_v<decltype(&IDisplay::getPixelFormat), common::SPixelFormat (IDisplay::*)()>);
    static_assert(std::is_same_v<decltype(&IDisplay::setPalette),
                                 void (IDisplay::*)(std::span<const std::uint8_t, 768>)>);
    static_assert(std::is_same_v<decltype(&IDisplay::present),
                                 void (IDisplay::*)(std::span<const std::byte>, int)>);
    static_assert(
        std::is_same_v<decltype(&IDisplay::setWindowMode), void (IDisplay::*)(EWindowMode)>);
    static_assert(
        std::is_same_v<decltype(&IDisplay::getWindowMode), EWindowMode (IDisplay::*)() const>);
    static_assert(std::is_same_v<decltype(&IDisplay::setWindowSize), void (IDisplay::*)(int, int)>);
    static_assert(std::is_same_v<decltype(&IDisplay::setUpscaler), void (IDisplay::*)(EUpscaler)>);
    static_assert(
        std::is_same_v<decltype(&IDisplay::getUpscaler), EUpscaler (IDisplay::*)() const>);
    static_assert(
        std::is_same_v<decltype(&IDisplay::setUpscalerSharpness), void (IDisplay::*)(int)>);
    static_assert(
        std::is_same_v<decltype(&IDisplay::getUpscalerSharpness), int (IDisplay::*)() const>);
}

TEST(EUpscaler, KeepsThePersistedValues) {
    static_assert(static_cast<int>(EUpscaler::Standard) == 0);
    static_assert(static_cast<int>(EUpscaler::Fsr) == 1);
    static_assert(static_cast<int>(EUpscaler::Lanczos) == 2);
    static_assert(static_cast<int>(EUpscaler::Gsr) == 3);
    static_assert(static_cast<int>(EUpscaler::Nis) == 4);
    static_assert(static_cast<int>(EUpscaler::Xbr) == 5);
    static_assert(kUpscalerCount == 6);
}

TEST(EUpscaler, FsrGsrAndNisSharpen) {
    std::vector<EUpscaler> sharpening;
    for (int value = 0; value < kUpscalerCount; ++value) {
        const auto upscaler = static_cast<EUpscaler>(value);
        if (getUpscalerSharpens(upscaler)) {
            sharpening.push_back(upscaler);
        }
    }
    EXPECT_EQ(sharpening, (std::vector{EUpscaler::Fsr, EUpscaler::Gsr, EUpscaler::Nis}));
}

TEST(EWindowMode, KeepsThePersistedValues) {
    static_assert(static_cast<int>(EWindowMode::Windowed) == 0);
    static_assert(static_cast<int>(EWindowMode::Fullscreen) == 1);
    static_assert(static_cast<int>(EWindowMode::Borderless) == 2);
}

} // namespace
} // namespace nocturne::platform
