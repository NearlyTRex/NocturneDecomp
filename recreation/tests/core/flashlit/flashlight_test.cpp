#include "core/actor/demonactortype.h"
#include "core/flashlit/flashlight.h"

#include <gtest/gtest.h>

#include <type_traits>

namespace nocturne::core {
namespace {

TEST(CFlashlight, DerivesFromCWeapon) {
    static_assert(std::is_base_of_v<CWeapon, CFlashlight>);
}

TEST(CFlashlight, HasVirtualDestructor) {
    static_assert(std::has_virtual_destructor_v<CFlashlight>);
}

TEST(CFlashlight, IsConcrete) {
    static_assert(!std::is_abstract_v<CFlashlight>);
}

TEST(CFlashlight, Constructors) {
    static_assert(std::is_constructible_v<CFlashlight>);
}

TEST(CFlashlight, PublicInterface) {
    static_assert(std::is_same_v<decltype(&CFlashlight::getActorType),
                                 const CDemonActorType &(CFlashlight::*)() const>);
    static_assert(std::is_same_v<decltype(&CFlashlight::fire), int (CFlashlight::*)()>);
    static_assert(std::is_same_v<decltype(&CFlashlight::getDamage), float (CFlashlight::*)()>);
}

TEST(CFlashlight, ItsRecordIsVersion1UnderCWeapon) {
    EXPECT_EQ(CFlashlight::kType.class_name, "CFlashlight");
    EXPECT_EQ(CFlashlight::kType.parent_type, &CWeapon::kType);
    EXPECT_EQ(CFlashlight::kType.factory_func, nullptr);
    EXPECT_EQ(CFlashlight::kType.latest_version, 1);
}

} // namespace
} // namespace nocturne::core
