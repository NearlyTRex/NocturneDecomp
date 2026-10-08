#include "core/dfilter/filterfx.h"

#include <gtest/gtest.h>

#include <type_traits>

namespace nocturne::core {
namespace {

TEST(CFilterFX, IsConcrete) {
    static_assert(!std::is_abstract_v<CFilterFX>);
}

TEST(CFilterFX, Constructors) {
    static_assert(std::is_constructible_v<CFilterFX>);
}

TEST(CFilterFX, PublicInterface) {
    static_assert(std::is_same_v<decltype(&CFilterFX::openMovie), void (CFilterFX::*)(char *)>);
    static_assert(std::is_same_v<decltype(&CFilterFX::process), void (CFilterFX::*)()>);
}

} // namespace
} // namespace nocturne::core
