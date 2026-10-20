#include "common/error/fatalerror.h"
#include "common/math/vector3f.h"
#include "core/actor/demonactortype.h"
#include "core/baron/baron.h"
#include "core/colonel/colonel.h"
#include "core/gabriela/gabriella.h"
#include "core/game/herotype.h"
#include "core/haystack/haystack.h"
#include "core/hero/hero.h"
#include "core/hero/heroplaceholder.h"
#include "core/icepick/icepick.h"
#include "core/location.h"
#include "core/moloch/moloch.h"
#include "core/scat/scat.h"
#include "core/stranger/stranger.h"
#include "core/svetlana/svetlana.h"
#include "tests/mocks/core/missionfixture.h"

#include <gmock/gmock.h>
#include <gtest/gtest.h>

#include <cstdint>
#include <memory>
#include <utility>
#include <vector>

namespace nocturne::core {
namespace {

using CHeroPlaceholderCreateTest = CMissionFixture;

TEST_F(CHeroPlaceholderCreateTest, EachHeroTypeMakesItsHerosClass) {
    const std::vector<std::pair<EHeroType, const CDemonActorType *>> heroes = {
        {EHeroType::HERO_TYPE_GABRIELLA, &CGabriella::kType},
        {EHeroType::HERO_TYPE_SVETLANA, &CSvetlana::kType},
        {EHeroType::HERO_TYPE_STRANGER, &CStranger::kType},
        {EHeroType::HERO_TYPE_SCAT, &CScat::kType},
        {EHeroType::HERO_TYPE_BARON, &CBaron::kType},
        {EHeroType::HERO_TYPE_ICEPICK, &CIcePick::kType},
        {EHeroType::HERO_TYPE_HAYSTACK, &CHaystack::kType},
        {EHeroType::HERO_TYPE_COLONEL, &CColonel::kType},
        {EHeroType::HERO_TYPE_MOLOCH, &CMoloch::kType},
    };
    const CHeroPlaceholder placeholder;
    for (const auto &[hero_type, type] : heroes) {
        const std::unique_ptr<CHero> hero = placeholder.createHero(hero_type, actor_, mission_);
        EXPECT_EQ(&hero->getActorType(), type);
    }
}

TEST_F(CHeroPlaceholderCreateTest, TheHeroIsNamedAndStandsWhereThePlaceIs) {
    CHeroPlaceholder placeholder;
    placeholder.setLocation({.position = common::CVector3f(1.0F, 2.0F, 3.0F), .area_id = 4});
    placeholder.setOrientation(common::CVector3f(0.5F, 0.25F, 0.125F));
    const std::unique_ptr<CHero> hero =
        placeholder.createHero(EHeroType::HERO_TYPE_SCAT, actor_, mission_);
    EXPECT_EQ(hero->getActorName(), "Scat0");
    const CLocation &location = hero->getLocation();
    EXPECT_EQ(location.position.x, 1.0F);
    EXPECT_EQ(location.position.y, 2.0F);
    EXPECT_EQ(location.position.z, 3.0F);
    EXPECT_EQ(location.area_id, 4);
    const common::CVector3f &orientation = hero->getOrientation();
    EXPECT_EQ(orientation.x, 0.5F);
    EXPECT_EQ(orientation.y, 0.25F);
    EXPECT_EQ(orientation.z, 0.125F);
}

// Types past the last hero's, as a settings file could hold them.
class CHeroPlaceholderInvalidTypeTest : public CMissionFixture,
                                        public ::testing::WithParamInterface<std::uint8_t> {};

TEST_P(CHeroPlaceholderInvalidTypeTest, ATypeThatIsntAHerosIsFatal) {
    const CHeroPlaceholder placeholder;
    const EHeroType hero_type{GetParam()};
    EXPECT_THAT([&] { static_cast<void>(placeholder.createHero(hero_type, actor_, mission_)); },
                ::testing::ThrowsMessage<common::CFatalError>(
                    ::testing::StrEq("CHeroPlaceholder::createHero - invalid hero type.")));
}

INSTANTIATE_TEST_SUITE_P(PastTheLastHero, CHeroPlaceholderInvalidTypeTest,
                         ::testing::Values(std::uint8_t{9}, std::uint8_t{255}));

} // namespace
} // namespace nocturne::core
