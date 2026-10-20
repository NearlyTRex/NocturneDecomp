#pragma once

#include "common/random/watcomrandom.h"
#include "core/actor/actor.h"
#include "core/dfont/dfont.h"
#include "core/game/game.h"
#include "core/level/levelloader.h"
#include "core/mission/demonmission.h"
#include "core/set/demonset.h"
#include "core/xform/xform.h"
#include "engine/drender/demonrenderer.h"
#include "engine/prim/prim.h"
#include "engine/texture/texture.h"
#include "engine/zraster/zraster.h"
#include "platform/rendervertex.h"
#include "support/newmsg/newmsg.h"
#include "tests/mocks/core/setparts.h"
#include "tests/mocks/platform/mockosfontfactory.h"
#include "tests/mocks/shape/picklistfixture.h"

#include <gmock/gmock.h>

#include <vector>

namespace nocturne::core {

// A mission over the pick list fixture, with the actor classes ported so far, a loading screen
// that hasn't been shown, and files on disk under world.
class CMissionFixture : public shape::CPickListFixture {
protected:
    CGame game_{game_clock_};
    common::CWatcomRandom crt_random_;
    CActor actor_{game_, crt_random_};
    engine::CTexture textures_{{.dosio = dosio_,
                                .two_d = two_d_,
                                .screen = screen_,
                                .special = special_,
                                .current_texture = current_texture_}};
    std::vector<platform::SRenderVertex> vertex_buffer_ = std::vector<platform::SRenderVertex>(8);
    engine::CPrim prim_{special_, two_d_, three_d_, current_texture_};
    engine::CZRaster zraster_{special_, two_d_, three_d_, current_texture_};
    engine::CDemonRenderer demon_renderer_{
        matrix_,          two_d_,    three_d_, vertex_buffer_,           special_, prim_, zraster_,
        current_texture_, textures_, screen_,  &transformAndClipGeometry};
    CSetParts set_parts_{dosio_};
    CDemonSet set_{
        set_parts_.owners(demon_renderer_, matrix_, special_, two_d_, screen_, raw_input_)};
    ::testing::NiceMock<platform::MockOsFontFactory> os_fonts_;
    support::CNewMsg messages_{dosio_};
    CDFont fonts_{dosio_, screen_, two_d_, three_d_, colors_, os_fonts_, messages_, editor_tools_};
    CLevelLoader level_loader_{{.dosio = dosio_,
                                .screen = screen_,
                                .special = special_,
                                .two_d = two_d_,
                                .matrix = matrix_,
                                .renderer = demon_renderer_,
                                .set = set_,
                                .fonts = fonts_,
                                .crt_random = crt_random_}};
    shape::SPickListOwners pick_list_owners_{.controls = controls_,
                                             .keys = keys_,
                                             .menu_input = menu_input_,
                                             .three_d = three_d_,
                                             .screen = screen_};
    CDemonMission mission_{{.dosio = dosio_,
                            .messages = messages_,
                            .game = game_,
                            .actor = actor_,
                            .level_loader = level_loader_,
                            .textures = textures_,
                            .editor_tools = editor_tools_,
                            .pick_list = pick_list_owners_}};
};

} // namespace nocturne::core
