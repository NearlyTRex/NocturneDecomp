#include "engine/pod/podfile.h"

#include <gtest/gtest.h>

#include <type_traits>

namespace nocturne::engine {
namespace {

TEST(CPodFile, IsConcrete) {
    static_assert(!std::is_abstract_v<CPodFile>);
}

TEST(CPodFile, Constructors) {
    static_assert(std::is_constructible_v<CPodFile>);
}

TEST(CPodFile, PublicInterface) {
    static_assert(std::is_same_v<decltype(&CPodFile::mountFromFile), int (CPodFile::*)(char *)>);
    static_assert(std::is_same_v<decltype(&CPodFile::cleanup), void (CPodFile::*)()>);
    static_assert(std::is_same_v<decltype(&CPodFile::findFileIndex), int (CPodFile::*)(char *)>);
    static_assert(std::is_same_v<decltype(&CPodFile::populateFileInfo),
                                 void (CPodFile::*)(int, SFoundFileInfo *)>);
    static_assert(std::is_same_v<decltype(&CPodFile::verifyChecksum), int (CPodFile::*)()>);
}

} // namespace
} // namespace nocturne::engine
