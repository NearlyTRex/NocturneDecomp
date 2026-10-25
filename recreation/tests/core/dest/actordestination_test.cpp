#include "core/actor/demonactortype.h"
#include "core/dest/actordestination.h"

#include <gtest/gtest.h>

#include <type_traits>

namespace nocturne::core {
namespace {

TEST(CActorDestination, DerivesFromCDemonActor) {
    static_assert(std::is_base_of_v<CDemonActor, CActorDestination>);
}

TEST(CActorDestination, HasVirtualDestructor) {
    static_assert(std::has_virtual_destructor_v<CActorDestination>);
}

TEST(CActorDestination, IsConcrete) {
    static_assert(!std::is_abstract_v<CActorDestination>);
}

TEST(CActorDestination, Constructors) {
    static_assert(std::is_constructible_v<CActorDestination>);
}

TEST(CActorDestination, PublicInterface) {
    static_assert(
        std::is_same_v<decltype(&CActorDestination::setup), void (CActorDestination::*)()>);
    static_assert(
        std::is_same_v<decltype(&CActorDestination::process), void (CActorDestination::*)(float)>);
    static_assert(std::is_same_v<decltype(&CActorDestination::renderTransparent),
                                 int (CActorDestination::*)()>);
    static_assert(std::is_same_v<decltype(&CActorDestination::getBoundingBox),
                                 CBoundingBox3D *(CActorDestination::*)(CBoundingBox3D *)>);
    static_assert(std::is_same_v<decltype(&CActorDestination::getActorType),
                                 const CDemonActorType &(CActorDestination::*)() const>);
    static_assert(std::is_same_v<decltype(&CActorDestination::archive),
                                 void (CActorDestination::*)(CActorArchive &)>);
    static_assert(std::is_same_v<decltype(&CActorDestination::acceptsActor),
                                 int (CActorDestination::*)(CDemonActor *)>);
}

TEST(CActorDestination, ItsRecordIsVersion4UnderCDemonActor) {
    EXPECT_EQ(CActorDestination::kType.class_name, "CActorDestination");
    EXPECT_EQ(CActorDestination::kType.parent_type, &CDemonActor::kType);
    EXPECT_EQ(CActorDestination::kType.factory_func, nullptr);
    EXPECT_EQ(CActorDestination::kType.latest_version, 4);
}

} // namespace
} // namespace nocturne::core
