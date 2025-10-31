#pragma once

// Function prototypes for cockpit/drawsurf.cpp
// Generated from Ghidra function signatures

// Original: cockpit_drawsurf.cpp_CDrawSurface_ctor_FUN_00486ea0
// Address: 00486ea0
CDrawSurface * CDrawSurface::ctor(CDrawSurface * this_ptr, int x, int y, int width, int height, CDrawSurface * parent_surface);

// Original: cockpit_drawsurf.cpp_CDrawSurface_init_FUN_00486ee0
// Address: 00486ee0
void CDrawSurface::init(CDrawSurface * this_ptr, int x, int y, int width, int height, CDrawSurface * parent_surface);

// Original: cockpit_drawsurf.cpp_CDrawSurface_setColor_FUN_00487010
// Address: 00487010
void CDrawSurface::setColor(int color_value);

// Original: cockpit_drawsurf.cpp_CDrawSurface_setColorRGB_FUN_00487220
// Address: 00487220
void CDrawSurface::setColorRGB(int red, int green, int blue);

// Original: cockpit_drawsurf.cpp_CDrawSurface_setColorBlack_FUN_00487380
// Address: 00487380
void CDrawSurface::setColorBlack(void);

// Original: cockpit_drawsurf.cpp_CDrawSurface_setColorWhite_FUN_00487390
// Address: 00487390
void CDrawSurface::setColorWhite(void);

// Original: cockpit_drawsurf.cpp_CDrawSurface_setColorRed_FUN_004873b0
// Address: 004873b0
void CDrawSurface::setColorRed(void);

// Original: cockpit_drawsurf.cpp_CDrawSurface_setColorGreen_FUN_004873d0
// Address: 004873d0
void CDrawSurface::setColorGreen(void);

// Original: cockpit_drawsurf.cpp_CDrawSurface_setColorBlue_FUN_004873f0
// Address: 004873f0
void CDrawSurface::setColorBlue(void);

// Original: cockpit_drawsurf.cpp_CDrawSurface_setColorYellow_FUN_00487410
// Address: 00487410
void CDrawSurface::setColorYellow(void);

// Original: cockpit_drawsurf.cpp_CDrawSurface_setColorMagenta_FUN_00487430
// Address: 00487430
void CDrawSurface::setColorMagenta(void);

// Original: cockpit_drawsurf.cpp_CDrawSurface_setColorCyan_FUN_00487450
// Address: 00487450
void CDrawSurface::setColorCyan(void);

// Original: cockpit_drawsurf.cpp_CDrawSurface_setColorDarkGray_FUN_00487470
// Address: 00487470
void CDrawSurface::setColorDarkGray(void);

// Original: cockpit_drawsurf.cpp_CDrawSurface_setColorGray_FUN_00487480
// Address: 00487480
void CDrawSurface::setColorGray(void);

// Original: cockpit_drawsurf.cpp_CDrawSurface_setColorLightGray_FUN_004874a0
// Address: 004874a0
void CDrawSurface::setColorLightGray(void);

// Original: cockpit_drawsurf.cpp_setCurrentFont_FUN_004874c0
// Address: 004874c0
void setCurrentFont(CBitFont * font_ptr);

// Original: cockpit_drawsurf.cpp_CDrawSurface_plotPixel_FUN_004874d0
// Address: 004874d0
void CDrawSurface::plotPixel(CDrawSurface * this_ptr, int x, int y);

// Original: cockpit_drawsurf.cpp_CDrawSurface_drawHorizontalLineWithEffect_FUN_00487630
// Address: 00487630
void CDrawSurface::drawHorizontalLineWithEffect(int start_x, int end_x, int y);

// Original: cockpit_drawsurf.cpp_CDrawSurface_drawCircle_FUN_00487730
// Address: 00487730
void CDrawSurface::drawCircle(CDrawSurface * this_ptr, int center_x, int center_y, int radius);

