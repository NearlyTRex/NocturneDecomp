#pragma once

#include "cockpit/fwd.h"

namespace nocturne::cockpit {

class CDrawSurface {
public:
    CDrawSurface *initFromParent(int x, int y, int width, int height, CDrawSurface *parent_surface);
    void plotPixel(int x, int y);
    void drawCircle(int center_x, int center_y, int radius);
    void drawCircleFromTopLeft(int x, int y, int radius);
    void drawCircleFromTopRight(int top_right_x, int top_right_y, int radius);
    void drawCircleFromBottomLeft(int bottom_left_x, int bottom_left_y, int radius);
    void drawCircleFromBottomRight(int bottom_right_x, int bottom_right_y, int radius);
    void drawClippedLine(int x1, int y1, int x2, int y2);
    void drawSurfaceBorder();
    void drawAnimatedFullSurface();
    void fillFullSurface();
    void drawTextRightAligned(char *text, int x, int y);
    void drawTextRightAlignedWrapper(int x, int y, char *text);
    void drawTextRightAlignedPrintf(int x, int y, char *format, ...);
    void drawTextRightAlignedVariantPrintf(int x, int y, char *format, ...);
    void drawTextCenteredWrapper(int x, int y, char *text);
    void drawTextCenteredPrintf(int x, int y, char *format, ...);
    void drawTextRightAlignedVCenteredPrintf(int x, int y, char *format, ...);
    void drawTextCenteredBothPrintf(int x, int y, char *format, ...);
    void drawTextCenteredInBoundsWrapper(int x, int y, int width, char *text);
    void drawTextCenteredInBoundsPrintf(int x, int y, int width, char *format, ...);
    void drawTextCenteredInAreaPrintf(int x, int y, int height, char *format, ...);
    void drawTextCenteredInAreaWithWidthPrintf(int x, int width, int y, int height, char *format,
                                               ...);
    void drawTextCenteredFullSurface(char *text);
    void drawTextCenteredFullSurfacePrintf(char *format, ...);
    int getCurrentFontMaxWidth();
};

} // namespace nocturne::cockpit
