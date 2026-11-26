#include "core/terrain/terrain.h"

#include "common/math/fixed.h"
#include "common/math/vector3f.h"
#include "common/math/vector3i.h"
#include "core/ground/ground.h"
#include "engine/drender/demonrenderer.h"

namespace nocturne::core {
namespace {

// The point of the ground the camera is drawn over, its x in 24.8.
constexpr int kGroundOriginX = 0x40800;
constexpr double kToFixed = 256.0;
// How far the ground scrolls a second, and where it wraps, in 24.8.
constexpr int kScrollPerSecond = 0x6270;
constexpr int kScrollWrap = 0x8000000;

// A world coordinate in 24.8, chopped toward zero as the CRT round leaves it; the camera's place
// comes from its 24.8 origin, so nothing is chopped off.
[[nodiscard]] int toFixed(float coordinate) {
    return common::truncateToInt(static_cast<double>(coordinate) * kToFixed);
}

} // namespace

CTerrain::CTerrain(CGround &ground) : ground_(ground) {}

// nocedit 0x005e1ef0
void CTerrain::init() {
    scroll_ = 0;
    ground_.init();
    ground_.load("junk.jnk");
    initialized_ = true;
}

// nocedit 0x005e1f30
void CTerrain::free() {
    ground_.free();
    initialized_ = false;
}

// The original drew it the same whichever pass asked.
// nocedit 0x005e1f50
void CTerrain::render(int /*render_pass*/, const SGroundDrawOwners &owners) {
    if (!initialized_) {
        return;
    }
    common::CVector3f camera;
    owners.renderer.getCameraOriginWorld(&camera);
    const int height = ground_.getHeightAtPosition(0, kGroundOriginX);
    owners.renderer.setCameraOrigin({.x = kGroundOriginX + toFixed(camera.x),
                                     .y = toFixed(camera.y) + height,
                                     .z = toFixed(camera.z) - scroll_});
    ground_.render(owners);
    owners.renderer.setCameraOriginFromScaledPoint(camera);
}

// The original read the game's frame time itself.
// nocedit 0x005e2050
void CTerrain::process(int delta_time) {
    scroll_ = common::wrappingAdd(scroll_, common::fixedMultiply(delta_time, kScrollPerSecond));
    if (scroll_ > kScrollWrap) {
        scroll_ -= kScrollWrap;
    }
}

bool CTerrain::isInitialized() const {
    return initialized_;
}

int CTerrain::getScroll() const {
    return scroll_;
}

} // namespace nocturne::core