// Original: cockpit_drawsurf.cpp_CDrawSurface_drawCircleFromTopLeft_FUN_00487820
// Address: 00487820
void CDrawSurface::drawCircleFromTopLeft(CDrawSurface * this_ptr, int x, int y, int radius);

// Original: cockpit_drawsurf.cpp_CDrawSurface_drawCircleFromTopRight_FUN_00487850
// Address: 00487850
void CDrawSurface::drawCircleFromTopRight(CDrawSurface * this_ptr, int top_right_x, int top_right_y, int radius);

// Original: cockpit_drawsurf.cpp_CDrawSurface_drawCircleFromBottomLeft_FUN_00487880
// Address: 00487880
void CDrawSurface::drawCircleFromBottomLeft(CDrawSurface * this_ptr, int bottom_left_x, int bottom_left_y, int radius);

// Original: cockpit_drawsurf.cpp_CDrawSurface_drawCircleFromBottomRight_FUN_004878b0
// Address: 004878b0
void CDrawSurface::drawCircleFromBottomRight(CDrawSurface * this_ptr, int bottom_right_x, int bottom_right_y, int radius);

// Original: cockpit_drawsurf.cpp_CDrawSurface_drawRectangleOutline_FUN_004878e0
// Address: 004878e0
void CDrawSurface::drawRectangleOutline(CDrawSurface * this_ptr, int x, int y, int width, int height);

// Original: cockpit_drawsurf.cpp_CDrawSurface_drawClippedLine_FUN_00487990
// Address: 00487990
void CDrawSurface::drawClippedLine(CDrawSurface * this_ptr, int x1, int y1, int x2, int y2);

// Original: cockpit_drawsurf.cpp_CDrawSurface_drawClippedDashedLine_FUN_00487a30
// Address: 00487a30
void CDrawSurface::drawClippedDashedLine(CDrawSurface * this_ptr, int x1, int y1, int x2, int y2);

// Original: cockpit_drawsurf.cpp_CDrawSurface_drawLineBresenham_FUN_00487ad0
// Address: 00487ad0
void CDrawSurface::drawLineBresenham(CDrawSurface * this_ptr, int x1, int y1, int x2, int y2);

// Original: cockpit_drawsurf.cpp_CDrawSurface_drawDashedLine_FUN_00487bc0
// Address: 00487bc0
void CDrawSurface::drawDashedLine(CDrawSurface * this_ptr, int x1, int y1, int x2, int y2);

// Original: cockpit_drawsurf.cpp_computeCohenSutherlandOutcode_FUN_00487de0
// Address: 00487de0
char computeCohenSutherlandOutcode(int point_x, int point_y, int clip_left, int clip_top, int clip_right, int clip_bottom);

// Original: cockpit_drawsurf.cpp_CDrawSurface_clipLine_FUN_00487e20
// Address: 00487e20
int CDrawSurface::clipLine(CDrawSurface * this_ptr, int * x1, int * y1, int * x2, int * y2, int clip_left, int clip_top, int clip_right, int clip_bottom);

// Original: cockpit_drawsurf.cpp_CDrawSurface_drawHorizontalLine_FUN_00488110
// Address: 00488110
void CDrawSurface::drawHorizontalLine(CDrawSurface * this_ptr, int start_x, int y, int end_x);

// Original: cockpit_drawsurf.cpp_CDrawSurface_drawVerticalLine_FUN_00488230
// Address: 00488230
void CDrawSurface::drawVerticalLine(CDrawSurface * this_ptr, int x, int start_y, int end_y);

// Original: cockpit_drawsurf.cpp_CDrawSurface_drawAntiAliasedLine_FUN_00488410
// Address: 00488410
void CDrawSurface::drawAntiAliasedLine(CDrawSurface * this_ptr, int x1, int y1, int x2, int y2);

