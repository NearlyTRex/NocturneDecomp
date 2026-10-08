#include "core/setdir/zthumb.h"

#include <gtest/gtest.h>

#include <type_traits>

namespace nocturne::core {
namespace {

TEST(CZThumb, IsConcrete) {
    static_assert(!std::is_abstract_v<CZThumb>);
}

} // namespace
} // namespace nocturne::core
