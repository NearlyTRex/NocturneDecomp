#include "shape/edittool/edittool.h"

#include <gtest/gtest.h>

#include <type_traits>

namespace nocturne::shape {
namespace {

TEST(ShapeEdittoolFunctions, PublicInterface) {
    static_assert(std::is_same_v<decltype(&staticInit), void (*)()>);
    static_assert(std::is_same_v<decltype(&qsortByString), int (*)(char *, char *)>);
    static_assert(std::is_same_v<decltype(&calculateGridWidth), int (*)()>);
    static_assert(std::is_same_v<decltype(&wildcardStringMatch), int (*)(char *, char *, int)>);
}

} // namespace
} // namespace nocturne::shape
