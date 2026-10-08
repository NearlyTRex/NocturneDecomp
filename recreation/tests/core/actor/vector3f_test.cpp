#include "core/actor/vector3f.h"

#include <gtest/gtest.h>

#include <type_traits>

namespace nocturne::core {
namespace {

TEST(CVector3f, IsConcrete) {
    static_assert(!std::is_abstract_v<CVector3f>);
}

TEST(CVector3f, Constructors) {
    static_assert(std::is_constructible_v<CVector3f>);
}

} // namespace
} // namespace nocturne::core
