#include "support/newmsg/newmsg.h"

#include <gtest/gtest.h>

#include <type_traits>

namespace nocturne::support {
namespace {

TEST(SupportNewmsgFunctions, PublicInterface) {
    static_assert(std::is_same_v<decltype(&getLocalizedString), char *(*)(char *)>);
    static_assert(std::is_same_v<decltype(&decryptMessage), char *(*)(char *)>);
}

} // namespace
} // namespace nocturne::support
