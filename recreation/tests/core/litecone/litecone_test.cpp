#include "core/litecone/litecone.h"

#include <gtest/gtest.h>

#include <type_traits>

namespace nocturne::core {
namespace {

TEST(CoreLiteconeFunctions, PublicInterface) {
    static_assert(std::is_same_v<decltype(&staticInit), void (*)()>);
    static_assert(std::is_same_v<decltype(&factoryFuncLightCone), CLightCone *(*)()>);
}

} // namespace
} // namespace nocturne::core
