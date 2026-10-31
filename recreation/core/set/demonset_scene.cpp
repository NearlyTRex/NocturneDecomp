#include "common/error/error.h"
#include "core/dcamera/demoncamera.h"
#include "core/dcamera/gammacurve.h"
#include "core/dfilter/filtercache.h"
#include "core/dlight/demonlight.h"
#include "core/loadingscreen.h"
#include "core/set/demonset.h"
#include "core/setutil/3dscamera.h"
#include "core/setutil/3dslight.h"
#include "core/weather/weather.h"
#include "support/newmsg/newmsg.h"

#include <algorithm>
#include <cstddef>
#include <memory>
#include <span>
#include <utility>

namespace nocturne::core {
namespace {

constexpr std::size_t kIntensityCount = 0x10000;
constexpr double kIntensityFraction = 1.0 / static_cast<double>(kIntensityCount);
constexpr int kIntensityScale = 0x10000;
// The dimmest level an intensity is given.
constexpr int kMinIntensityValue = 0x100;
// The most spotlights a scene can light.
constexpr std::size_t kMaxMasterLights = 96;

} // namespace

// The original quit when the last scene's master lights were still there; this scene's replace
// them.
// deferred: resetting the shadow restore allocator, with allocMasterZBuffer
// deferred: forgetting the dynamic lights and the mirror glass actors, with addDynamicLight and
//   buildMirrorList
// deferred: drawing the set into each master light's shadow map, its edges cleared for a circular
//   shadow, with renderSceneGeometry and CDemonLight's beginScene, clearCircularShadowMapEdges
//   and endScene
// deferred: no camera chosen and none the best, its timer at zero, with setCameraView and
//   evaluateVirtualDirector
// deferred: no spot, omni or corona lights gathered, with renderScene
// nocedit 0x0056aa10
void CDemonSet::initScene() {
    owners_.loading_screen.update(owners_.messages.getLocalizedString("Initializing scene"), false);
    owners_.filter_cache.free();
    owners_.flashlight.setVolumetricIntensity(owners_.flashlight.getVolumetricIntensity());
    owners_.camera.initLookupTable();
    owners_.camera.initCameraFog(scene_fog_);
    active_fog_ = scene_fog_;
    owners_.camera.setEffectIntensity(min_ambient_value_);
    master_lights_.clear();
    for (C3DSLight &light : lights_) {
        if (light.getLightType() != C3DSLight::kSpotlightType) {
            continue;
        }
        std::unique_ptr<CDemonLight> master =
            light.create(owners_.light_owners, owners_.filter_cache);
        light.apply(*master);
        master_lights_.push_back(std::move(master));
        if (master_lights_.size() > kMaxMasterLights) {
            common::displayErrorAndQuit("CDemonSet::initScene - Too many spotlights!");
        }
    }
    buildVdirBoxGroups();
    for (C3DSCamera &camera : cameras_) {
        camera.setVdirZone(findVdirBoxAtPosition(camera.getPosition()));
    }
    owners_.weather.setWeatherType(weather_type_);
}

const SFog &CDemonSet::getActiveFog() const {
    return active_fog_;
}

std::span<const std::unique_ptr<CDemonLight>> CDemonSet::getMasterLights() const {
    return master_lights_;
}

// Checked against nocedit's own code for every 257th gamma from 0x8000 to 0x10000.
// nocedit 0x00570d60
void CDemonSet::setGamma(int gamma) {
    owners_.camera.generateGammaPalette(gamma);
    const float exponent = gammaExponent(gamma);
    intensity_to_value_.resize(kIntensityCount);
    for (std::size_t i = 0; i < kIntensityCount; ++i) {
        intensity_to_value_[i] = std::max(
            applyGammaCurve(static_cast<double>(i) * kIntensityFraction, exponent, kIntensityScale),
            kMinIntensityValue);
    }
}

std::span<const int> CDemonSet::getIntensityToValueLookupTable() const {
    return intensity_to_value_;
}

} // namespace nocturne::core
