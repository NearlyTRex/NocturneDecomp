#include "core/actor/demonactortype.h"
#include "core/manpuz/mansionpuzzlecircle.h"

#include <gtest/gtest.h>

#include <type_traits>

namespace nocturne::core {
namespace {

TEST(CMansionPuzzleCircle, DerivesFromCDemonActor) {
    static_assert(std::is_base_of_v<CDemonActor, CMansionPuzzleCircle>);
}

TEST(CMansionPuzzleCircle, HasVirtualDestructor) {
    static_assert(std::has_virtual_destructor_v<CMansionPuzzleCircle>);
}

TEST(CMansionPuzzleCircle, IsConcrete) {
    static_assert(!std::is_abstract_v<CMansionPuzzleCircle>);
}

TEST(CMansionPuzzleCircle, Constructors) {
    static_assert(std::is_constructible_v<CMansionPuzzleCircle>);
}

TEST(CMansionPuzzleCircle, PublicInterface) {
    static_assert(
        std::is_same_v<decltype(&CMansionPuzzleCircle::setup), void (CMansionPuzzleCircle::*)()>);
    static_assert(std::is_same_v<decltype(&CMansionPuzzleCircle::process),
                                 void (CMansionPuzzleCircle::*)(float)>);
    static_assert(std::is_same_v<decltype(&CMansionPuzzleCircle::renderOpaque),
                                 int (CMansionPuzzleCircle::*)()>);
    static_assert(std::is_same_v<decltype(&CMansionPuzzleCircle::getBoundingBox),
                                 CBoundingBox3D *(CMansionPuzzleCircle::*)(CBoundingBox3D *)>);
    static_assert(std::is_same_v<decltype(&CMansionPuzzleCircle::getCollisionType),
                                 ECollisionType (CMansionPuzzleCircle::*)(SCollisionInfo *)>);
    static_assert(std::is_same_v<decltype(&CMansionPuzzleCircle::onLaserHit),
                                 void (CMansionPuzzleCircle::*)(SLaserInfo *)>);
    static_assert(
        std::is_same_v<decltype(&CMansionPuzzleCircle::customRayIntersect),
                       float (CMansionPuzzleCircle::*)(common::CVector3f *, common::CVector3f *,
                                                       common::CVector3f *)>);
    static_assert(std::is_same_v<decltype(&CMansionPuzzleCircle::customIntersectCylinderXZ),
                                 void (CMansionPuzzleCircle::*)(SIntersectXZCylinder *)>);
    static_assert(
        std::is_same_v<decltype(&CMansionPuzzleCircle::customGetFloorHeight),
                       int (CMansionPuzzleCircle::*)(common::CVector3f *, float, float *)>);
    static_assert(std::is_same_v<decltype(&CMansionPuzzleCircle::getActorType),
                                 const CDemonActorType &(CMansionPuzzleCircle::*)() const>);
    static_assert(std::is_same_v<decltype(&CMansionPuzzleCircle::archive),
                                 void (CMansionPuzzleCircle::*)(CActorArchive &)>);
}

TEST(CMansionPuzzleCircle, ItsRecordIsVersion3UnderCDemonActor) {
    EXPECT_EQ(CMansionPuzzleCircle::kType.class_name, "CMansionPuzzleCircle");
    EXPECT_EQ(CMansionPuzzleCircle::kType.parent_type, &CDemonActor::kType);
    EXPECT_EQ(CMansionPuzzleCircle::kType.factory_func, nullptr);
    EXPECT_EQ(CMansionPuzzleCircle::kType.latest_version, 3);
}

} // namespace
} // namespace nocturne::core
