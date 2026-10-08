#include "core/gasmask/gasmask_functions.h"

#include <gtest/gtest.h>

#include <type_traits>

namespace nocturne::core {
namespace {

TEST(CoreGasmaskFunctions, PublicInterface) {
    static_assert(std::is_same_v<decltype(&staticInit), void (*)()>);
    static_assert(std::is_same_v<decltype(&factoryFuncGasMask), CGasMask *(*)()>);
}

} // namespace
} // namespace nocturne::core