// Original: cockpit_drawsurf.cpp_CDrawSurface_drawRectangleOutline_FUN_004884d0
// Address: 004884d0
void CDrawSurface::drawRectangleOutline(CDrawSurface * this_ptr, int x, int y, int width, int height);

// Original: cockpit_drawsurf.cpp_CDrawSurface_drawSurfaceBorder_FUN_00488530
// Address: 00488530
void CDrawSurface::drawSurfaceBorder(CDrawSurface * this_ptr);

// Original: cockpit_drawsurf.cpp_CDrawSurface_drawCenteredRectangle_FUN_00488550
// Address: 00488550
void CDrawSurface::drawCenteredRectangle(CDrawSurface * this_ptr, int center_x, int center_y, int width, int height);

// Original: cockpit_drawsurf.cpp_CDrawSurface_drawRectangleBetweenPoints_FUN_004885d0
// Address: 004885d0
void CDrawSurface::drawRectangleBetweenPoints(CDrawSurface * this_ptr, int x1, int y1, int x2, int y2, int border_width, int border_height);

// Original: cockpit_drawsurf.cpp_CDrawSurface_drawSolidRectangle_FUN_00488630
// Address: 00488630
void CDrawSurface::drawSolidRectangle(CDrawSurface * this_ptr, int x1, int y1, int x2, int y2);

// Original: cockpit_drawsurf.cpp_CDrawSurface_drawFullSurface_FUN_004886a0
// Address: 004886a0
void CDrawSurface::drawFullSurface(CDrawSurface * this_ptr);

// Original: cockpit_drawsurf.cpp_CDrawSurface_drawCenteredRectangle_FUN_004886c0
// Address: 004886c0
void CDrawSurface::drawCenteredRectangle(CDrawSurface * this_ptr, int center_x, int center_y, int width, int height);

// Original: cockpit_drawsurf.cpp_CDrawSurface_drawInsetRectangle_FUN_00488740
// Address: 00488740
void CDrawSurface::drawInsetRectangle(CDrawSurface * this_ptr, int x1, int y1, int x2, int y2, int inset_x, int inset_y);

// Original: cockpit_drawsurf.cpp_CDrawSurface_drawAnimatedDashedLine_FUN_004887a0
// Address: 004887a0
void CDrawSurface::drawAnimatedDashedLine(CDrawSurface * this_ptr, int x1, int y1, int x2, int y2);

// Original: cockpit_drawsurf.cpp_CDrawSurface_drawAnimatedFullSurface_FUN_00488990
// Address: 00488990
void CDrawSurface::drawAnimatedFullSurface(CDrawSurface * this_ptr);

// Original: cockpit_drawsurf.cpp_CDrawSurface_drawAnimatedCenteredRectangle_FUN_004889b0
// Address: 004889b0
void CDrawSurface::drawAnimatedCenteredRectangle(CDrawSurface * this_ptr, int center_x, int center_y, int width, int height);

// Original: cockpit_drawsurf.cpp_CDrawSurface_drawAnimatedInsetRectangle_FUN_00488a30
// Address: 00488a30
void CDrawSurface::drawAnimatedInsetRectangle(CDrawSurface * this_ptr, int x1, int y1, int x2, int y2, int inset_x, int inset_y);

// Original: cockpit_drawsurf.cpp_getDashLength_FUN_00488a90
// Address: 00488a90
int getDashLength(void);

// Original: cockpit_drawsurf.cpp_getDashAnimationThreshold_FUN_00488aa0
// Address: 00488aa0
float getDashAnimationThreshold(void);

// Original: cockpit_drawsurf.cpp_setDashLength_FUN_00488ab0
// Address: 00488ab0
void setDashLength(int length);

// Original: cockpit_drawsurf.cpp_setDashAnimationThreshold_FUN_00488ac0
// Address: 00488ac0
void setDashAnimationThreshold(float threshold);

