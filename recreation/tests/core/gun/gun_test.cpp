#include "core/actor/demonactor.h"
#include "core/actor/demonactortype.h"
#include "core/gun/gun.h"
#include "tests/mocks/core/notportedcalls.h"

#include <gtest/gtest.h>

#include <memory>
#include <type_traits>

namespace nocturne::core {
namespace {

TEST(CGun, DerivesFromCWeapon) {
    static_assert(std::is_base_of_v<CWeapon, CGun>);
}

TEST(CGun, HasVirtualDestructor) {
    static_assert(std::has_virtual_destructor_v<CGun>);
}

TEST(CGun, IsConcrete) {
    static_assert(!std::is_abstract_v<CGun>);
}

TEST(CGun, Constructors) {
    static_assert(std::is_constructible_v<CGun>);
}

TEST(CGun, PublicInterface) {
    static_assert(
        std::is_same_v<decltype(&CGun::getActorType), const CDemonActorType &(CGun::*)() const>);
    static_assert(std::is_same_v<decltype(&CGun::fire), int (CGun::*)()>);
    static_assert(std::is_same_v<decltype(&CGun::getDamage), float (CGun::*)()>);
}

TEST(CGun, ItsRecordIsAVersion1WeaponThatMissionsCanCreate) {
    EXPECT_EQ(CGun::kType.class_name, "CGun");
    EXPECT_EQ(CGun::kType.parent_type, &CWeapon::kType);
    EXPECT_EQ(CGun::kType.latest_version, 1);
    ASSERT_NE(CGun::kType.factory_func, nullptr);
    const std::unique_ptr<CDemonActor> gun = CGun::kType.factory_func();
    EXPECT_EQ(&gun->getActorType(), &CGun::kType);
}

TEST(CGun, AGunIsTheGatlingModel) {
    const CGun gun;
    EXPECT_EQ(gun.getModel().getModelName(), "gat.kfm");
}

TEST(CGun, TheFunctionsNotPortedYetQuit) {
    CGun gun;
    const NotPortedCalls calls = {
        {"fire", [&] { static_cast<void>(gun.fire()); }},
        {"getDamage", [&] { static_cast<void>(gun.getDamage()); }},
    };
    expectEachQuitsNotPorted("CGun", calls);
}

} // namespace
} // namespace nocturne::core
