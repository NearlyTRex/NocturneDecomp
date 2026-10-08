#include "core/fire/stake.h"

#include <gtest/gtest.h>

#include <type_traits>

namespace nocturne::core {
namespace {

TEST(CStake, IsConcrete) {
    static_assert(!std::is_abstract_v<CStake>);
}

TEST(CStake, Constructors) {
    static_assert(std::is_constructible_v<CStake>);
}

TEST(CStake, PublicInterface) {
    static_assert(
        std::is_same_v<decltype(&CStake::init), void (CStake::*)(CVector3f *, CVector3f *)>);
    static_assert(std::is_same_v<decltype(&CStake::spawn),
                                 void (CStake::*)(CVector3f *, CVector3f *, CVector3f *)>);
    static_assert(std::is_same_v<decltype(&CStake::render), void (CStake::*)()>);
    static_assert(std::is_same_v<decltype(&CStake::process), void (CStake::*)()>);
}

} // namespace
} // namespace nocturne::core
