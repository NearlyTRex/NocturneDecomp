#include "shape/memdbg/memdbg.h"

#include <gtest/gtest.h>

#include <type_traits>

namespace nocturne::shape {
namespace {

TEST(ShapeMemdbgFunctions, PublicInterface) {
    static_assert(std::is_same_v<decltype(&debugAllocTracked1), void *(*)(int, char *, int)>);
    static_assert(std::is_same_v<decltype(&debugFreeChecked), void (*)(void *)>);
    static_assert(std::is_same_v<decltype(&debugMalloc), void *(*)(int, char *, int)>);
    static_assert(
        std::is_same_v<decltype(&debugCalloc), void *(*)(std::size_t, std::size_t, char *, int)>);
    static_assert(std::is_same_v<decltype(&free), void (*)(void *)>);
    static_assert(std::is_same_v<decltype(&malloc), void *(*)(std::size_t)>);
}

} // namespace
} // namespace nocturne::shape
