#include "shape/edittool/edcheck.h"

#include <gtest/gtest.h>

#include <type_traits>

namespace nocturne::shape {
namespace {

TEST(CEdCheck, IsConcrete) {
    static_assert(!std::is_abstract_v<CEdCheck>);
}

TEST(CEdCheck, Constructors) {
    static_assert(std::is_constructible_v<CEdCheck>);
}

} // namespace
} // namespace nocturne::shape
