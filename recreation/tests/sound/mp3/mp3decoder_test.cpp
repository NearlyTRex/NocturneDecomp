#include "sound/mp3/mp3decoder.h"

#include <gtest/gtest.h>

#include <type_traits>

namespace nocturne::sound {
namespace {

TEST(CMP3Decoder, IsConcrete) {
    static_assert(!std::is_abstract_v<CMP3Decoder>);
}

TEST(CMP3Decoder, Constructors) {
    static_assert(std::is_constructible_v<CMP3Decoder>);
}

TEST(CMP3Decoder, PublicInterface) {
    static_assert(std::is_same_v<decltype(&CMP3Decoder::openFile), void (CMP3Decoder::*)(char *)>);
    static_assert(std::is_same_v<decltype(&CMP3Decoder::free), void (CMP3Decoder::*)()>);
    static_assert(
        std::is_same_v<decltype(&CMP3Decoder::read), int (CMP3Decoder::*)(std::int16_t *, int)>);
    static_assert(std::is_same_v<decltype(&CMP3Decoder::seek), int (CMP3Decoder::*)(int)>);
}

} // namespace
} // namespace nocturne::sound
