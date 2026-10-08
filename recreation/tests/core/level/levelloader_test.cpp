#include "core/level/levelloader.h"

#include <gtest/gtest.h>

#include <type_traits>

namespace nocturne::core {
namespace {

TEST(CLevelLoader, IsConcrete) {
    static_assert(!std::is_abstract_v<CLevelLoader>);
}

TEST(CLevelLoader, PublicInterface) {
    static_assert(std::is_same_v<decltype(&CLevelLoader::reset), void (CLevelLoader::*)()>);
    static_assert(
        std::is_same_v<decltype(&CLevelLoader::show), void (CLevelLoader::*)(int, int, int)>);
    static_assert(
        std::is_same_v<decltype(&CLevelLoader::update), void (CLevelLoader::*)(char *, int)>);
    static_assert(std::is_same_v<decltype(&CLevelLoader::cleanup), void (CLevelLoader::*)()>);
}

} // namespace
} // namespace nocturne::core
