#include "core/vehicle/tire.h"

#include <gtest/gtest.h>

#include <type_traits>

namespace nocturne::core {
namespace {

TEST(CTire, IsConcrete) {
    static_assert(!std::is_abstract_v<CTire>);
}

TEST(CTire, Constructors) {
    static_assert(std::is_constructible_v<CTire>);
}

} // namespace
} // namespace nocturne::core
