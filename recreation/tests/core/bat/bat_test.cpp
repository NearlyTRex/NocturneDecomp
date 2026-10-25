#include "core/actor/demonactortype.h"
#include "core/bat/bat.h"

#include <gtest/gtest.h>

#include <type_traits>

namespace nocturne::core {
namespace {

TEST(CBat, DerivesFromCDemonActor) {
    static_assert(std::is_base_of_v<CDemonActor, CBat>);
}

TEST(CBat, HasVirtualDestructor) {
    static_assert(std::has_virtual_destructor_v<CBat>);
}

TEST(CBat, IsConcrete) {
    static_assert(!std::is_abstract_v<CBat>);
}

TEST(CBat, Constructors) {
    static_assert(std::is_constructible_v<CBat>);
}

TEST(CBat, PublicInterface) {
    static_assert(std::is_same_v<decltype(&CBat::setup), void (CBat::*)()>);
    static_assert(std::is_same_v<decltype(&CBat::process), void (CBat::*)(float)>);
    static_assert(std::is_same_v<decltype(&CBat::renderOpaque), int (CBat::*)()>);
    static_assert(std::is_same_v<decltype(&CBat::getBoundingBox),
                                 CBoundingBox3D *(CBat::*)(CBoundingBox3D *)>);
    static_assert(
        std::is_same_v<decltype(&CBat::getActorType), const CDemonActorType &(CBat::*)() const>);
    static_assert(std::is_same_v<decltype(&CBat::archive), void (CBat::*)(CActorArchive &)>);
}

TEST(CBat, ItsRecordIsVersion4UnderCDemonActor) {
    EXPECT_EQ(CBat::kType.class_name, "CBat");
    EXPECT_EQ(CBat::kType.parent_type, &CDemonActor::kType);
    EXPECT_EQ(CBat::kType.factory_func, nullptr);
    EXPECT_EQ(CBat::kType.latest_version, 4);
}

} // namespace
} // namespace nocturne::core
