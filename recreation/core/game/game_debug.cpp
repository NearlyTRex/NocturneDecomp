#include "core/dcamera/demoncamera.h"
#include "core/game/game.h"
#include "core/game/gameaction.h"
#include "core/hero/hero.h"
#include "core/location.h"
#include "core/mission/demonmission.h"
#include "core/set/demonset.h"
#include "core/setutil/3dscamera.h"
#include "core/skeleton/deformablemodelmanager.h"
#include "engine/2d/2d.h"
#include "engine/dosio/dosio.h"
#include "engine/pcx/pcx.h"
#include "engine/screendevice.h"
#include "engine/special/special.h"
#include "engine/texture/texture.h"
#include "platform/file.h"
#include "platform/filesystem.h"
#include "sound/sndmain/sampleinfo.h"
#include "sound/sndmain/sndmain.h"
#include "sound/sndmain/soundmemorystats.h"

#include <algorithm>
#include <array>
#include <cstddef>
#include <cstdint>
#include <format>
#include <memory>
#include <optional>
#include <span>
#include <string>
#include <string_view>
#include <utility>
#include <vector>

namespace nocturne::core {
namespace {

// Where each line goes: from the screen's top, or up from its bottom.
constexpr int kHeroLineY = 0;
constexpr int kSlewLineY = 0x0b;
constexpr int kFrameRateLineUp = 0x0b;
constexpr int kCameraLineUp = 0x16;
constexpr int kSkeletonLineUp = 0x2c;
constexpr int kTextureLineUp = 0x37;
constexpr int kSoundLineUp = 0x42;
// The sound debug's first name, and each next one a line below it.
constexpr int kFirstSampleY = 0x37;
constexpr int kLineHeight = 0x0b;
// The original's own 1/pi, a little off the exact one, turning radians to degrees with 180.
constexpr double kOriginalInversePi = 0.31830988619288902;
constexpr double kHalfTurnDegrees = 180.0;
constexpr double kPerKilobyte = 1.0 / 1024.0;

[[nodiscard]] std::string_view onOff(bool on) {
    return on ? "On" : "Off";
}

// The set's selected camera's group: the frame's scene, drawn first, has made sure one is shown.
[[nodiscard]] int getSelectedCameraGroup(const CDemonSet &set) {
    return set.getCameras()[static_cast<std::size_t>(set.getSelectedCameraIndex())]
        .getCameraGroup();
}

// A screen width by height of red, green and blue bytes, each of the movie's pixels the mean of
// the block of the screen's it covers. A block is at least the pixel at its corner, where the
// original divided by an empty one's count when the movie was the larger.
[[nodiscard]] std::vector<std::uint8_t> shrinkFrame(std::span<const std::uint8_t> rgb, int width,
                                                    int height, const SMovieSettings &movie) {
    std::vector<std::uint8_t> frame;
    frame.reserve(static_cast<std::size_t>(movie.width) * static_cast<std::size_t>(movie.height) *
                  3);
    const auto span = [](int index, int screen, int movie_size) {
        const int first = (index * screen) / movie_size;
        return std::pair{first, std::max((((index + 1) * screen) / movie_size), first + 1)};
    };
    for (int y = 0; y < movie.height; ++y) {
        const auto [top, bottom] = span(y, height, movie.height);
        for (int x = 0; x < movie.width; ++x) {
            const auto [left, right] = span(x, width, movie.width);
            std::array<int, 3> sums{};
            for (int row = top; row < bottom; ++row) {
                for (int column = left; column < right; ++column) {
                    const std::size_t at =
                        ((static_cast<std::size_t>(row) * static_cast<std::size_t>(width)) +
                         static_cast<std::size_t>(column)) *
                        3;
                    for (std::size_t channel = 0; channel < sums.size(); ++channel) {
                        sums.at(channel) += rgb[at + channel];
                    }
                }
            }
            const int count = (bottom - top) * (right - left);
            for (const int sum : sums) {
                frame.push_back(static_cast<std::uint8_t>(sum / count));
            }
        }
    }
    return frame;
}

} // namespace

void CGame::armMovieRecording(const SMovieSettings &settings) {
    movie_ = settings;
    movie_recording_ = false;
    movie_frame_ = 0;
    movie_armed_ = true;
}

bool CGame::isMovieRecording() const {
    return movie_recording_;
}

// The debug display's key starts the movie from its first frame and stops it. The original read
// every depth as 32-bit pixels; a frame is now the screen's colours at any.
// deferred: the movie set up by its frame rate, frame count and size, asked for in the editor's
//   text input dialog, with setupMovieRecording and CEditorTools::showTextInputDialog
// deferred: setting the movie up by its cheat code, with processCheatCodes
// nocedit 0x004d7810
// bw1 0x004cb950
// bw2 0x004b2a50
// bw3 0x004b3e50
void CGame::captureDebugMovieFrame() {
    if (!movie_armed_) {
        return;
    }
    if (takeAction(EGameAction::DebugDisplay)) {
        movie_frame_ = movie_recording_ ? movie_frame_ : 0;
        movie_recording_ = !movie_recording_;
    }
    if (movie_.max_frames > 0 && movie_frame_ >= movie_.max_frames) {
        movie_recording_ = false;
        return;
    }
    if (!movie_recording_) {
        return;
    }
    const std::string name = std::format("noc{:05d}.raw", movie_frame_);
    const std::unique_ptr<platform::IFile> file =
        owners_.dosio.getFile("movie", name, platform::EFileMode::Write);
    if (file == nullptr) {
        return;
    }
    const std::vector<std::uint8_t> frame =
        shrinkFrame(engine::readScreenRgb(owners_.screen, owners_.two_d),
                    owners_.screen.getWindowWidth(), owners_.screen.getWindowHeight(), movie_);
    static_cast<void>(file->write(std::as_bytes(std::span(frame))));
    owners_.two_d.drawText(std::format("Movie recording active: movie\\{}", name), 0, 0);
    ++movie_frame_;
}

// The original's debug string line is gone; nothing ever wrote it.
void CGame::renderCameraDebug(const SGameSessionOwners &session) {
    if (!camera_debug) {
        debug_frames_ = 0;
        debug_seconds_ = 0.0;
        return;
    }
    engine::C2d &two_d = owners_.two_d;
    const int height = owners_.screen.getWindowHeight();
    two_d.drawText(std::format("Camera: \"{}\" Group {}", session.camera.getCameraName(),
                               getSelectedCameraGroup(session.set)),
                   0, height - kCameraLineUp);
    ++debug_frames_;
    debug_seconds_ += static_cast<double>(delta_time_float_);
    two_d.drawText(std::format("FR: {:f}, AVG: {:f}, PC: {}",
                               1.0 / static_cast<double>(delta_time_float_),
                               static_cast<double>(debug_frames_) / debug_seconds_,
                               owners_.special.getRenderedTriangleCount()),
                   0, height - kFrameRateLineUp);
    const CHero &hero = *session.mission.getLocalHero();
    const common::CVector3f &position = hero.getLocation().position;
    const common::CVector3f orientation = hero.getOrientation();
    const auto degrees = [](float radians) {
        return static_cast<double>(radians) * kOriginalInversePi * kHalfTurnDegrees;
    };
    two_d.drawText(
        std::format("Hero : {:4.2f},{:4.2f},{:4.2f} xyz and {:3.2f},{:3.2f},{:3.2f} pbh",
                    position.x, position.y, position.z,
                    kHalfTurnDegrees * static_cast<double>(orientation.x) * kOriginalInversePi,
                    degrees(orientation.z), degrees(orientation.y)),
        0, kHeroLineY);
    two_d.drawText(
        std::format("Slew : {}, Virtual Director : {}", onOff(is_paused), onOff(game_active)), 0,
        kSlewLineY);
    const sound::CSndMain &sound_main = owners_.sound_main;
    const sound::SSoundMemoryStats stats = sound_main.getSoundMemoryStats();
    const auto kilobytes = [](std::size_t bytes) {
        return static_cast<double>(bytes) * kPerKilobyte;
    };
    two_d.drawText(
        std::format("SFX: {} Samples: Active: {}/{:.1f}k Avail: {}/{:.1f}k Total alloc: {:.1f}k "
                    "Free: {:.1f}k",
                    sound_main.countActiveSfx(), stats.referenced_count,
                    kilobytes(stats.total_bytes_referenced), stats.unreferenced_count,
                    kilobytes(stats.total_bytes_unreferenced),
                    kilobytes(stats.total_bytes_referenced + stats.total_bytes_unreferenced),
                    kilobytes(stats.available_memory)),
        0, height - kSoundLineUp);
    two_d.drawText(session.textures.getTextureCacheStats(), 0, height - kTextureLineUp);
    two_d.drawText(session.deformable_models.getMemoryStats(), 0, height - kSkeletonLineUp);
}

// Each sound effect playing, by the name it was asked for. The original skipped one whose info
// it couldn't get, which a playing effect always has.
void CGame::renderSoundDebug() {
    sound::CSndMain &sound_main = owners_.sound_main;
    int y = kFirstSampleY;
    for (std::uint32_t sfx = sound_main.getFirstActiveSfx(); sfx != 0;
         sfx = sound_main.getNextActiveSfx(sfx)) {
        const std::optional<sound::CSampleInfo> info = sound_main.getSfxSampleInfo(sfx);
        owners_.two_d.drawText(info.value_or(sound::CSampleInfo{}).name, 0, y);
        y += kLineHeight;
    }
}

} // namespace nocturne::core
