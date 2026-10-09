#include "engine/ini/ini.h"

#include <gtest/gtest.h>

#include <type_traits>

namespace nocturne::engine {
namespace {

TEST(CIni, IsConcrete) {
    static_assert(!std::is_abstract_v<CIni>);
}

TEST(CIni, PublicInterface) {
    static_assert(std::is_same_v<decltype(&CIni::getProfileString),
                                 int (CIni::*)(char *, char *, char *, char *, int, char *)>);
    static_assert(std::is_same_v<decltype(&CIni::writeProfileString),
                                 int (CIni::*)(char *, char *, char *, char *)>);
}

} // namespace
} // namespace nocturne::engine
