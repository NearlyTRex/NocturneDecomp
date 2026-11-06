#pragma once

#include "common/random/watcomrandom.h"
#include "core/actor/actor.h"
#include "core/dfont/dfont.h"
#include "core/dlight/lightglow.h"
#include "core/dmodel/keyframedmodel.h"
#include "core/event/eventlist.h"
#include "core/fire/fireeffect.h"
#include "core/game/game.h"
#include "core/gore/gore.h"
#include "core/inv/inventoryassets.h"
#include "core/level/levelloader.h"
#include "core/mission/demonmission.h"
#include "core/netgame/netgame.h"
#include "core/script/script.h"
#include "core/set/demonset.h"
#include "core/sound/sound.h"
#include "core/water/water.h"
#include "core/xform/xform.h"
#include "engine/console/console.h"
#include "engine/drender/demonrenderer.h"
#include "engine/pod/pod.h"
#include "engine/prim/prim.h"
#include "engine/texture/texture.h"
#include "engine/zraster/zraster.h"
#include "platform/mrgltexturebasic.h"
#include "platform/rendervertex.h"
#include "sound/sndmain/sndmain.h"
#include "support/newmsg/newmsg.h"
#include "tests/mocks/core/gameparts.h"
#include "tests/mocks/core/mockdeformablemodels.h"
#include "tests/mocks/core/mockkeyframedmodels.h"
#include "tests/mocks/core/setparts.h"
#include "tests/mocks/platform/mockaudiodevice.h"
#include "tests/mocks/platform/mockenvironment.h"
#include "tests/mocks/platform/mockosfontfactory.h"
#include "tests/mocks/shape/picklistfixture.h"

#include <gmock/gmock.h>

#include <cstddef>
#include <ctime>
#include <format>
#include <span>
#include <string>
#include <string_view>
#include <vector>

namespace nocturne::core {

// A mission over the pick list fixture, with the actor classes ported so far, a loading screen
// that hasn't been shown, files on disk under world, the script and events it starts, and no
// network game.
class CMissionFixture : public shape::CPickListFixture {
protected:
    // The game's screen is as tall as the one the set draws on, so the scene camera's frame fits
    // it.
    CMissionFixture() {
        ON_CALL(game_parts_.getScreen(), getWindowHeight())
            .WillByDefault(::testing::Return(kHeight));
    }

