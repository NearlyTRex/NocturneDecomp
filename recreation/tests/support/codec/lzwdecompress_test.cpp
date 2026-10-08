#include "support/codec/lzwdecompress.h"

#include <gtest/gtest.h>

#include <type_traits>

namespace nocturne::support {
namespace {

TEST(CLZWDecompress, DerivesFromCCodec) {
    static_assert(std::is_base_of_v<CCodec, CLZWDecompress>);
}

TEST(CLZWDecompress, HasVirtualDestructor) {
    static_assert(std::has_virtual_destructor_v<CLZWDecompress>);
}

TEST(CLZWDecompress, IsConcrete) {
    static_assert(!std::is_abstract_v<CLZWDecompress>);
}

TEST(CLZWDecompress, Constructors) {
    static_assert(std::is_constructible_v<CLZWDecompress, int, int>);
}

TEST(CLZWDecompress, PublicInterface) {
    static_assert(std::is_same_v<decltype(&CLZWDecompress::init), void (CLZWDecompress::*)()>);
    static_assert(std::is_same_v<decltype(&CLZWDecompress::process),
                                 int (CLZWDecompress::*)(std::istream *, int *, std::ostream *)>);
    static_assert(std::is_same_v<decltype(&CLZWDecompress::finalize),
                                 int (CLZWDecompress::*)(std::ostream *)>);
    static_assert(std::is_same_v<decltype(&CLZWDecompress::processBuffer),
                                 int (CLZWDecompress::*)(char *, int *, char *, int *, int)>);
}

} // namespace
} // namespace nocturne::support
