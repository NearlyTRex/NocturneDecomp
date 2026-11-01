#include "core/actor/demonactor.h"
#include "core/actor/demonactortype.h"
#include "core/lightgun/lightgun.h"
#include "tests/mocks/core/notportedcalls.h"
#include "tests/mocks/core/testclasses.h"

#include <gtest/gtest.h>

#include <memory>
#include <type_traits>

namespace nocturne::core {
namespace {

TEST(CLightGun, DerivesFromCWeapon) {
    static_assert(std::is_base_of_v<CWeapon, CLightGun>);
}

TEST(CLightGun, HasVirtualDestructor) {
    static_assert(std::has_virtual_destructor_v<CLightGun>);
}

TEST(CLightGun, IsConcrete) {
    static_assert(!std::is_abstract_v<CLightGun>);
}

TEST(CLightGun, Constructors) {
    static_assert(std::is_constructible_v<CLightGun, CActor &>);
}

TEST(CLightGun, PublicInterface) {
    static_assert(std::is_same_v<decltype(&CLightGun::process), void (CLightGun::*)(float)>);
    static_assert(std::is_same_v<decltype(&CLightGun::getActorType),
                                 const CDemonActorType &(CLightGun::*)() const>);
    static_assert(std::is_same_v<decltype(&CLightGun::fire), int (CLightGun::*)()>);
    static_assert(std::is_same_v<decltype(&CLightGun::getDamage), float (CLightGun::*)()>);
    static_assert(std::is_same_v<decltype(&CLightGun::renderAimBeam), void (CLightGun::*)()>);
}

TEST(CLightGun, ItsRecordIsAVersion1WeaponThatMissionsCanCreate) {
    EXPECT_EQ(CLightGun::kType.class_name, "CLightGun");
    EXPECT_EQ(CLightGun::kType.parent_type, &CWeapon::kType);
    EXPECT_EQ(CLightGun::kType.latest_version, 1);
    ASSERT_NE(CLightGun::kType.factory_func, nullptr);
    CTestClasses classes;
    const std::unique_ptr<CDemonActor> gun = CLightGun::kType.factory_func(classes.get());
    EXPECT_EQ(&gun->getActorType(), &CLightGun::kType);
}

TEST(CLightGun, ALightGunIsTheCreModelAndWeighsEight) {
    CTestClasses classes;
    const CLightGun gun{classes.get()};
    EXPECT_EQ(gun.getModel().getModelName(), "cre.kfm");
    EXPECT_EQ(gun.getWeight(), 8.0F);
}

TEST(CLightGun, TheFunctionsNotPortedYetQuit) {
    CTestClasses classes;
    CLightGun gun{classes.get()};
    const NotPortedCalls calls = {
        {"process", [&] { gun.process(0.0F); }},
        {"fire", [&] { static_cast<void>(gun.fire()); }},
        {"getDamage", [&] { static_cast<void>(gun.getDamage()); }},
        {"renderAimBeam", [&] { gun.renderAimBeam(); }},
    };
    expectEachQuitsNotPorted("CLightGun", calls);
}

} // namespace
} // namespace nocturne::core
