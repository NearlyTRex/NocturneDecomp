#include "core/dimage/demonimage.h"

#include <gtest/gtest.h>

#include <type_traits>

namespace nocturne::core {
namespace {

TEST(CDemonImage, IsConcrete) {
    static_assert(!std::is_abstract_v<CDemonImage>);
}

TEST(CDemonImage, Constructors) {
    static_assert(std::is_constructible_v<CDemonImage>);
}

} // namespace
} // namespace nocturne::core
