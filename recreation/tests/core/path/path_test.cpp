#include "core/path/path.h"

#include <gtest/gtest.h>

#include <type_traits>

namespace nocturne::core {
namespace {

TEST(CorePathFunctions, PublicInterface) {
    static_assert(std::is_same_v<decltype(&getPathMap), CPathMap *(*)(CLocation *)>);
    static_assert(std::is_same_v<decltype(&resetAllPathMaps), void (*)()>);
}

} // namespace
} // namespace nocturne::core