    CGameParts game_parts_{game_clock_};
    CGame &game_ = game_parts_.getGame();
    common::CWatcomRandom crt_random_;
    ::testing::NiceMock<MockDeformableModels> models_;
    ::testing::NiceMock<MockKeyFramedModels> keyframed_models_;
    CActor actor_{game_, crt_random_, models_, keyframed_models_, events_};
    engine::CTexture textures_{{.dosio = dosio_,
                                .two_d = two_d_,
                                .screen = screen_,
                                .special = special_,
                                .current_texture = current_texture_}};
    std::vector<platform::SRenderVertex> vertex_buffer_ = std::vector<platform::SRenderVertex>(8);
    engine::CPrim prim_{special_, two_d_, three_d_, current_texture_};
    engine::CZRaster zraster_{special_, two_d_, three_d_, current_texture_};
    engine::CDemonRenderer demon_renderer_{
        matrix_, light_,   two_d_,           three_d_,  vertex_buffer_, special_,
        prim_,   zraster_, current_texture_, textures_, screen_,        &transformAndClipGeometry};
    CSetParts set_parts_{dosio_};
    CDemonSet set_{set_parts_.owners(demon_renderer_, three_d_, matrix_, special_, two_d_, screen_,
                                     raw_input_)};
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
                                .crt_random = crt_random_,
                                .console = console_}};
    shape::SPickListOwners pick_list_owners_{.controls = controls_,
                                             .keys = keys_,
                                             .menu_input = menu_input_,
                                             .three_d = three_d_,
                                             .screen = screen_};
    CDemonMission mission_{{.dosio = dosio_,
                            .messages = messages_,
                            .game = game_,
                            .actor = actor_,
                            .crt_random = crt_random_,
                            .loading_screen = set_parts_.loading_screen,
                            .set = set_,
                            .textures = textures_,
                            .editor_tools = editor_tools_,
                            .pick_list = pick_list_owners_,
                            .script = script_,
                            .events = events_}};
    engine::CConsole console_{file_system_, 80, 50, 0, 0};
    CEventList events_{
        {.mission = mission_, .actor = actor_, .set = set_, .dosio = dosio_, .console = console_}};
    ::testing::NiceMock<platform::MockAudioDevice> audio_device_;
    sound::CSndMain sound_main_{dosio_, file_system_, audio_device_, console_,
                                [] { return std::tm{}; }};
    engine::CPod pod_{file_system_, dosio_};
    CSound sound_{sound_main_, pod_, file_system_};
    CScript script_{{.dosio = dosio_,
                     .editor_tools = editor_tools_,
                     .mission = mission_,
                     .events = events_,
                     .set = set_,
                     .sound = sound_}};
    CFireEffect fire_{{.renderer = demon_renderer_, .keyframed_models = keyframed_models_}};
    CGore gore_{demon_renderer_};
    CInventoryAssets inventory_assets_{
        {.dosio = dosio_, .screen = screen_, .special = special_, .game = game_}};
    ::testing::NiceMock<platform::MockEnvironment> environment_;
    CNetGame net_game_{{.file_system = file_system_,
                        .environment = environment_,
                        .clock = game_clock_,
                        .two_d = two_d_,
                        .crt_random = crt_random_,
                        .actor = actor_,
                        .mission = mission_}};
    SGameSessionOwners session_{.console = console_,
                                .camera = *set_parts_.camera,
                                .flashlight = *set_parts_.flashlight,
                                .set = set_,
                                .script = script_,
                                .editor_tools = editor_tools_,
                                .build_version = "1.2.3 (test)",
                                .fire = fire_,
                                .gore = gore_,
                                .inventory_assets = inventory_assets_,
                                .net_game = net_game_,
                                .level_loader = level_loader_,
                                .keys = keys_,
                                .mission = mission_,
                                .environment = environment_};

    // Every texture and picture the session loads on disk, 32 by 32, and every model it finds
    // the one model.
    void givenSessionAssets() {
        ON_CALL(keyframed_models_, loadModel(::testing::_))
            .WillByDefault(::testing::ReturnRef(effect_model_));
        const auto give = [this](std::string_view name) {
            givenFile(std::format("art\\{}", name), std::string(std::size_t{32} * 32, '\x10'));
        };
        const SLightGlowTextures &glow = set_parts_.light_parts.glow;
        give(glow.headlight.texture_name);
        for (const platform::SMRGLTextureBasic &sprite : glow.sprites) {
            give(sprite.texture_name);
        }
        for (const std::span<const platform::SMRGLTextureBasic> textures :
             {set_parts_.water.getTextures(), fire_.getLightningBoltTextures(),
              gore_.getSplatTextures(), gore_.getSplatFrameTextures(),
              gore_.getPoolFrameTextures()}) {
            for (const platform::SMRGLTextureBasic &texture : textures) {
                give(texture.texture_name);
            }
        }
        for (const platform::SMRGLTextureBasic *texture :
             {&fire_.getBlackHoleTexture(), &fire_.getSparkTexture(), &fire_.getBlueSparkTexture(),
              &gore_.getBloodParticleTexture(), &gore_.getFootstepTexture()}) {
            give(texture->texture_name);
        }
        for (int frame = 190; frame < 210; ++frame) {
            give(std::format("fr46{}.raw", frame));
        }
        for (const char *picture :
             {"invback", "invback2", "weapback", "weapback2", "battery", "hbar1", "hbar2",
              "tommyclip24x24", "bullet24x24", "lithium24x24", "mercurybullet24x24",
              "shotshell24x24", "silverbullet24x24", "holybullet24x24"}) {
            givenFile(std::format("art\\{}.raw", picture), "");
            givenFile(std::format("art\\{}.act", picture), "");
        }
    }

    CKeyFramedModel effect_model_{dosio_};
};

} // namespace nocturne::core
