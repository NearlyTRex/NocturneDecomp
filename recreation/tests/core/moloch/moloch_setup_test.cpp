#include "core/moloch/moloch.h"
#include "tests/mocks/core/charactermodelfixture.h"
#include "tests/mocks/core/testheroarchive.h"

#include <gtest/gtest.h>

#include <array>
#include <string_view>

namespace nocturne::core {
namespace {

constexpr std::array<std::string_view, 1> kHead = {"Bip01 head"};

class CMolochSetupTest : public CCharacterModelFixture {
protected:
    CMolochSetupTest() {
        givenCharacterModel("moloch_h.dfm", kHead);
        givenCharacterModel("moloch_d.dfm", kHead);
    }

    CMoloch moloch_{classes_};
};

TEST_F(CMolochSetupTest, AsAHumanHisOwnModelIsTheHumansAndTheDemonsIsTheOther) {
    moloch_.setup();
    EXPECT_EQ(moloch_.getModel().getModelPtr(), &models_.getDeformableModel("moloch_h.dfm"));
    EXPECT_EQ(moloch_.getOtherFormModel().getModelPtr(),
              &models_.getDeformableModel("moloch_d.dfm"));
}

TEST_F(CMolochSetupTest, AsTheDemonTheModelsAreTheOtherWayAbout) {
    CTestHeroArchive archive(moloch_, CMoloch::kType, 1, "\"a\"\n\"b\"\n0 // inHumanForm\n0\n0\n");
    moloch_.archive(archive.get());
    moloch_.setup();
    EXPECT_EQ(moloch_.getModel().getModelPtr(), &models_.getDeformableModel("moloch_d.dfm"));
    EXPECT_EQ(moloch_.getOtherFormModel().getModelPtr(),
              &models_.getDeformableModel("moloch_h.dfm"));
}

} // namespace
} // namespace nocturne::core
