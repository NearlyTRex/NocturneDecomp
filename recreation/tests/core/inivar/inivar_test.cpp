#include "core/inivar/inivar.h"

#include <gtest/gtest.h>

#include <type_traits>

namespace nocturne::core {
namespace {

TEST(CoreInivarFunctions, PublicInterface) {
    static_assert(std::is_same_v<decltype(&readIniData), void (*)()>);
    static_assert(std::is_same_v<decltype(&writeIniData), void (*)()>);
}

} // namespace
} // namespace nocturne::core
