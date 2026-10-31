#include "core/npc/npc.h"
#include "tests/mocks/core/charactermodelfixture.h"

#include <gtest/gtest.h>

#include <array>
#include <string_view>

namespace nocturne::core {
namespace {

class CNPCSetupTest : public CCharacterModelFixture {
protected:
    CNPC npc_{classes_};
};

TEST_F(CNPCSetupTest, AnNPCIsSetUpAsACharacter) {
    constexpr std::array<std::string_view, 1> kHead = {"Bip01 Head"};
    givenCharacterModel("priest.dfm", kHead);
    npc_.setup();
    EXPECT_EQ(npc_.getModel().getModelPtr(), &models_.getDeformableModel("priest.dfm"));
    EXPECT_EQ(npc_.getDescriptiveName(), "NPC");
}

} // namespace
} // namespace nocturne::core
