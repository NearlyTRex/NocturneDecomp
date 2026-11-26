#include "common/error/error.h"
#include "common/text/ascii.h"
#include "core/dcamera/demoncamera.h"
#include "core/dcamera/gammacurve.h"
#include "core/dfilter/filtercache.h"
#include "core/dlight/demonlight.h"
#include "core/dlight/dlight.h"
#include "core/event/eventconditions.h"
#include "core/game/game.h"
#include "core/loadingscreen.h"
#include "core/set/demonset.h"
#include "core/setutil/3dscamera.h"
#include "core/setutil/3dslight.h"
#include "core/water/water.h"
#include "core/weather/weather.h"
#include "support/newmsg/newmsg.h"

#include <algorithm>
#include <cstddef>
#include <memory>
#include <span>
#include <string_view>
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
// How far out a master light's shadow map takes the set's geometry: everything.
constexpr float kShadowMapReach = 9999.9F;
// A light whose name starts so is the moon, seen only from outside the virtual director boxes.
constexpr std::string_view kMoonPrefix = "moon";

} // namespace

// The original quit when the last scene's master lights were still there; this scene's replace
// them.
// deferred: forgetting the dynamic lights and the mirror glass actors, with addDynamicLight and
//   buildMirrorList
// deferred: no omni or corona lights gathered, with the spatial lights and addCoronaGlobe
// nocedit 0x0056aa10
void CDemonSet::initScene() {
    owners_.loading_screen.update(owners_.messages.getLocalizedString("Initializing scene"), false);
    resetRestoreMemoryAllocator(owners_.light_owners.camera.tables);
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
    for (const std::unique_ptr<CDemonLight> &master : master_lights_) {
        master->beginScene(0);
        master->clearCircularShadowMapEdges();
        renderSceneGeometry(kShadowMapReach, kDrawReachedGeometry);
        master->endScene(0);
    }
    spotlights_.clear();
    selected_camera_index_ = -1;
    previous_best_camera_index_ = -1;
    previous_best_camera_timer_ = 0.0F;
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

// nocedit 0x0056fb80
void CDemonSet::loadAssets() {
    captureLightTextures(owners_.renderer, owners_.light_owners.glow);
    owners_.water.captureTextures(owners_.renderer);
}

// A set shown before initScene made its master lights has no spotlight to show.
void CDemonSet::gatherSpotlights(std::size_t camera_index) {
    spotlights_.clear();
    std::size_t spotlight = 0;
    for (const C3DSLight &light : lights_) {
        if (light.getLightType() != C3DSLight::kSpotlightType) {
            continue;
        }
        if (light.getVisibleFlags()[camera_index] != 0 && spotlight < master_lights_.size()) {
            spotlights_.push_back({.light = master_lights_[spotlight].get(),
                                   .bounds = light.getCameraLightBounds()[camera_index]});
        }
        ++spotlight;
    }
}

// The original stopped at a spotlight without a master light, as before initScene.
// nocedit 0x0056f940
void CDemonSet::process() {
    std::size_t spotlight = 0;
    for (C3DSLight &light : lights_) {
        if (light.getLightType() != C3DSLight::kSpotlightType) {
            continue;
        }
        if (spotlight >= master_lights_.size()) {
            return;
        }
        CDemonLight &master = *master_lights_[spotlight];
        ++spotlight;
        const bool shown = std::ranges::contains(spotlights_, &master, &SShownSpotlight::light);
        light.process(master, shown, owners_.game.getDeltaTimeFloat(),
                      owners_.game.getDeltaTimeInt(), lights_on_);
        if (owners_.events.evaluateCondition(light.getName() + "on")) {
            master.setLightEnabled(true);
        }
        if (owners_.events.evaluateCondition(light.getName() + "off")) {
            master.setLightEnabled(false);
        }
        if (common::startsWithIgnoringAsciiCase(light.getName(), kMoonPrefix)) {
            master.setLightEnabled(last_switch_area_invalid_);
        }
    }
}

void CDemonSet::toggleLights() {
    lights_on_ = !lights_on_;
}

bool CDemonSet::getLightsOn() const {
    return lights_on_;
}

std::span<const SShownSpotlight> CDemonSet::getShownSpotlights() const {
    return spotlights_;
}

} // namespace nocturne::core
