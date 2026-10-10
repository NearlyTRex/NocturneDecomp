#include "cockpit/pkbmpset/packedbitmapset.h"

#include <gtest/gtest.h>

#include <type_traits>

namespace nocturne::cockpit {
namespace {

TEST(CPackedBitmapSet, IsConcrete) {
    static_assert(!std::is_abstract_v<CPackedBitmapSet>);
}

TEST(CPackedBitmapSet, Constructors) {
    static_assert(std::is_constructible_v<CPackedBitmapSet>);
}

} // namespace
} // namespace nocturne::cockpit
