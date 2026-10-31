#pragma once

#include "core/dcamera/cameratables.h"
#include "core/dcamera/demoncamera.h"
#include "core/dfilter/filtercache.h"
#include "core/dlight/demonlight.h"
#include "core/dmodel/keyframedmodel.h"
#include "core/dtrace/demonraytrace.h"
#include "core/ground/ground.h"
#include "core/set/demonset.h"
#include "core/terrain/terrain.h"
#include "core/water/water.h"
#include "core/weather/weather.h"
#include "support/newmsg/newmsg.h"
#include "tests/mocks/core/lightparts.h"
#include "tests/mocks/core/mockloadingscreen.h"
#include "tests/mocks/core/testclasses.h"

#include <gmock/gmock.h>

#include <memory>

namespace nocturne::core {

// What a CDemonSet loads with besides a fixture's renderer, 2D, screen and input: its own
// messages, raytrace, terrain, water and enviro model over the fixture's disk, a mock loading
// screen, and the scene camera, flashlight, filter cache, light filters and weather it plays with.
class CSetParts {
public:
    static constexpr int kGroundSize = 0x100;
    static constexpr int kFlashlightSize = 0x100;

    explicit CSetParts(const engine::CDosIo &dosio)
        : messages(dosio), raytrace(dosio), ground(dosio, kGroundSize, kGroundSize),
          enviro_model(dosio), filter_cache(dosio), classes(dosio), dosio_(dosio) {}

    // The camera and flashlight are made with the first owners, over the special and screen they
    // name.
    [[nodiscard]] SDemonSetOwners owners(engine::CDemonRenderer &renderer,
                                         const engine::CMatrix &matrix, engine::CSpecial &special,
                                         engine::C2d &two_d, engine::IScreenDevice &screen,
                                         engine::IRawInput &raw_input) {
        const SDemonLightOwners light_owners = light_parts.owners(screen, special);
        if (!camera) {
            camera = std::make_unique<CDemonCamera>(light_owners.camera);
            flashlight =
                std::make_unique<CDemonLight>(light_owners, kFlashlightSize, kFlashlightSize);
        }
        return {.renderer = renderer,
                .matrix = matrix,
                .special = special,
                .dosio = dosio_,
                .messages = messages,
                .loading_screen = loading_screen,
                .raytrace = raytrace,
                .terrain = terrain,
                .water = water,
                .enviro_model = enviro_model,
                .two_d = two_d,
                .screen = screen,
                .raw_input = raw_input,
                .camera = *camera,
                .flashlight = *flashlight,
                .filter_cache = filter_cache,
                .light_owners = light_owners,
                .weather = weather};
    }

    ::testing::NiceMock<MockLoadingScreen> loading_screen;
    support::CNewMsg messages;
    CDemonRaytrace raytrace;
    CGround ground;
    CTerrain terrain{ground};
    CWater water;
    CKeyFramedModel enviro_model;
    CLightParts light_parts;
    SCameraTables &tables = light_parts.tables;
    std::unique_ptr<CDemonCamera> camera;
    std::unique_ptr<CDemonLight> flashlight;
    CFilterCache filter_cache;
    CTestClasses classes;
    CWeather weather{classes.get()};

private:
    const engine::CDosIo &dosio_;
};

} // namespace nocturne::core
