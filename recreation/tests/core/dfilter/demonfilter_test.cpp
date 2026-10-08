#include "core/dfilter/demonfilter.h"

#include <gtest/gtest.h>

#include <type_traits>

namespace nocturne::core {
namespace {

TEST(CDemonFilter, IsConcrete) {
    static_assert(!std::is_abstract_v<CDemonFilter>);
}

TEST(CDemonFilter, Constructors) {
    static_assert(std::is_constructible_v<CDemonFilter>);
}

TEST(CDemonFilter, PublicInterface) {
    static_assert(std::is_same_v<decltype(&CDemonFilter::load), void (CDemonFilter::*)(char *)>);
    static_assert(
        std::is_same_v<decltype(&CDemonFilter::init), void (CDemonFilter::*)(float, int)>);
}

} // namespace
} // namespace nocturne::core
