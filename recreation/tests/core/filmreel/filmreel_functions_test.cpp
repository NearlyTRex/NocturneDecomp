#include "core/filmreel/filmreel_functions.h"

#include <gtest/gtest.h>

#include <type_traits>

namespace nocturne::core {
namespace {

TEST(CoreFilmreelFunctions, PublicInterface) {
    static_assert(std::is_same_v<decltype(&staticInit), void (*)()>);
    static_assert(std::is_same_v<decltype(&factoryFuncFilmReel), CFilmReel *(*)()>);
    static_assert(std::is_same_v<decltype(&factoryFuncFilmProjector), CFilmProjector *(*)()>);
}

} // namespace
} // namespace nocturne::core
