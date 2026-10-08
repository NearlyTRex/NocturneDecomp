#include "core/dpart/demonpart.h"

#include <gtest/gtest.h>

#include <type_traits>

namespace nocturne::core {
namespace {

TEST(CDemonPart, IsConcrete) {
    static_assert(!std::is_abstract_v<CDemonPart>);
}

TEST(CDemonPart, Constructors) {
    static_assert(std::is_constructible_v<CDemonPart>);
}

} // namespace
} // namespace nocturne::core
