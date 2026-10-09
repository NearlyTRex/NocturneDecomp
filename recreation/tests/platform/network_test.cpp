#include "platform/network.h"

#include <gtest/gtest.h>

#include <type_traits>

namespace nocturne::platform {
namespace {

TEST(INetwork, IsAbstractWithVirtualDestructor) {
    static_assert(std::is_abstract_v<INetwork>);
    static_assert(std::has_virtual_destructor_v<INetwork>);
}

TEST(INetwork, PublicInterface) {
    static_assert(std::is_same_v<decltype(&INetwork::createUDPSocket),
                                 std::unique_ptr<IUdpSocket> (INetwork::*)()>);
}

} // namespace
} // namespace nocturne::platform
