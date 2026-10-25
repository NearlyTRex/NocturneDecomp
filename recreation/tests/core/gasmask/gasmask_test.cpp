#include "core/actor/demonactortype.h"
#include "core/gasmask/gasmask.h"

#include <gtest/gtest.h>

#include <type_traits>

namespace nocturne::core {
namespace {

TEST(CGasMask, DerivesFromCDemonActor) {
    static_assert(std::is_base_of_v<CDemonActor, CGasMask>);
}

TEST(CGasMask, HasVirtualDestructor) {
    static_assert(std::has_virtual_destructor_v<CGasMask>);
}

TEST(CGasMask, IsConcrete) {
    static_assert(!std::is_abstract_v<CGasMask>);
}

TEST(CGasMask, Constructors) {
    static_assert(std::is_constructible_v<CGasMask>);
}

TEST(CGasMask, PublicInterface) {
    static_assert(std::is_same_v<decltype(&CGasMask::setup), void (CGasMask::*)()>);
    static_assert(std::is_same_v<decltype(&CGasMask::process), void (CGasMask::*)(float)>);
    static_assert(std::is_same_v<decltype(&CGasMask::renderOpaque), int (CGasMask::*)()>);
    static_assert(std::is_same_v<decltype(&CGasMask::getBoundingBox),
                                 CBoundingBox3D *(CGasMask::*)(CBoundingBox3D *)>);
    static_assert(std::is_same_v<decltype(&CGasMask::getCollisionType),
                                 ECollisionType (CGasMask::*)(SCollisionInfo *)>);
    static_assert(std::is_same_v<decltype(&CGasMask::canPickup), int (CGasMask::*)(CDemonActor *)>);
    static_assert(std::is_same_v<decltype(&CGasMask::getActorType),
                                 const CDemonActorType &(CGasMask::*)() const>);
    static_assert(
        std::is_same_v<decltype(&CGasMask::archive), void (CGasMask::*)(CActorArchive &)>);
}

TEST(CGasMask, ItsRecordIsVersion1UnderCDemonActor) {
    EXPECT_EQ(CGasMask::kType.class_name, "CGasMask");
    EXPECT_EQ(CGasMask::kType.parent_type, &CDemonActor::kType);
    EXPECT_EQ(CGasMask::kType.factory_func, nullptr);
    EXPECT_EQ(CGasMask::kType.latest_version, 1);
}

} // namespace
} // namespace nocturne::core
