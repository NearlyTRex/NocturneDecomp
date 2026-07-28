#pragma once

// Function prototypes for cockpit/drawsurf.cpp
// Generated from Ghidra function signatures

// Original: cockpit_drawsurf.cpp_CDrawSurface_initFromParent_FUN_0045b480
// Address: 0045b480
CDrawSurface * __cdecl CDrawSurface::initFromParent(CDrawSurface *this_ptr,int x,int y,int width,int height,CDrawSurface *parent_surface);

// Original: cockpit_drawsurf.cpp_CDrawSurface_init_FUN_0045b4c0
// Address: 0045b4c0
void __cdecl CDrawSurface::init(CDrawSurface *this_ptr,int x,int y,int width,int height,CDrawSurface *parent_surface);

// Original: cockpit_drawsurf.cpp_CDrawSurface_setColor_FUN_0045b5f0
// Address: 0045b5f0
void __cdecl CDrawSurface::setColor(int color_value);

// Original: cockpit_drawsurf.cpp_CDrawSurface_setColorRGB_FUN_0045b800
// Address: 0045b800
void __cdecl CDrawSurface::setColorRGB(int red,int green,int blue);

// Original: cockpit_drawsurf.cpp_setCurrentFont_FUN_0045baa0
// Address: 0045baa0
void __cdecl setCurrentFont(CBitFont *font_ptr);

// Original: cockpit_drawsurf.cpp_CDrawSurface_plotPixel_FUN_0045bab0
// Address: 0045bab0
void __cdecl CDrawSurface::plotPixel(CDrawSurface *this_ptr,int x,int y);

// Original: cockpit_drawsurf.cpp_CDrawSurface_drawHorizontalLineWithEffect_FUN_0045bc20
// Address: 0045bc20
void __cdecl CDrawSurface::drawHorizontalLineWithEffect(int start_x,int end_x,int y);

// Original: cockpit_drawsurf.cpp_CDrawSurface_drawCircle_FUN_0045bd50
// Address: 0045bd50
void __cdecl CDrawSurface::drawCircle(CDrawSurface *this_ptr,int center_x,int center_y,int radius);

// Original: cockpit_drawsurf.cpp_CDrawSurface_drawCircleFromTopLeft_FUN_0045be40
// Address: 0045be40
void __cdecl CDrawSurface::drawCircleFromTopLeft(CDrawSurface *this_ptr,int x,int y,int radius);

// Original: cockpit_drawsurf.cpp_CDrawSurface_drawCircleFromTopRight_FUN_0045be70
// Address: 0045be70
void __cdecl CDrawSurface::drawCircleFromTopRight(CDrawSurface *this_ptr,int top_right_x,int top_right_y,int radius);

// Original: cockpit_drawsurf.cpp_CDrawSurface_drawCircleFromBottomLeft_FUN_0045bea0
// Address: 0045bea0
void __cdecl CDrawSurface::drawCircleFromBottomLeft(CDrawSurface *this_ptr,int bottom_left_x,int bottom_left_y,int radius);

// Original: cockpit_drawsurf.cpp_CDrawSurface_drawCircleFromBottomRight_FUN_0045bed0
// Address: 0045bed0
void __cdecl CDrawSurface::drawCircleFromBottomRight(CDrawSurface *this_ptr,int bottom_right_x,int bottom_right_y,int radius);

// Original: cockpit_drawsurf.cpp_CDrawSurface_drawRectangleCornerPoints_FUN_0045bf00
// Address: 0045bf00
void __cdecl CDrawSurface::drawRectangleCornerPoints(CDrawSurface *this_ptr,int x,int y,int width,int height);

// Original: cockpit_drawsurf.cpp_CDrawSurface_drawClippedLine_FUN_0045bfb0
// Address: 0045bfb0
void CDrawSurface::drawClippedLine(CDrawSurface *param_1,int param_2,int param_3,int param_4,int param_5);

// Original: cockpit_drawsurf.cpp_FUN_0045c050
// Address: 0045c050
void FUN_0045c050(CDrawSurface *param_1,int param_2,int param_3,int param_4,int param_5);

