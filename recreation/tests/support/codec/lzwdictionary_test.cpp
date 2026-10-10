#include "support/codec/lzwdictionary.h"

#include <gtest/gtest.h>

#include <type_traits>

namespace nocturne::support {
namespace {

TEST(CLZWDictionary, IsConcrete) {
    static_assert(!std::is_abstract_v<CLZWDictionary>);
}

TEST(CLZWDictionary, Constructors) {
    static_assert(std::is_constructible_v<CLZWDictionary>);
}

TEST(CLZWDictionary, PublicInterface) {
    static_assert(
        std::is_same_v<decltype(&CLZWDictionary::init), void (CLZWDictionary::*)(int, int)>);
    static_assert(
        std::is_same_v<decltype(&CLZWDictionary::findCode), int (CLZWDictionary::*)(int, int)>);
    static_assert(
        std::is_same_v<decltype(&CLZWDictionary::addNode), int (CLZWDictionary::*)(int, int)>);
    static_assert(std::is_same_v<decltype(&CLZWDictionary::readCodeFromStream),
                                 int (CLZWDictionary::*)(SBitBuffer *, std::istream *, int *)>);
    static_assert(std::is_same_v<decltype(&CLZWDictionary::readCodeFromBuffer),
                                 int (CLZWDictionary::*)(SBitBuffer *, char **, int *)>);
    static_assert(std::is_same_v<decltype(&CLZWDictionary::writeCodeBits),
                                 void (CLZWDictionary::*)(int, SBitBuffer *, std::ostream *)>);
    static_assert(std::is_same_v<decltype(&CLZWDictionary::writeCodeSequence),
                                 int (CLZWDictionary::*)(int, std::ostream *)>);
    static_assert(std::is_same_v<decltype(&CLZWDictionary::decodeCodeToBuffer),
                                 int (CLZWDictionary::*)(int, char **)>);
}

} // namespace
} // namespace nocturne::support
