#pragma once

#include "common/random/watcomrandom.h"
#include "core/actor/actor.h"
#include "tests/mocks/core/deformablemodelfixture.h"
#include "tests/mocks/core/gameparts.h"
#include "tests/mocks/core/mockkeyframedmodels.h"
#include "tests/mocks/engine/mockgameclock.h"

#include <gmock/gmock.h>

#include <array>
#include <format>
#include <span>
#include <string>
#include <string_view>

namespace nocturne::core {

// Actor classes whose characters find their models on the fixture's disk.
class CCharacterModelFixture : public CDeformableModelFixture {
protected:
    static constexpr std::array<std::string_view, 1> kOnePart = {"body"};

    // models\<model> of one level and the parts, on data\CHAR.SKL: a root, then the bones each
    // on it, with the one motion stand. A bone or part named missing is left out.
    void givenCharacterModel(std::string_view model, std::span<const std::string_view> bones,
                             std::span<const std::string_view> parts = kOnePart,
                             std::string_view missing = "") {
        std::string bone_lines = "\"Bip01\",-1\n";
        std::string angles = "1,0,0,0\n";
        int bone_count = 1;
        for (const std::string_view bone : bones) {
            if (bone != missing) {
                bone_lines += std::format("\"{}\",0\n", bone);
                angles += "1,0,0,0\n";
                ++bone_count;
            }
        }
        std::string origins;
        std::string bone_parts;
        for (int i = 0; i < bone_count; ++i) {
            origins += "0,0,0\n";
            bone_parts += "0\n";
        }
        givenFile("data\\CHAR.SKL",
                  std::format("// v\n3\n// counts\n{},1\n// bones\n{}// angles\n{}// roots\n0,0,0\n"
                              "// canceled\n0,0,0\n// motion list version\n2\n// states\n1\nS\n"
                              "// motions\n1\n// m\n\"stand\",30,0,0,1\n// exit\n1,0,0\n// cmd\n"
                              "1,0,0\n// back\n0,0\n// transitions\n0\n// signals\n0\n"
                              "// markers\n0\n// origins\n{}",
                              bone_count, bone_lines, angles, origins));
        std::string part_lines;
        int part_count = 0;
        for (const std::string_view part : parts) {
            if (part != missing) {
                part_lines += std::format("\"{}\", 0, 0\n0,0\n", part);
                ++part_count;
            }
        }
        givenModel(model, {.counts = std::format("1,1,1,{},{}\n", bone_count, part_count),
                           .lods = "1,0,0,100,0\n",
                           .skeleton = "CHAR.SKL\n",
                           .parts = part_lines,
                           .vertices = "1\n0,1,0,0,0\n",
                           .tris = "",
                           .caps = "",
                           .textures = "SKIN.RAW\n",
                           .origins = origins,
                           .scale = "1,1,1\n",
                           .bias = "0,0,0\n",
                           .bone_parts = bone_parts});
    }

    ::testing::NiceMock<engine::MockGameClock> clock_;
    CGameParts game_parts_{clock_};
    common::CWatcomRandom crt_;
    ::testing::NiceMock<MockKeyFramedModels> keyframed_models_;
    CActor classes_{game_parts_.getGame(), crt_, models_, keyframed_models_};
};

} // namespace nocturne::core