// Original: cockpit_drawsurf.cpp_CDrawSurface_drawLineBresenham_FUN_0045c0f0
// Address: 0045c0f0
void __cdecl CDrawSurface::drawLineBresenham(CDrawSurface *this_ptr,int x1,int y1,int x2,int y2);

// Original: cockpit_drawsurf.cpp_CDrawSurface_drawDashedLine_FUN_0045c1e0
// Address: 0045c1e0
void __cdecl CDrawSurface::drawDashedLine(CDrawSurface *this_ptr,int x1,int y1,int x2,int y2);

// Original: cockpit_drawsurf.cpp_FUN_0045c400
// Address: 0045c400
byte FUN_0045c400(void);

// Original: cockpit_drawsurf.cpp_CDrawSurface_clipLine_FUN_0045c440
// Address: 0045c440
int __cdecl CDrawSurface::clipLine(CDrawSurface *this_ptr,int *x1,int *y1,int *x2,int *y2,int clip_left,int clip_top,int clip_right,int clip_bottom);

// Original: cockpit_drawsurf.cpp_CDrawSurface_drawHorizontalLine_FUN_0045c730
// Address: 0045c730
void __cdecl CDrawSurface::drawHorizontalLine(CDrawSurface *this_ptr,int start_x,int y,int end_x);

// Original: cockpit_drawsurf.cpp_CDrawSurface_drawVerticalLine_FUN_0045c850
// Address: 0045c850
void __cdecl CDrawSurface::drawVerticalLine(CDrawSurface *this_ptr,int x,int start_y,int end_y);

// Original: cockpit_drawsurf.cpp_CDrawSurface_drawAntiAliasedLine_FUN_0045ca50
// Address: 0045ca50
void CDrawSurface::drawAntiAliasedLine(int param_1,int param_2,int param_3,int param_4,int param_5);

// Original: cockpit_drawsurf.cpp_CDrawSurface_drawRectangleOutline_FUN_0045cb10
// Address: 0045cb10
void __cdecl CDrawSurface::drawRectangleOutline(CDrawSurface *this_ptr,int x,int y,int width,int height);

// Original: cockpit_drawsurf.cpp_CDrawSurface_drawSurfaceBorder_FUN_0045cb70
// Address: 0045cb70
void __cdecl CDrawSurface::drawSurfaceBorder(CDrawSurface *this_ptr);

// Original: cockpit_drawsurf.cpp_FUN_0045cb90
// Address: 0045cb90
void FUN_0045cb90(CDrawSurface *param_1,int param_2,int param_3,uint param_4,uint param_5);

// Original: cockpit_drawsurf.cpp_FUN_0045cc10
// Address: 0045cc10
void FUN_0045cc10(CDrawSurface *param_1,int param_2,int param_3,int param_4,int param_5,int param_6,int param_7);

// Original: cockpit_drawsurf.cpp_CDrawSurface_drawSolidRectangle_FUN_0045cc70
// Address: 0045cc70
void __cdecl CDrawSurface::drawSolidRectangle(CDrawSurface *this_ptr,int x1,int y1,int x2,int y2);

// Original: cockpit_drawsurf.cpp_FUN_0045cce0
// Address: 0045cce0
void FUN_0045cce0(void);

// Original: cockpit_drawsurf.cpp_FUN_0045cd00
// Address: 0045cd00
void FUN_0045cd00(CDrawSurface *param_1,int param_2,int param_3,uint param_4,uint param_5);

// Original: cockpit_drawsurf.cpp_FUN_0045cd80
// Address: 0045cd80
void FUN_0045cd80(CDrawSurface *param_1,int param_2,int param_3,int param_4,int param_5,int param_6,int param_7);

// Original: cockpit_drawsurf.cpp_CDrawSurface_drawAnimatedDashedLine_FUN_0045cde0
// Address: 0045cde0
void __cdecl CDrawSurface::drawAnimatedDashedLine(CDrawSurface *this_ptr,int x1,int y1,int x2,int y2);

