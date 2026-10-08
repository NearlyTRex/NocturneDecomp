#include "engine/special/externalrenderer.h"

#include <gtest/gtest.h>

#include <type_traits>

namespace nocturne::engine {
namespace {

TEST(CExternalRenderer, IsConcrete) {
    static_assert(!std::is_abstract_v<CExternalRenderer>);
}

TEST(CExternalRenderer, Constructors) {
    static_assert(std::is_constructible_v<CExternalRenderer>);
}

TEST(CExternalRenderer, PublicInterface) {
    static_assert(std::is_same_v<decltype(&CExternalRenderer::validate),
                                 int (CExternalRenderer::*)(CExternalRenderer *)>);
}

} // namespace
} // namespace nocturne::engine
