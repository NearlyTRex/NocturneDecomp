#include "core/actor/demonactortype.h"
#include "core/hiram/hiram.h"

#include <gtest/gtest.h>

#include <type_traits>

namespace nocturne::core {
namespace {

TEST(CHiram, DerivesFromCNPC) {
    static_assert(std::is_base_of_v<CNPC, CHiram>);
}

TEST(CHiram, HasVirtualDestructor) {
    static_assert(std::has_virtual_destructor_v<CHiram>);
}

TEST(CHiram, IsConcrete) {
    static_assert(!std::is_abstract_v<CHiram>);
}

TEST(CHiram, Constructors) {
    static_assert(std::is_constructible_v<CHiram>);
}

TEST(CHiram, PublicInterface) {
    static_assert(std::is_same_v<decltype(&CHiram::setup), void (CHiram::*)()>);
    static_assert(std::is_same_v<decltype(&CHiram::process), void (CHiram::*)(float)>);
    static_assert(std::is_same_v<decltype(&CHiram::getActorType),
                                 const CDemonActorType &(CHiram::*)() const>);
    static_assert(std::is_same_v<decltype(&CHiram::archive), void (CHiram::*)(CActorArchive &)>);
}

TEST(CHiram, ItsRecordIsVersion1UnderCNPC) {
    EXPECT_EQ(CHiram::kType.class_name, "CHiram");
    EXPECT_EQ(CHiram::kType.parent_type, &CNPC::kType);
    EXPECT_EQ(CHiram::kType.factory_func, nullptr);
    EXPECT_EQ(CHiram::kType.latest_version, 1);
}

} // namespace
} // namespace nocturne::core
