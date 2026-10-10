#include "support/codec/lzwcompress.h"

#include <gtest/gtest.h>

#include <type_traits>

namespace nocturne::support {
namespace {

TEST(CLZWCompress, DerivesFromCCodec) {
    static_assert(std::is_base_of_v<CCodec, CLZWCompress>);
}

TEST(CLZWCompress, HasVirtualDestructor) {
    static_assert(std::has_virtual_destructor_v<CLZWCompress>);
}

TEST(CLZWCompress, IsConcrete) {
    static_assert(!std::is_abstract_v<CLZWCompress>);
}

TEST(CLZWCompress, Constructors) {
    static_assert(std::is_constructible_v<CLZWCompress, int, int>);
}

TEST(CLZWCompress, PublicInterface) {
    static_assert(std::is_same_v<decltype(&CLZWCompress::init), void (CLZWCompress::*)()>);
    static_assert(std::is_same_v<decltype(&CLZWCompress::process),
                                 int (CLZWCompress::*)(std::istream *, int *, std::ostream *)>);
    static_assert(
        std::is_same_v<decltype(&CLZWCompress::finalize), int (CLZWCompress::*)(std::ostream *)>);
}

} // namespace
} // namespace nocturne::support
