#include "core/set/set.h"

#include <gtest/gtest.h>

#include <type_traits>

namespace nocturne::core {
namespace {

TEST(CoreSetFunctions, PublicInterface) {
    static_assert(std::is_same_v<decltype(&staticInit), void (*)()>);
    static_assert(std::is_same_v<decltype(&qsortByDisplayListEntry),
                                 int (*)(SDisplayListSortEntry *, SDisplayListSortEntry *)>);
}

} // namespace
} // namespace nocturne::core