// Original: cockpit_drawsurf.cpp_CDrawSurface_drawAnimatedFullSurface_FUN_0045cfd0
// Address: 0045cfd0
void __cdecl CDrawSurface::drawAnimatedFullSurface(CDrawSurface *this_ptr);

// Original: cockpit_drawsurf.cpp_FUN_0045cff0
// Address: 0045cff0
void FUN_0045cff0(CDrawSurface *param_1,int param_2,int param_3,uint param_4,uint param_5);

// Original: cockpit_drawsurf.cpp_FUN_0045d070
// Address: 0045d070
void FUN_0045d070(CDrawSurface *param_1,int param_2,int param_3,int param_4,int param_5,int param_6,int param_7);

// Original: cockpit_drawsurf.cpp_FUN_0045d0d0
// Address: 0045d0d0
undefined4 FUN_0045d0d0(void);

// Original: cockpit_drawsurf.cpp_FUN_0045d0e0
// Address: 0045d0e0
undefined4 FUN_0045d0e0(void);

// Original: cockpit_drawsurf.cpp_FUN_0045d0f0
// Address: 0045d0f0
void FUN_0045d0f0(void);

// Original: cockpit_drawsurf.cpp_FUN_0045d100
// Address: 0045d100
void FUN_0045d100(void);

// Original: cockpit_drawsurf.cpp_CDrawSurface_fillRectangle_FUN_0045d110
// Address: 0045d110
void __cdecl CDrawSurface::fillRectangle(CDrawSurface *this_ptr,int x1,int y1,int x2,int y2);

// Original: cockpit_drawsurf.cpp_CDrawSurface_fillFullSurface_FUN_0045d2b0
// Address: 0045d2b0
void __cdecl CDrawSurface::fillFullSurface(CDrawSurface *this_ptr);

// Original: cockpit_drawsurf.cpp_CDrawSurface_renderPackedBitmap_FUN_0045d2d0
// Address: 0045d2d0
void CDrawSurface::renderPackedBitmap(int param_1,int param_2,int param_3,CPackedBitmap *param_4);

// Original: cockpit_drawsurf.cpp_CDrawSurface_fillPoly_FUN_0045d310
// Address: 0045d310
void CDrawSurface::fillPoly(CDrawSurface *param_1,int param_2,int *param_3);

// Original: cockpit_drawsurf.cpp_CDrawSurface_drawClosedPolyline_FUN_0045d6d0
// Address: 0045d6d0
void CDrawSurface::drawClosedPolyline(undefined4 param_1,int param_2,undefined4 *param_3);

// Original: cockpit_drawsurf.cpp_CDrawSurface_drawTextWithAlignment_FUN_0045d760
// Address: 0045d760
void __cdecl CDrawSurface::drawTextWithAlignment(CDrawSurface *this_ptr,char *text,int x,int width,int y,int height,ETextAlignment alignment_mode);

// Original: cockpit_drawsurf.cpp_CDrawSurface_drawTextRightAligned_FUN_0045da30
// Address: 0045da30
void __cdecl CDrawSurface::drawTextRightAligned(CDrawSurface *this_ptr,char *text,int x,int y);

// Original: cockpit_drawsurf.cpp_CDrawSurface_drawTextRightAlignedWrapper_FUN_0045da60
// Address: 0045da60
void __cdecl CDrawSurface::drawTextRightAlignedWrapper(CDrawSurface *this_ptr,int x,int y,char *text);

// Original: cockpit_drawsurf.cpp_CDrawSurface_drawTextRightAlignedPrintf_FUN_0045da90
// Address: 0045da90
void CDrawSurface::drawTextRightAlignedPrintf(CDrawSurface *param_1,int param_2,int param_3,char *param_4);

// Original: cockpit_drawsurf.cpp_CDrawSurface_drawTextRightAlignedVariant_FUN_0045db00
// Address: 0045db00
void __cdecl CDrawSurface::drawTextRightAlignedVariant(CDrawSurface *this_ptr,char *text,int x,int y);

// Original: cockpit_drawsurf.cpp_FUN_0045db30
// Address: 0045db30
void FUN_0045db30(CDrawSurface *param_1,int param_2,int param_3,char *param_4);

