#include "wincore/winrun/winrun.h"

#include <gtest/gtest.h>

#include <type_traits>

namespace nocturne::wincore {
namespace {

TEST(WincoreWinrunFunctions, PublicInterface) {
    static_assert(std::is_same_v<decltype(&calibrateCPUSpeed), void (*)()>);
    static_assert(std::is_same_v<decltype(&endPeriod), void (*)()>);
    static_assert(std::is_same_v<decltype(&getTime), int (*)()>);
    static_assert(std::is_same_v<decltype(&clearKeypresses), void (*)()>);
    static_assert(std::is_same_v<decltype(&getNextKeypress), int (*)()>);
    static_assert(std::is_same_v<decltype(&wasKeyPressed), int (*)()>);
    static_assert(std::is_same_v<decltype(&enqueueInput), void (*)(int)>);
    static_assert(std::is_same_v<decltype(&clearMouseClicks), void (*)()>);
    static_assert(std::is_same_v<decltype(&setCursorPosition), void (*)(int, int)>);
    static_assert(std::is_same_v<decltype(&processWindowMessages), void (*)()>);
    static_assert(std::is_same_v<decltype(&displayMessageBoxAndQuit), void (*)(char *)>);
    static_assert(std::is_same_v<decltype(&getKeyName), char *(*)(engine::EInputCodeType)>);
    static_assert(std::is_same_v<decltype(&sleep), void (*)(double)>);
    static_assert(
        std::is_same_v<decltype(&setRegistryStringValue), void (*)(char *, char *, char *)>);
    static_assert(std::is_same_v<decltype(&initJoystick), void (*)()>);
    static_assert(std::is_same_v<decltype(&doNothing2), void (*)()>);
    static_assert(std::is_same_v<decltype(&getJoystickState), void (*)()>);
}

} // namespace
} // namespace nocturne::wincore
