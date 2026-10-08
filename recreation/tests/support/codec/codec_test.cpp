#include "support/codec/codec.h"

#include <gtest/gtest.h>

#include <type_traits>

namespace nocturne::support {
namespace {

TEST(CCodec, HasVirtualDestructor) {
    static_assert(std::has_virtual_destructor_v<CCodec>);
}

TEST(CCodec, IsConcrete) {
    static_assert(!std::is_abstract_v<CCodec>);
}

TEST(CCodec, Constructors) {
    static_assert(std::is_constructible_v<CCodec>);
}

TEST(CCodec, PublicInterface) {
    static_assert(std::is_same_v<decltype(&CCodec::init), void (CCodec::*)()>);
    static_assert(std::is_same_v<decltype(&CCodec::process),
                                 int (CCodec::*)(std::istream *, int *, std::ostream *)>);
    static_assert(std::is_same_v<decltype(&CCodec::finalize), int (CCodec::*)(std::ostream *)>);
    static_assert(std::is_same_v<decltype(&CCodec::processToBuffer),
                                 int (CCodec::*)(std::istream *, int *, char *, int *, int)>);
    static_assert(std::is_same_v<decltype(&CCodec::processFromBuffer),
                                 int (CCodec::*)(char *, int *, std::ostream *)>);
    static_assert(std::is_same_v<decltype(&CCodec::processBuffer),
                                 int (CCodec::*)(char *, int *, char *, int *, int)>);
    static_assert(std::is_same_v<decltype(&CCodec::processFiles), int (CCodec::*)(char *, char *)>);
    static_assert(
        std::is_same_v<decltype(&CCodec::finalizeBuffer), int (CCodec::*)(char *, int *)>);
}

} // namespace
} // namespace nocturne::support
