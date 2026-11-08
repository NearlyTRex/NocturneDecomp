#include "platform/gl/glframepresenter.h"

#include <gtest/gtest.h>

#include <type_traits>

namespace nocturne::platform::gl {
namespace {

TEST(IGlFramePresenter, IsAbstractWithVirtualDestructor) {
    static_assert(std::is_abstract_v<IGlFramePresenter>);
    static_assert(std::has_virtual_destructor_v<IGlFramePresenter>);
}

TEST(IGlFramePresenter, PublicInterface) {
    static_assert(std::is_same_v<decltype(&IGlFramePresenter::presentScene),
                                 void (IGlFramePresenter::*)(GLuint, int, int)>);
    static_assert(std::is_same_v<decltype(&IGlFramePresenter::getAntialias),
                                 EAntialias (IGlFramePresenter::*)() const>);
    static_assert(std::is_same_v<decltype(&IGlFramePresenter::getSceneReframe),
                                 std::optional<common::SSceneReframe> (IGlFramePresenter::*)(
                                     int, int) const>);
}

} // namespace
} // namespace nocturne::platform::gl
