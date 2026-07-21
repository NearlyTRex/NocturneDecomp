#pragma once

// Function prototypes for cockpit/drawsurf.cpp
// Generated from Ghidra function signatures

// Original: cockpit_drawsurf.cpp_CDrawSurface_initFromParent_FUN_0045b480
// Address: 0045b480
undefined4 __cdecl CDrawSurface::initFromParent(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,undefined4 param_5,undefined4 param_6);

// Original: cockpit_drawsurf.cpp_CDrawSurface_init_FUN_0045b4c0
// Address: 0045b4c0
void __cdecl CDrawSurface::init(int *param_1,int param_2,int param_3,int param_4,int param_5,int param_6);

// Original: cockpit_drawsurf.cpp_CDrawSurface_setColor_FUN_0045b5f0
// Address: 0045b5f0
void __cdecl CDrawSurface::setColor(uint param_1);

// Original: cockpit_drawsurf.cpp_CDrawSurface_setColorRGB_FUN_0045b800
// Address: 0045b800
void CDrawSurface::setColorRGB(uint param_1,uint param_2,uint param_3);

// Original: cockpit_drawsurf.cpp_setCurrentFont_FUN_0045baa0
// Address: 0045baa0
void __cdecl setCurrentFont(undefined4 param_1);

// Original: cockpit_drawsurf.cpp_CDrawSurface_plotPixel_FUN_0045bab0
// Address: 0045bab0
void __cdecl CDrawSurface::plotPixel(int param_1,int param_2,int param_3);

// Original: cockpit_drawsurf.cpp_CDrawSurface_drawHorizontalLineWithEffect_FUN_0045bc20
// Address: 0045bc20
void __cdecl CDrawSurface::drawHorizontalLineWithEffect(uint param_1,uint param_2,int param_3);

// Original: cockpit_drawsurf.cpp_CDrawSurface_drawCircle_FUN_0045bd50
// Address: 0045bd50
void CDrawSurface::drawCircle(int param_1,int param_2,int param_3,int param_4);

// Original: cockpit_drawsurf.cpp_CDrawSurface_drawRectangleCornerPoints_FUN_0045bf00
// Address: 0045bf00
void __cdecl CDrawSurface::drawRectangleCornerPoints(undefined4 param_1,int param_2,int param_3,int param_4,int param_5);

// Original: cockpit_drawsurf.cpp_CDrawSurface_drawLineBresenham_FUN_0045c0f0
// Address: 0045c0f0
void __cdecl CDrawSurface::drawLineBresenham(int param_1,int param_2,int param_3,int param_4,int param_5);

// Original: cockpit_drawsurf.cpp_CDrawSurface_drawDashedLine_FUN_0045c1e0
// Address: 0045c1e0
void CDrawSurface::drawDashedLine(int param_1,int param_2,int param_3,int param_4,int param_5);

// Original: cockpit_drawsurf.cpp_CDrawSurface_clipLine_FUN_0045c440
// Address: 0045c440
undefined4 __cdecl CDrawSurface::clipLine(undefined4 param_1,int *param_2,int *param_3,int *param_4,int *param_5,int param_6,int param_7,int param_8,int param_9);

// Original: cockpit_drawsurf.cpp_CDrawSurface_drawHorizontalLine_FUN_0045c730
// Address: 0045c730
int __cdecl CDrawSurface::drawHorizontalLine(int param_1,int param_2,int param_3,int param_4);

// Original: cockpit_drawsurf.cpp_CDrawSurface_drawVerticalLine_FUN_0045c850
// Address: 0045c850
int __cdecl CDrawSurface::drawVerticalLine(int param_1,int param_2,int param_3,int param_4);

// Original: cockpit_drawsurf.cpp_CDrawSurface_drawRectangleOutline_FUN_0045cb10
// Address: 0045cb10
void __cdecl CDrawSurface::drawRectangleOutline(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,undefined4 param_5);

// Original: cockpit_drawsurf.cpp_CDrawSurface_drawSurfaceBorder_FUN_0045cb70
// Address: 0045cb70
void __cdecl CDrawSurface::drawSurfaceBorder(int *param_1);

// Original: cockpit_drawsurf.cpp_CDrawSurface_fillRectangle_FUN_0045d110
// Address: 0045d110
int __cdecl CDrawSurface::fillRectangle(int param_1,int param_2,int param_3,int param_4,int param_5);

// Original: cockpit_drawsurf.cpp_CDrawSurface_drawTextWithAlignment_FUN_0045d760
// Address: 0045d760
void __cdecl CDrawSurface::drawTextWithAlignment(int param_1,undefined4 param_2,int param_3,int param_4,int param_5,int param_6,undefined4 param_7);

// Original: cockpit_drawsurf.cpp_CDrawSurface_drawTextRightAligned_FUN_0045da30
// Address: 0045da30
void __cdecl CDrawSurface::drawTextRightAligned(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4);

// Original: cockpit_drawsurf.cpp_CDrawSurface_drawTextCenteredInAreaWithWidth_FUN_0045e000
// Address: 0045e000
void __cdecl CDrawSurface::drawTextCenteredInAreaWithWidth(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,undefined4 param_5,undefined4 param_6);

// Original: cockpit_drawsurf.cpp_CDrawSurface_drawTextCenteredInAreaWithWidthPrintf_FUN_0045e070
// Address: 0045e070
void CDrawSurface::drawTextCenteredInAreaWithWidthPrintf(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,undefined4 param_5,undefined4 param_6);

// Original: cockpit_drawsurf.cpp_CDrawSurface_drawTextCenteredFullSurface_FUN_0045e260
// Address: 0045e260
void __cdecl CDrawSurface::drawTextCenteredFullSurface(int *param_1,undefined4 param_2);

// Original: cockpit_drawsurf.cpp_CDrawSurface_drawTextCenteredFullSurfacePrintf_FUN_0045e280
// Address: 0045e280
void CDrawSurface::drawTextCenteredFullSurfacePrintf(undefined4 param_1,undefined4 param_2);

// Original: cockpit_drawsurf.cpp_CDrawSurface_getCurrentFontMaxWidth_FUN_0045e320
// Address: 0045e320
undefined4 __cdecl CDrawSurface::getCurrentFontMaxWidth(void);
