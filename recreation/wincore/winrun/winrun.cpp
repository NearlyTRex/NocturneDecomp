#include "wincore/winrun/winrun.h"

#include "common/error/fatalerror.h"
#include "platform/window.h"

#include <format>

namespace nocturne::wincore {

CWinRun::CWinRun(platform::IWindow &window) : window_(window) {}

// The quit is main's: it returns 1 once the box is closed.
// nocedit 0x005f3920
void CWinRun::displayMessageBoxAndQuit(const common::CFatalError &error) {
    window_.showMessageBox(
        std::format("{}\n\nFile: {}\nLine: {}", error.what(), error.getFile(), error.getLine()),
        kApplicationTitle);
}

} // namespace nocturne::wincore
