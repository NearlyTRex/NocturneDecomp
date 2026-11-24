#include "core/dcamera/demoncamera.h"
#include "core/game/game.h"
#include "core/hero/hero.h"
#include "core/location.h"
#include "core/mission/demonmission.h"
#include "core/set/demonset.h"
#include "core/setutil/3dscamera.h"
#include "core/skeleton/deformablemodelmanager.h"
#include "engine/2d/2d.h"
#include "engine/screendevice.h"
#include "engine/special/special.h"
#include "engine/texture/texture.h"
#include "sound/sndmain/sampleinfo.h"
#include "sound/sndmain/sndmain.h"
#include "sound/sndmain/soundmemorystats.h"

#include <cstddef>
#include <cstdint>
#include <format>
#include <optional>
#include <string_view>

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

// The set's selected camera's group, or -1 before one is selected; the original read the slot
// before the first.
[[nodiscard]] int getSelectedCameraGroup(const CDemonSet &set) {
    const int index = set.getSelectedCameraIndex();
    if (index < 0) {
        return -1;
    }
    return set.getCameras()[static_cast<std::size_t>(index)].getCameraGroup();
}

} // namespace

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
