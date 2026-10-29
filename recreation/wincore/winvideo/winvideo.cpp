#include "wincore/winvideo/winvideo.h"

#include "common/video/framebuffer.h"
#include "engine/2d/2d.h"
#include "engine/screendevice.h"
#include "engine/special/special.h"
#include "platform/clock.h"
#include "platform/file.h"
#include "platform/filesystem.h"
#include "platform/movieplayer.h"
#include "platform/window.h"
#include "sound/sndmain/sndmain.h"
#include "wincore/winrun/winrun.h"

#include <chrono>
#include <format>
#include <optional>
#include <string>

namespace nocturne::wincore {
namespace {

constexpr std::chrono::milliseconds kMoviePollInterval{20};

bool startMovie(const SMovieOwners &owners, const std::string &path) {
    const std::optional<std::string> full_path = owners.file_system.getFullPath(path);
    const common::SExtent screen{.width = owners.screen.getWindowWidth(),
                                 .height = owners.screen.getWindowHeight()};
    const common::EPixelLayout layout = common::layoutForDepth(owners.screen.getBitsPerPixel())
                                            .value_or(common::EPixelLayout::Indexed8);
    if (!full_path || !owners.movies.openMovie(*full_path, screen, layout)) {
        // MessageBoxA without a caption, which Windows titles "Error".
        owners.window.showMessageBox("Unable to open .AVI!", "Error");
        return false;
    }
    owners.movies.setMoviePlayback(true);
    return true;
}

// The player presents each frame here, where MCI drew from its own thread. A closed window ends
// the wait, as it ends every wait for a key.
void waitForMovie(const SMovieOwners &owners) {
    while (true) {
        owners.winrun.processWindowMessages();
        if (!owners.movies.isMoviePlaying() || owners.winrun.wasKeyPressed() != 0 ||
            owners.winrun.getInputDisabled()) {
            return;
        }
        owners.movies.updateMovie();
        owners.clock.sleep(kMoviePollInterval);
    }
}

} // namespace

// The original also raised the thread's priority while the movie played. Its sound is at the
// enhanced game's movie volume, and silent while muted; MCI played it at the desktop's.
// nocedit 0x005f4a00
bool playMovie(const SMovieOwners &owners, std::string_view directory_path,
               std::string_view movie_filename) {
    const std::string path = std::format("{}\\{}", directory_path, movie_filename);
    if (owners.file_system.openFile(path, platform::EFileMode::Read) == nullptr) {
        return false;
    }
    owners.movies.setMovieVolume(
        owners.sound_main.isSoundMuted() ? 0.0F : owners.sound_main.getMovieVolume());
    owners.special.clearScreen();
    owners.screen.swapBuffers();
    if (startMovie(owners, path)) {
        waitForMovie(owners);
    }
    owners.movies.closeMovie();
    owners.special.clearScreen();
    owners.screen.swapBuffers();
    owners.two_d.clearInputAndWait();
    return true;
}

} // namespace nocturne::wincore
