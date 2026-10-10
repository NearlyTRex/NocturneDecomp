#include "engine/ini/inifile.h"

#include <gtest/gtest.h>

#include <type_traits>

namespace nocturne::engine {
namespace {

TEST(CIniFile, IsConcrete) {
    static_assert(!std::is_abstract_v<CIniFile>);
}

TEST(CIniFile, Constructors) {
    static_assert(std::is_constructible_v<CIniFile, char *, char *>);
}

TEST(CIniFile, PublicInterface) {
    static_assert(std::is_same_v<decltype(&CIniFile::readIniHeader), void (CIniFile::*)(char *)>);
    static_assert(
        std::is_same_v<decltype(&CIniFile::getString), void (CIniFile::*)(char *, char *, int)>);
    static_assert(
        std::is_same_v<decltype(&CIniFile::setString), void (CIniFile::*)(char *, char *)>);
    static_assert(
        std::is_same_v<decltype(&CIniFile::getInteger), void (CIniFile::*)(char *, int *)>);
    static_assert(std::is_same_v<decltype(&CIniFile::setInteger), void (CIniFile::*)(char *, int)>);
    static_assert(
        std::is_same_v<decltype(&CIniFile::getFloat), void (CIniFile::*)(char *, float *)>);
    static_assert(
        std::is_same_v<decltype(&CIniFile::setFloatValue), void (CIniFile::*)(char *, float)>);
}

} // namespace
} // namespace nocturne::engine
