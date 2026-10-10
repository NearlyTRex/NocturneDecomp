#include "shape/spotview/spotview.h"

#include <gtest/gtest.h>

#include <type_traits>

namespace nocturne::shape {
namespace {

TEST(CSpotView, IsConcrete) {
    static_assert(!std::is_abstract_v<CSpotView>);
}

TEST(CSpotView, Constructors) {
    static_assert(std::is_constructible_v<CSpotView>);
}

} // namespace
} // namespace nocturne::shape