// Original: cockpit_drawsurf.cpp_CDrawSurface_fillRectangle_FUN_00488ad0
// Address: 00488ad0
void CDrawSurface::fillRectangle(CDrawSurface * this_ptr, int x1, int y1, int x2, int y2);

// Original: cockpit_drawsurf.cpp_CDrawSurface_fillFullSurface_FUN_00488c70
// Address: 00488c70
void CDrawSurface::fillFullSurface(CDrawSurface * this_ptr);

// Original: cockpit_drawsurf.cpp_CDrawSurface_renderPackedBitmap_FUN_00488c90
// Address: 00488c90
void CDrawSurface::renderPackedBitmap(CDrawSurface * this_ptr, int x_offset, int y_offset, CPackedBitmap * bitmap_ptr);

// Original: cockpit_drawsurf.cpp_CDrawSurface_fillPoly_FUN_00488cd0
// Address: 00488cd0
void CDrawSurface::fillPoly(CDrawSurface * this_ptr, int vertex_count, SPoint2i * vertices);

// Original: cockpit_drawsurf.cpp_CDrawSurface_drawClosedPolyline_FUN_00489090
// Address: 00489090
void CDrawSurface::drawClosedPolyline(CDrawSurface * this_ptr, int point_count, CVector2i * points);

// Original: cockpit_drawsurf.cpp_CDrawSurface_drawTextWithAlignment_FUN_00489120
// Address: 00489120
void CDrawSurface::drawTextWithAlignment(CDrawSurface * this_ptr, int x, int y, int width, int height, char * text, int alignment_mode);

// Original: cockpit_drawsurf.cpp_CDrawSurface_drawTextRightAligned_FUN_004893f0
// Address: 004893f0
void CDrawSurface::drawTextRightAligned(CDrawSurface * this_ptr, int x, int y, char * text);

// Original: cockpit_drawsurf.cpp_CDrawSurface_drawTextRightAlignedWrapper_FUN_00489420
// Address: 00489420
void CDrawSurface::drawTextRightAlignedWrapper(CDrawSurface * this_ptr, int x, int y, char * text);

// Original: cockpit_drawsurf.cpp_CDrawSurface_drawTextRightAlignedPrintf_FUN_00489450
// Address: 00489450
void CDrawSurface::drawTextRightAlignedPrintf(CDrawSurface * this_ptr, int x, int y, char * format, ...);

// Original: cockpit_drawsurf.cpp_CDrawSurface_drawTextRightAlignedVariant_FUN_004894c0
// Address: 004894c0
void CDrawSurface::drawTextRightAlignedVariant(CDrawSurface * this_ptr, int x, int y, int height, char * text);

// Original: cockpit_drawsurf.cpp_CDrawSurface_drawTextRightAlignedVariantWrapper_FUN_004894f0
// Address: 004894f0
void CDrawSurface::drawTextRightAlignedVariantWrapper(CDrawSurface * this_ptr, int x, int y, int height, char * text);

// Original: cockpit_drawsurf.cpp_CDrawSurface_drawTextRightAlignedVariantPrintf_FUN_00489520
// Address: 00489520
void CDrawSurface::drawTextRightAlignedVariantPrintf(CDrawSurface * this_ptr, int x, int y, int height, char * format, ...);

// Original: cockpit_drawsurf.cpp_CDrawSurface_drawTextCentered_FUN_00489590
// Address: 00489590
void CDrawSurface::drawTextCentered(CDrawSurface * this_ptr, int x, int y, int height, char * text);

// Original: cockpit_drawsurf.cpp_CDrawSurface_drawTextCenteredWrapper_FUN_004895c0
// Address: 004895c0
void CDrawSurface::drawTextCenteredWrapper(CDrawSurface * this_ptr, int x, int y, int height, char * text);

// Original: cockpit_drawsurf.cpp_CDrawSurface_drawTextCenteredPrintf_FUN_004895f0
// Address: 004895f0
void CDrawSurface::drawTextCenteredPrintf(CDrawSurface * this_ptr, int x, int y, int height, char * format, ...);

