#include "cockpit/drawsurf/drawsurface.h"

#include <gtest/gtest.h>

#include <type_traits>

namespace nocturne::cockpit {
namespace {

TEST(CDrawSurface, IsConcrete) {
    static_assert(!std::is_abstract_v<CDrawSurface>);
}

TEST(CDrawSurface, PublicInterface) {
    static_assert(
        std::is_same_v<decltype(&CDrawSurface::initFromParent),
                       CDrawSurface *(CDrawSurface::*)(int, int, int, int, CDrawSurface *)>);
    static_assert(
        std::is_same_v<decltype(&CDrawSurface::plotPixel), void (CDrawSurface::*)(int, int)>);
    static_assert(
        std::is_same_v<decltype(&CDrawSurface::drawCircle), void (CDrawSurface::*)(int, int, int)>);
    static_assert(std::is_same_v<decltype(&CDrawSurface::drawCircleFromTopLeft),
                                 void (CDrawSurface::*)(int, int, int)>);
    static_assert(std::is_same_v<decltype(&CDrawSurface::drawCircleFromTopRight),
                                 void (CDrawSurface::*)(int, int, int)>);
    static_assert(std::is_same_v<decltype(&CDrawSurface::drawCircleFromBottomLeft),
                                 void (CDrawSurface::*)(int, int, int)>);
    static_assert(std::is_same_v<decltype(&CDrawSurface::drawCircleFromBottomRight),
                                 void (CDrawSurface::*)(int, int, int)>);
    static_assert(std::is_same_v<decltype(&CDrawSurface::drawClippedLine),
                                 void (CDrawSurface::*)(int, int, int, int)>);
    static_assert(
        std::is_same_v<decltype(&CDrawSurface::drawSurfaceBorder), void (CDrawSurface::*)()>);
    static_assert(
        std::is_same_v<decltype(&CDrawSurface::drawAnimatedFullSurface), void (CDrawSurface::*)()>);
    static_assert(
        std::is_same_v<decltype(&CDrawSurface::fillFullSurface), void (CDrawSurface::*)()>);
    static_assert(std::is_same_v<decltype(&CDrawSurface::drawTextRightAligned),
                                 void (CDrawSurface::*)(char *, int, int)>);
    static_assert(std::is_same_v<decltype(&CDrawSurface::drawTextRightAlignedWrapper),
                                 void (CDrawSurface::*)(int, int, char *)>);
    static_assert(std::is_same_v<decltype(&CDrawSurface::drawTextRightAlignedPrintf),
                                 void (CDrawSurface::*)(int, int, char *, ...)>);
    static_assert(std::is_same_v<decltype(&CDrawSurface::drawTextRightAlignedVariantPrintf),
                                 void (CDrawSurface::*)(int, int, char *, ...)>);
    static_assert(std::is_same_v<decltype(&CDrawSurface::drawTextCenteredWrapper),
                                 void (CDrawSurface::*)(int, int, char *)>);
    static_assert(std::is_same_v<decltype(&CDrawSurface::drawTextCenteredPrintf),
                                 void (CDrawSurface::*)(int, int, char *, ...)>);
    static_assert(std::is_same_v<decltype(&CDrawSurface::drawTextRightAlignedVCenteredPrintf),
                                 void (CDrawSurface::*)(int, int, char *, ...)>);
    static_assert(std::is_same_v<decltype(&CDrawSurface::drawTextCenteredBothPrintf),
                                 void (CDrawSurface::*)(int, int, char *, ...)>);
    static_assert(std::is_same_v<decltype(&CDrawSurface::drawTextCenteredInBoundsWrapper),
                                 void (CDrawSurface::*)(int, int, int, char *)>);
    static_assert(std::is_same_v<decltype(&CDrawSurface::drawTextCenteredInBoundsPrintf),
                                 void (CDrawSurface::*)(int, int, int, char *, ...)>);
    static_assert(std::is_same_v<decltype(&CDrawSurface::drawTextCenteredInAreaPrintf),
                                 void (CDrawSurface::*)(int, int, int, char *, ...)>);
    static_assert(std::is_same_v<decltype(&CDrawSurface::drawTextCenteredInAreaWithWidthPrintf),
                                 void (CDrawSurface::*)(int, int, int, int, char *, ...)>);
    static_assert(std::is_same_v<decltype(&CDrawSurface::drawTextCenteredFullSurface),
                                 void (CDrawSurface::*)(char *)>);
    static_assert(std::is_same_v<decltype(&CDrawSurface::drawTextCenteredFullSurfacePrintf),
                                 void (CDrawSurface::*)(char *, ...)>);
    static_assert(
        std::is_same_v<decltype(&CDrawSurface::getCurrentFontMaxWidth), int (CDrawSurface::*)()>);
}

} // namespace
} // namespace nocturne::cockpit
