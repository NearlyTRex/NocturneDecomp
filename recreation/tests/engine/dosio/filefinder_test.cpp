#include "engine/dosio/filefinder.h"

#include <gtest/gtest.h>

#include <type_traits>

namespace nocturne::engine {
namespace {

TEST(CFileFinder, IsConcrete) {
    static_assert(!std::is_abstract_v<CFileFinder>);
}

TEST(CFileFinder, Constructors) {
    static_assert(std::is_constructible_v<CFileFinder>);
}

TEST(CFileFinder, PublicInterface) {
    static_assert(std::is_same_v<decltype(&CFileFinder::openSearch), int (CFileFinder::*)(char *)>);
    static_assert(std::is_same_v<decltype(&CFileFinder::findNext), int (CFileFinder::*)()>);
    static_assert(std::is_same_v<decltype(&CFileFinder::closeSearch), void (CFileFinder::*)()>);
}

} // namespace
} // namespace nocturne::engine