// Original: cockpit_drawsurf.cpp_CDrawSurface_drawTextRightAlignedVariantPrintf_FUN_0045db60
// Address: 0045db60
void CDrawSurface::drawTextRightAlignedVariantPrintf(CDrawSurface *param_1,int param_2,int param_3,char *param_4);

// Original: cockpit_drawsurf.cpp_CDrawSurface_drawTextCentered_FUN_0045dbd0
// Address: 0045dbd0
void __cdecl CDrawSurface::drawTextCentered(CDrawSurface *this_ptr,char *text,int x,int y);

// Original: cockpit_drawsurf.cpp_CDrawSurface_drawTextCenteredWrapper_FUN_0045dc00
// Address: 0045dc00
void __cdecl CDrawSurface::drawTextCenteredWrapper(CDrawSurface *this_ptr,int x,int y,char *text);

// Original: cockpit_drawsurf.cpp_CDrawSurface_drawTextCenteredPrintf_FUN_0045dc30
// Address: 0045dc30
void CDrawSurface::drawTextCenteredPrintf(CDrawSurface *param_1,int param_2,int param_3,char *param_4);

// Original: cockpit_drawsurf.cpp_CDrawSurface_drawTextRightAlignedVCentered_FUN_0045dca0
// Address: 0045dca0
void __cdecl CDrawSurface::drawTextRightAlignedVCentered(CDrawSurface *this_ptr,char *text,int x,int y);

// Original: cockpit_drawsurf.cpp_FUN_0045dcd0
// Address: 0045dcd0
void FUN_0045dcd0(CDrawSurface *param_1,int param_2,int param_3,char *param_4);

// Original: cockpit_drawsurf.cpp_CDrawSurface_drawTextRightAlignedVCenteredPrintf_FUN_0045dd00
// Address: 0045dd00
void CDrawSurface::drawTextRightAlignedVCenteredPrintf(CDrawSurface *param_1,int param_2,int param_3,char *param_4);

// Original: cockpit_drawsurf.cpp_CDrawSurface_drawTextCenteredBoth_FUN_0045dd70
// Address: 0045dd70
void __cdecl CDrawSurface::drawTextCenteredBoth(CDrawSurface *this_ptr,char *text,int x,int y);

// Original: cockpit_drawsurf.cpp_FUN_0045dda0
// Address: 0045dda0
void FUN_0045dda0(CDrawSurface *param_1,int param_2,int param_3,char *param_4);

// Original: cockpit_drawsurf.cpp_CDrawSurface_drawTextCenteredBothPrintf_FUN_0045ddd0
// Address: 0045ddd0
void CDrawSurface::drawTextCenteredBothPrintf(CDrawSurface *param_1,int param_2,int param_3,char *param_4);

// Original: cockpit_drawsurf.cpp_CDrawSurface_drawTextCenteredInBounds_FUN_0045de40
// Address: 0045de40
void __cdecl CDrawSurface::drawTextCenteredInBounds(CDrawSurface *this_ptr,char *text,int x,int width,int y);

// Original: cockpit_drawsurf.cpp_CDrawSurface_drawTextCenteredInBoundsWrapper_FUN_0045de70
// Address: 0045de70
void __cdecl CDrawSurface::drawTextCenteredInBoundsWrapper(CDrawSurface *this_ptr,int x,int y,int width,char *text);

// Original: cockpit_drawsurf.cpp_CDrawSurface_drawTextCenteredInBoundsPrintf_FUN_0045dea0
// Address: 0045dea0
void CDrawSurface::drawTextCenteredInBoundsPrintf(CDrawSurface *param_1,int param_2,int param_3,int param_4,char *param_5);

// Original: cockpit_drawsurf.cpp_CDrawSurface_drawTextCenteredInArea_FUN_0045df20
// Address: 0045df20
void __cdecl CDrawSurface::drawTextCenteredInArea(CDrawSurface *this_ptr,char *text,int x,int y,int height);

