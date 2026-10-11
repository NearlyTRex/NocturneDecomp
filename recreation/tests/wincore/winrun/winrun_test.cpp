#include "common/error/fatalerror.h"
#include "tests/mocks/platform/mockwindow.h"
#include "wincore/winrun/winrun.h"

#include <gmock/gmock.h>
#include <gtest/gtest.h>

#include <string_view>
#include <type_traits>

namespace nocturne::wincore {
namespace {

TEST(CWinRun, PublicInterface) {
    static_assert(std::is_same_v<decltype(&CWinRun::getTime), int (CWinRun::*)()>);
    static_assert(std::is_same_v<decltype(&CWinRun::clearKeypresses), void (CWinRun::*)()>);
    static_assert(std::is_same_v<decltype(&CWinRun::getNextKeypress), int (CWinRun::*)()>);
    static_assert(std::is_same_v<decltype(&CWinRun::wasKeyPressed), int (CWinRun::*)() const>);
    static_assert(std::is_same_v<decltype(&CWinRun::enqueueInput), void (CWinRun::*)(int)>);
    static_assert(std::is_same_v<decltype(&CWinRun::clearMouseClicks), void (CWinRun::*)()>);
    static_assert(
        std::is_same_v<decltype(&CWinRun::setCursorPosition), void (CWinRun::*)(int, int)>);
    static_assert(std::is_same_v<decltype(&CWinRun::processWindowMessages), void (CWinRun::*)()>);
    static_assert(
        std::is_same_v<decltype(&CWinRun::getKeyName), char *(CWinRun::*)(engine::EInputCodeType)>);
    static_assert(std::is_same_v<decltype(&CWinRun::getInputDisabled), bool (CWinRun::*)() const>);
    static_assert(std::is_same_v<decltype(&CWinRun::getFocusRegained), bool (CWinRun::*)() const>);
    static_assert(std::is_same_v<decltype(&CWinRun::setFocusRegained), void (CWinRun::*)(bool)>);
    static_assert(std::is_base_of_v<engine::IRawInput, CWinRun>);
}

TEST(CWinRun, TheMessageBoxNamesTheFileAndLine) {
    platform::MockWindow window;
    CWinRun winrun(window);
    EXPECT_CALL(window, showMessageBox(std::string_view("Out of memory\n\nFile: pod.cpp\nLine: 88"),
                                       std::string_view("Nocturne")));
    winrun.displayMessageBoxAndQuit(common::CFatalError("Out of memory", "pod.cpp", 88, 0));
}

} // namespace
} // namespace nocturne::wincore
