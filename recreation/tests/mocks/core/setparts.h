#pragma once

#include "core/dmodel/keyframedmodel.h"
#include "core/dtrace/demonraytrace.h"
#include "core/ground/ground.h"
#include "core/set/demonset.h"
#include "core/terrain/terrain.h"
#include "core/water/water.h"
#include "support/newmsg/newmsg.h"
#include "tests/mocks/core/mockloadingscreen.h"

#include <gmock/gmock.h>

namespace nocturne::core {

// What a CDemonSet loads with besides a fixture's renderer, 2D, screen and input: its own
// messages, raytrace, terrain, water and enviro model over the fixture's disk, and a mock
// loading screen.
class CSetParts {
public:
    static constexpr int kGroundSize = 0x100;

    explicit CSetParts(const engine::CDosIo &dosio)
        : messages(dosio), raytrace(dosio), ground(dosio, kGroundSize, kGroundSize),
          enviro_model(dosio), dosio_(dosio) {}

    [[nodiscard]] SDemonSetOwners owners(engine::CDemonRenderer &renderer,
                                         const engine::CMatrix &matrix, engine::CSpecial &special,
                                         engine::C2d &two_d, engine::IScreenDevice &screen,
                                         engine::IRawInput &raw_input) {
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
                .raw_input = raw_input};
    }

    ::testing::NiceMock<MockLoadingScreen> loading_screen;
    support::CNewMsg messages;
    CDemonRaytrace raytrace;
    CGround ground;
    CTerrain terrain{ground};
    CWater water;
    CKeyFramedModel enviro_model;

private:
    const engine::CDosIo &dosio_;
};

} // namespace nocturne::core