// Original: cockpit_drawsurf.cpp_FUN_0045df50
// Address: 0045df50
void FUN_0045df50(CDrawSurface *param_1,int param_2,int param_3,int param_4,char *param_5);

// Original: cockpit_drawsurf.cpp_CDrawSurface_drawTextCenteredInAreaPrintf_FUN_0045df80
// Address: 0045df80
void CDrawSurface::drawTextCenteredInAreaPrintf(CDrawSurface *param_1,int param_2,int param_3,int param_4,char *param_5);

// Original: cockpit_drawsurf.cpp_CDrawSurface_drawTextCenteredInAreaWithWidth_FUN_0045e000
// Address: 0045e000
void __cdecl CDrawSurface::drawTextCenteredInAreaWithWidth(CDrawSurface *this_ptr,char *text,int x,int width,int y,int height);

// Original: cockpit_drawsurf.cpp_CDrawSurface_drawTextCenteredInAreaWithWidthWrapper_FUN_0045e040
// Address: 0045e040
void CDrawSurface::drawTextCenteredInAreaWithWidthWrapper(CDrawSurface *param_1,int param_2,int param_3,int param_4,int param_5,char *param_6);

// Original: cockpit_drawsurf.cpp_CDrawSurface_drawTextCenteredInAreaWithWidthPrintf_FUN_0045e070
// Address: 0045e070
void CDrawSurface::drawTextCenteredInAreaWithWidthPrintf(CDrawSurface *param_1,int param_2,int param_3,int param_4,int param_5,char *param_6);

// Original: cockpit_drawsurf.cpp_CDrawSurface_drawTextCenteredFullWidth_FUN_0045e0f0
// Address: 0045e0f0
void __cdecl CDrawSurface::drawTextCenteredFullWidth(CDrawSurface *this_ptr,char *text,int y);

// Original: cockpit_drawsurf.cpp_FUN_0045e110
// Address: 0045e110
void FUN_0045e110(CDrawSurface *param_1,int param_2,char *param_3);

// Original: cockpit_drawsurf.cpp_FUN_0045e130
// Address: 0045e130
void FUN_0045e130(CDrawSurface *param_1,int param_2,char *param_3);

// Original: cockpit_drawsurf.cpp_CDrawSurface_drawTextCenteredFullHeight_FUN_0045e1a0
// Address: 0045e1a0
void __cdecl CDrawSurface::drawTextCenteredFullHeight(CDrawSurface *this_ptr,char *text,int x);

// Original: cockpit_drawsurf.cpp_FUN_0045e1d0
// Address: 0045e1d0
void FUN_0045e1d0(void);

// Original: cockpit_drawsurf.cpp_FUN_0045e1f0
// Address: 0045e1f0
void FUN_0045e1f0(CDrawSurface *param_1,int param_2,char *param_3);

// Original: cockpit_drawsurf.cpp_CDrawSurface_drawTextCenteredFullSurface_FUN_0045e260
// Address: 0045e260
void __cdecl CDrawSurface::drawTextCenteredFullSurface(CDrawSurface *this_ptr,char *text);

// Original: cockpit_drawsurf.cpp_CDrawSurface_drawTextCenteredFullSurfacePrintf_FUN_0045e280
// Address: 0045e280
void CDrawSurface::drawTextCenteredFullSurfacePrintf(CDrawSurface *param_1,char *param_2);

// Original: cockpit_drawsurf.cpp_CDrawSurface_getCharWidth_FUN_0045e2e0
// Address: 0045e2e0
int CDrawSurface::getCharWidth(void);

// Original: cockpit_drawsurf.cpp_CDrawSurface_getCurrentFontMaxWidth_FUN_0045e320
// Address: 0045e320
int __cdecl CDrawSurface::getCurrentFontMaxWidth(CDrawSurface *this_ptr);

// Original: cockpit_drawsurf.cpp_CDrawSurface_getTextWidth_FUN_0045e340
// Address: 0045e340
int CDrawSurface::getTextWidth(void);

// Original: cockpit_drawsurf.cpp_testDrawingSurface_FUN_0045e370
// Address: 0045e370
void testDrawingSurface(void);