// Original: cockpit_drawsurf.cpp_CDrawSurface_drawTextRightAlignedVCentered_FUN_00489660
// Address: 00489660
void CDrawSurface::drawTextRightAlignedVCentered(CDrawSurface * this_ptr, int x, int y, int height, char * text);

// Original: cockpit_drawsurf.cpp_CDrawSurface_drawTextRightAlignedVCenteredWrapper_FUN_00489690
// Address: 00489690
void CDrawSurface::drawTextRightAlignedVCenteredWrapper(CDrawSurface * this_ptr, int x, int y, int height, char * text);

// Original: cockpit_drawsurf.cpp_CDrawSurface_drawTextRightAlignedVCenteredPrintf_FUN_004896c0
// Address: 004896c0
void CDrawSurface::drawTextRightAlignedVCenteredPrintf(CDrawSurface * this_ptr, int x, int y, int height, char * format, ...);

// Original: cockpit_drawsurf.cpp_CDrawSurface_drawTextCenteredBoth_FUN_00489730
// Address: 00489730
void CDrawSurface::drawTextCenteredBoth(CDrawSurface * this_ptr, int x, int y, int height, char * text);

// Original: cockpit_drawsurf.cpp_CDrawSurface_drawTextCenteredBothWrapper_FUN_00489760
// Address: 00489760
void CDrawSurface::drawTextCenteredBothWrapper(CDrawSurface * this_ptr, int x, int y, int height, char * text);

// Original: cockpit_drawsurf.cpp_CDrawSurface_drawTextCenteredBothPrintf_FUN_00489790
// Address: 00489790
void CDrawSurface::drawTextCenteredBothPrintf(CDrawSurface * this_ptr, int x, int y, int height, char * format, ...);

// Original: cockpit_drawsurf.cpp_CDrawSurface_drawTextCenteredInBounds_FUN_00489800
// Address: 00489800
void CDrawSurface::drawTextCenteredInBounds(CDrawSurface * this_ptr, int x, int y, int width, int height, char * text);

// Original: cockpit_drawsurf.cpp_CDrawSurface_drawTextCenteredInBoundsWrapper_FUN_00489830
// Address: 00489830
void CDrawSurface::drawTextCenteredInBoundsWrapper(CDrawSurface * this_ptr, int x, int y, int width, int height, char * text);

// Original: cockpit_drawsurf.cpp_CDrawSurface_drawTextCenteredInBoundsPrintf_FUN_00489860
// Address: 00489860
void CDrawSurface::drawTextCenteredInBoundsPrintf(CDrawSurface * this_ptr, int x, int y, int width, int height, char * format, ...);

// Original: cockpit_drawsurf.cpp_CDrawSurface_drawTextCenteredInArea_FUN_004898e0
// Address: 004898e0
void CDrawSurface::drawTextCenteredInArea(CDrawSurface * this_ptr, int x, int y, int height, char * text);

// Original: cockpit_drawsurf.cpp_CDrawSurface_drawTextCenteredInAreaWrapper_FUN_00489910
// Address: 00489910
void CDrawSurface::drawTextCenteredInAreaWrapper(CDrawSurface * this_ptr, int x, int y, int height, char * text);

// Original: cockpit_drawsurf.cpp_CDrawSurface_drawTextCenteredInAreaPrintf_FUN_00489940
// Address: 00489940
void CDrawSurface::drawTextCenteredInAreaPrintf(CDrawSurface * this_ptr, int x, int y, int height, char * format, ...);

// Original: cockpit_drawsurf.cpp_CDrawSurface_drawTextCenteredInAreaWithWidth_FUN_004899c0
// Address: 004899c0
void CDrawSurface::drawTextCenteredInAreaWithWidth(CDrawSurface * this_ptr, int x, int y, int width, int height, char * text);

