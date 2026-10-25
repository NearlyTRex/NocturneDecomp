#include "core/actor/demonactortype.h"
#include "core/hpriest/highpriestofgardath.h"

#include <gtest/gtest.h>

#include <type_traits>

namespace nocturne::core {
namespace {

TEST(CHighPriestOfGardath, DerivesFromCNPC) {
    static_assert(std::is_base_of_v<CNPC, CHighPriestOfGardath>);
}

TEST(CHighPriestOfGardath, HasVirtualDestructor) {
    static_assert(std::has_virtual_destructor_v<CHighPriestOfGardath>);
}

TEST(CHighPriestOfGardath, IsConcrete) {
    static_assert(!std::is_abstract_v<CHighPriestOfGardath>);
}

TEST(CHighPriestOfGardath, Constructors) {
    static_assert(std::is_constructible_v<CHighPriestOfGardath>);
}

TEST(CHighPriestOfGardath, PublicInterface) {
    static_assert(std::is_same_v<decltype(&CHighPriestOfGardath::process),
                                 void (CHighPriestOfGardath::*)(float)>);
    static_assert(std::is_same_v<decltype(&CHighPriestOfGardath::getActorType),
                                 const CDemonActorType &(CHighPriestOfGardath::*)() const>);
    static_assert(std::is_same_v<decltype(&CHighPriestOfGardath::archive),
                                 void (CHighPriestOfGardath::*)(CActorArchive &)>);
    static_assert(std::is_same_v<decltype(&CHighPriestOfGardath::processDamage),
                                 void (CHighPriestOfGardath::*)(SDamageInfo *)>);
}

TEST(CHighPriestOfGardath, ItsRecordIsVersion1UnderCNPC) {
    EXPECT_EQ(CHighPriestOfGardath::kType.class_name, "CHighPriestOfGardath");
    EXPECT_EQ(CHighPriestOfGardath::kType.parent_type, &CNPC::kType);
    EXPECT_EQ(CHighPriestOfGardath::kType.factory_func, nullptr);
    EXPECT_EQ(CHighPriestOfGardath::kType.latest_version, 1);
}

} // namespace
} // namespace nocturne::core
