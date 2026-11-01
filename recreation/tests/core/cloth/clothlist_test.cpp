#include "common/error/fatalerror.h"
#include "common/math/vector3f.h"
#include "core/cloth/cloth.h"
#include "core/cloth/clothlist.h"
#include "core/dmodel/keyframedmodel.h"
#include "tests/mocks/core/mockkeyframedmodels.h"
#include "tests/mocks/engine/podfixture.h"

#include <gmock/gmock.h>
#include <gtest/gtest.h>

#include <memory>
#include <string_view>
#include <type_traits>

namespace nocturne::core {
namespace {

using ::testing::ElementsAre;

TEST(CClothList, IsConcrete) {
    static_assert(!std::is_abstract_v<CClothList>);
}

TEST(CClothList, Constructors) {
    static_assert(std::is_constructible_v<CClothList, const engine::CDosIo &, IKeyFramedModels &>);
}

TEST(CClothList, PublicInterface) {
    static_assert(std::is_same_v<decltype(&CClothList::load), void (CClothList::*)()>);
    static_assert(std::is_same_v<decltype(&CClothList::reset), void (CClothList::*)()>);
    static_assert(std::is_same_v<decltype(&CClothList::add), void (CClothList::*)(char *)>);
    static_assert(
        std::is_same_v<decltype(&CClothList::setup),
                       void (CClothList::*)(const common::CVector3f &, const common::CVector3f &,
                                            CDeformableModelInstance *)>);
    static_assert(
        std::is_same_v<decltype(&CClothList::process),
                       void (CClothList::*)(const common::CVector3f &, const common::CVector3f &,
                                            float, float, CDeformableModelInstance *,
                                            const common::CVector3f &)>);
    static_assert(std::is_same_v<decltype(&CClothList::render),
                                 void (CClothList::*)(CDeformableModelInstance *)>);
}

// A disk holding a two-point strip of cloth hanging from its top point.
class CClothListTest : public engine::CPodFixture {
protected:
    CClothListTest() {
        ON_CALL(models_, loadOwnedModel)
            .WillByDefault([](CKeyFramedModel &model, std::string_view name) { model.load(name); });
        givenFile("models\\strip.kfm", "/\n5\n;\n2,1,0,0,1\n;\n0\n;\n0,0,0\n0,-256,0\n;\n"
                                       "0,2, 0,0,0, 1,0,0\n;\n");
        givenFile("models\\strip.cth", "//\n3\n//\nstrip.kfm\n//\n0.1,32,0.9,0.1,0.5,0.5,0.1,0.1\n"
                                       "//\n1\n//\n0\n//\n1\n//\n0\n//\n0\n");
    }

    static constexpr common::CVector3f kOrigin{};
    ::testing::NiceMock<MockKeyFramedModels> models_;
    CClothList cloth_list_{dosio_, models_};
};

TEST_F(CClothListTest, AListHoldsTheFileNamesItIsGiven) {
    EXPECT_TRUE(cloth_list_.getFilenames().empty());
    cloth_list_.setFilenames({"coat.cls", "hat.cls"});
    cloth_list_.setFilenames({"cape.cls"});
    EXPECT_THAT(cloth_list_.getFilenames(), ElementsAre("cape.cls"));
}

TEST_F(CClothListTest, EachPieceIsMadeAgainFromItsFile) {
    cloth_list_.setFilenames({"strip.cth", "strip.cth"});
    cloth_list_.load();
    cloth_list_.setup(kOrigin, kOrigin, nullptr);
    cloth_list_.process(kOrigin, kOrigin, 0.1F, 9999.0F, nullptr, kOrigin);
    cloth_list_.load();
    ASSERT_EQ(cloth_list_.getCloths().size(), 2U);
    EXPECT_EQ(cloth_list_.getCloths()[0]->getVertices()[1].secondary_velocity.y, 0.0F);
}

// Each piece's free point swings on its tie; its pinned one stays.
TEST_F(CClothListTest, EachPieceIsSetUpAndMovedOn) {
    cloth_list_.setFilenames({"strip.cth", "strip.cth"});
    cloth_list_.load();
    cloth_list_.setup(kOrigin, kOrigin, nullptr);
    EXPECT_EQ(cloth_list_.getCloths()[1]->getVertices()[1].position.y, -1.0F);
    cloth_list_.process(kOrigin, kOrigin, 0.1F, 9999.0F, nullptr, kOrigin);
    for (const std::unique_ptr<CCloth> &cloth : cloth_list_.getCloths()) {
        EXPECT_NE(cloth->getVertices()[1].secondary_velocity.y, 0.0F);
        EXPECT_EQ(cloth->getVertices()[0].position.y, 0.0F);
    }
}

} // namespace
} // namespace nocturne::core
