#include "engine/console/console.h"

#include <gtest/gtest.h>

#include <type_traits>

namespace nocturne::engine {
namespace {

TEST(CConsole, IsConcrete) {
    static_assert(!std::is_abstract_v<CConsole>);
}

TEST(CConsole, Constructors) {
    static_assert(std::is_constructible_v<CConsole, int, int, int, int>);
}

TEST(CConsole, PublicInterface) {
    static_assert(std::is_same_v<decltype(&CConsole::printf), void (CConsole::*)(char *, ...)>);
    static_assert(std::is_same_v<decltype(&CConsole::reset), void (CConsole::*)()>);
    static_assert(std::is_same_v<decltype(&CConsole::render), void (CConsole::*)()>);
}

} // namespace
} // namespace nocturne::engine
