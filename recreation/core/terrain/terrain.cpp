#include "core/terrain/terrain.h"

#include "common/math/fixed.h"
#include "common/math/vector3f.h"
#include "common/math/vector3i.h"
#include "core/ground/ground.h"
#include "engine/drender/demonrenderer.h"

namespace nocturne::core {
namespace {

constexpr double kToFixed = 256.0;
// Where the scroll wraps, in 24.8.
constexpr int kScrollWrap = 0x8000000;

// A world coordinate in 24.8, chopped toward zero as the CRT round leaves it; the camera's place
// comes from its 24.8 origin, so nothing is chopped off.
[[nodiscard]] int toFixed(float coordinate) {
    return common::truncateToInt(static_cast<double>(coordinate) * kToFixed);
}

} // namespace

CTerrain::CTerrain(CGround &ground) : ground_(ground) {}

// The original always loaded junk.jnk at 256 by 256.
// nocedit 0x005e1ef0
void CTerrain::init(const STerrainSettings &settings) {
    scroll_ = 0;
    settings_ = settings;
    ground_.setSize(settings.width, settings.height);
    ground_.init();
    ground_.load(settings.ground);
    initialized_ = true;
}

// nocedit 0x005e1f30
void CTerrain::free() {
    ground_.free();
    initialized_ = false;
}

// The original drew it the same whichever pass asked, always over the point (1032, 0). The
// height lookup takes z then x, its axes the other way from the draw's.
// nocedit 0x005e1f50
void CTerrain::render(int /*render_pass*/, const SGroundDrawOwners &owners) {
    if (!initialized_) {
        return;
    }
    common::CVector3f camera;
    owners.renderer.getCameraOriginWorld(&camera);
    const int height = ground_.getHeightAtPosition(settings_.origin_z, settings_.origin_x);
    owners.renderer.setCameraOrigin({.x = settings_.origin_x + toFixed(camera.x),
                                     .y = toFixed(camera.y) + height,
                                     .z = (settings_.origin_z + toFixed(camera.z)) - scroll_});
    ground_.render(owners);
    owners.renderer.setCameraOriginFromScaledPoint(camera);
}

// The original read the game's frame time itself, and with only its one forward speed wrapped
// only forward.
// nocedit 0x005e2050
void CTerrain::process(int delta_time) {
    scroll_ = common::wrappingAdd(scroll_,
                                  common::fixedMultiply(delta_time, settings_.scroll_per_second));
    if (scroll_ > kScrollWrap) {
        scroll_ -= kScrollWrap;
    } else if (scroll_ < -kScrollWrap) {
        scroll_ += kScrollWrap;
    }
}

bool CTerrain::isInitialized() const {
    return initialized_;
}

int CTerrain::getScroll() const {
    return scroll_;
}

int CTerrain::getScrollPerSecond() const {
    return settings_.scroll_per_second;
}

const STerrainSettings &CTerrain::getSettings() const {
    return settings_;
}

} // namespace nocturne::core