// Original: cockpit_drawsurf.cpp_CDrawSurface_drawTextCenteredInAreaWithWidthWrapper_FUN_00489a00
// Address: 00489a00
void CDrawSurface::drawTextCenteredInAreaWithWidthWrapper(CDrawSurface * this_ptr, int x, int y, int width, int height, char * text);

// Original: cockpit_drawsurf.cpp_CDrawSurface_drawTextCenteredInAreaWithWidthPrintf_FUN_00489a30
// Address: 00489a30
void CDrawSurface::drawTextCenteredInAreaWithWidthPrintf(CDrawSurface * this_ptr, int x, int y, int width, int height, char * format, ...);

// Original: cockpit_drawsurf.cpp_CDrawSurface_drawTextCenteredFullWidth_FUN_00489ab0
// Address: 00489ab0
void CDrawSurface::drawTextCenteredFullWidth(CDrawSurface * this_ptr, int y, int height, char * text);

// Original: cockpit_drawsurf.cpp_CDrawSurface_drawTextCenteredFullWidthWrapper_FUN_00489ad0
// Address: 00489ad0
void CDrawSurface::drawTextCenteredFullWidthWrapper(CDrawSurface * this_ptr, int y, int height, char * text);

// Original: cockpit_drawsurf.cpp_CDrawSurface_drawTextCenteredFullWidthPrintf_FUN_00489af0
// Address: 00489af0
void CDrawSurface::drawTextCenteredFullWidthPrintf(CDrawSurface * this_ptr, int y, int height, char * format, ...);

// Original: cockpit_drawsurf.cpp_CDrawSurface_drawTextCenteredFullHeight_FUN_00489b60
// Address: 00489b60
void CDrawSurface::drawTextCenteredFullHeight(CDrawSurface * this_ptr, int x, int y, char * text);

// Original: cockpit_drawsurf.cpp_CDrawSurface_drawTextCenteredFullHeightWrapper_FUN_00489b90
// Address: 00489b90
void CDrawSurface::drawTextCenteredFullHeightWrapper(CDrawSurface * this_ptr, int x, int y, char * text);

// Original: cockpit_drawsurf.cpp_CDrawSurface_drawTextCenteredFullHeightPrintf_FUN_00489bb0
// Address: 00489bb0
void CDrawSurface::drawTextCenteredFullHeightPrintf(CDrawSurface * this_ptr, int x, int y, char * format, ...);

// Original: cockpit_drawsurf.cpp_CDrawSurface_drawTextCenteredFullSurface_FUN_00489c20
// Address: 00489c20
void CDrawSurface::drawTextCenteredFullSurface(CDrawSurface * this_ptr, char * text);

// Original: cockpit_drawsurf.cpp_CDrawSurface_drawTextCenteredFullSurfacePrintf_FUN_00489c40
// Address: 00489c40
void CDrawSurface::drawTextCenteredFullSurfacePrintf(CDrawSurface * this_ptr, char * format, ...);

// Original: cockpit_drawsurf.cpp_getCurrentCharWidth_FUN_00489ca0
// Address: 00489ca0
int getCurrentCharWidth(char character);

// Original: cockpit_drawsurf.cpp_getCurrentFontMaxWidth_FUN_00489ce0
// Address: 00489ce0
int getCurrentFontMaxWidth(void);

// Original: cockpit_drawsurf.cpp_getCurrentTextWidth_FUN_00489d00
// Address: 00489d00
int getCurrentTextWidth(char * text);

// Original: cockpit_drawsurf.cpp_testDrawingSurface_FUN_00489d30
// Address: 00489d30
void testDrawingSurface(CBitFont * test_font);

// Original: cockpit_drawsurf.cpp_getFontMaxWidth_FUN_0048a6a0
// Address: 0048a6a0
int getFontMaxWidth(CBitFont * font_ptr);
