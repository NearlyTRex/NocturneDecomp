#include "core/cloth/clothlist.h"

#include <gmock/gmock.h>
#include <gtest/gtest.h>

#include <type_traits>

namespace nocturne::core {
namespace {

using ::testing::ElementsAre;

TEST(CClothList, IsConcrete) {
    static_assert(!std::is_abstract_v<CClothList>);
}

TEST(CClothList, Constructors) {
    static_assert(std::is_constructible_v<CClothList>);
}

TEST(CClothList, PublicInterface) {
    static_assert(std::is_same_v<decltype(&CClothList::load), void (CClothList::*)()>);
    static_assert(std::is_same_v<decltype(&CClothList::reset), void (CClothList::*)()>);
    static_assert(std::is_same_v<decltype(&CClothList::add), void (CClothList::*)(char *)>);
    static_assert(std::is_same_v<decltype(&CClothList::setup),
                                 void (CClothList::*)(common::CVector3f *, common::CVector3f *,
                                                      CDeformableModelInstance *)>);
    static_assert(std::is_same_v<decltype(&CClothList::process),
                                 void (CClothList::*)(common::CVector3f *, common::CVector3f *,
                                                      float, float, CDeformableModelInstance *)>);
    static_assert(std::is_same_v<decltype(&CClothList::render),
                                 void (CClothList::*)(CDeformableModelInstance *)>);
}

TEST(CClothList, AListHoldsTheFileNamesItIsGiven) {
    CClothList cloth_list;
    EXPECT_TRUE(cloth_list.getFilenames().empty());
    cloth_list.setFilenames({"coat.cls", "hat.cls"});
    cloth_list.setFilenames({"cape.cls"});
    EXPECT_THAT(cloth_list.getFilenames(), ElementsAre("cape.cls"));
}

} // namespace
} // namespace nocturne::core
