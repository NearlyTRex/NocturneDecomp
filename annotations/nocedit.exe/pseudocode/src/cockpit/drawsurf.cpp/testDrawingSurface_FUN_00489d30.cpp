// Name: cockpit_drawsurf.cpp_testDrawingSurface_FUN_00489d30
// Address: 00489d30
// Address Range: [[00489d30, 0048a690]]
// Convention: __cdecl
// Signature: void __cdecl cockpit_drawsurf_cpp_testDrawingSurface_FUN_00489d30(CBitFont *test_font)

#include "nocturne.h"

void __cdecl cockpit_drawsurf_cpp_testDrawingSurface_FUN_00489d30(CBitFont *test_font)

{
  int y;
  int iVar2;
  int y_00;
  int iVar5;
  int iVar6;
  int iVar3;
  int iVar4;
  int y_01;
  int iVar7;
  CDrawSurface local_c4;
  CDrawSurface local_a4;
  CDrawSurface local_84;
  CDrawSurface local_64;
  CDrawSurface local_44;
  char local_24 [4];
  int local_20;
  int local_1c;
  int local_18;
  int local_14;
  int local_10;
  int local_c;
  int iVar1;
  
  if ((0x27f < g_WindowWidth) && (0x1df < g_WindowHeight)) {
    cockpit_drawsurf_cpp_CDrawSurface_ctor_FUN_00486ea0
              (&local_64,g_WindowWidth / 2,g_WindowHeight / 2,0xc9,0x65,(CDrawSurface *)0x0);
    cockpit_drawsurf_cpp_CDrawSurface_ctor_FUN_00486ea0(&local_a4,0xc,8,0x15,0xb,&local_64);
    cockpit_drawsurf_cpp_CDrawSurface_ctor_FUN_00486ea0(&local_c4,0xbe,0x5f,0x14,10,&local_64);
    cockpit_drawsurf_cpp_CDrawSurface_setColorRGB_FUN_00487220(0x80,0x80,0x80);
    cockpit_drawsurf_cpp_CDrawSurface_fillFullSurface_FUN_00488c70(&local_64);
    cockpit_drawsurf_cpp_CDrawSurface_setColor_FUN_00487010(7);
    cockpit_drawsurf_cpp_CDrawSurface_drawSurfaceBorder_FUN_00488530(&local_64);
    cockpit_drawsurf_cpp_CDrawSurface_drawClippedLine_FUN_00487990(&local_64,0,0,200,100);
    cockpit_drawsurf_cpp_CDrawSurface_drawCircle_FUN_00487730(&local_64,100,0x32,100);
    cockpit_drawsurf_cpp_CDrawSurface_drawCircle_FUN_00487730(&local_64,100,0x32,0x32);
    cockpit_drawsurf_cpp_CDrawSurface_drawCircleFromTopLeft_FUN_00487820(&local_64,0,0,0x32);
    cockpit_drawsurf_cpp_CDrawSurface_drawCircleFromTopRight_FUN_00487850(&local_64,200,0,0x32);
    cockpit_drawsurf_cpp_CDrawSurface_drawCircleFromBottomLeft_FUN_00487880(&local_64,0,100,0x32);
    cockpit_drawsurf_cpp_CDrawSurface_drawCircleFromBottomRight_FUN_004878b0(&local_64,200,100,0x32)
    ;
    cockpit_drawsurf_cpp_CDrawSurface_setColor_FUN_00487010(0xf9);
    cockpit_drawsurf_cpp_setCurrentFont_FUN_004874c0((CBitFont *)0x0);
    cockpit_drawsurf_cpp_CDrawSurface_drawTextRightAlignedWrapper_FUN_00489420
              (&local_64,5,2,"Hello");
    cockpit_drawsurf_cpp_CDrawSurface_drawTextRightAlignedWrapper_FUN_00489420
              (&local_64,-5,0x11,"Hello");
    cockpit_drawsurf_cpp_CDrawSurface_drawTextRightAlignedWrapper_FUN_00489420
              (&local_64,0xb9,0x11,"Hello\nworld\n...");
    cockpit_drawsurf_cpp_CDrawSurface_drawTextCenteredWrapper_FUN_004895c0
              (&local_64,100,0x11,"+");
    cockpit_drawsurf_cpp_CDrawSurface_drawTextCenteredInBoundsWrapper_FUN_00489830
              (&local_64,0x5c,0x6c,0x20,"+");
    cockpit_drawsurf_cpp_setCurrentFont_FUN_004874c0(test_font);
    test_font->rendering_ready = 0;
    cockpit_drawsurf_cpp_CDrawSurface_drawTextRightAlignedWrapper_FUN_00489420
              (&local_64,5,0x2a,"Hello");
    cockpit_drawsurf_cpp_CDrawSurface_drawTextRightAlignedWrapper_FUN_00489420
              (&local_64,-5,0x39,"Hello");
    cockpit_drawsurf_cpp_CDrawSurface_drawTextRightAlignedWrapper_FUN_00489420
              (&local_64,0xb9,0x39,"Hello");
    test_font->rendering_ready = 1;
    cockpit_drawsurf_cpp_CDrawSurface_drawTextRightAlignedWrapper_FUN_00489420
              (&local_64,-5,0x48,"Hello");
    cockpit_drawsurf_cpp_CDrawSurface_drawTextRightAlignedWrapper_FUN_00489420
              (&local_64,0xb9,0x48,"Hello");
    cockpit_drawsurf_cpp_CDrawSurface_drawTextCenteredWrapper_FUN_004895c0
              (&local_64,100,0x48,"+");
    cockpit_drawsurf_cpp_CDrawSurface_drawTextCenteredInBoundsWrapper_FUN_00489830
              (&local_64,0x5c,0x6c,0x57,"+");
    cockpit_drawsurf_cpp_CDrawSurface_setColor_FUN_00487010(0xff);
    cockpit_drawsurf_cpp_CDrawSurface_plotPixel_FUN_004874d0(&local_64,100,0x14);
    cockpit_drawsurf_cpp_CDrawSurface_plotPixel_FUN_004874d0(&local_64,100,0x23);
    cockpit_drawsurf_cpp_CDrawSurface_plotPixel_FUN_004874d0(&local_64,100,0x4f);
    cockpit_drawsurf_cpp_CDrawSurface_plotPixel_FUN_004874d0(&local_64,100,0x5e);
    cockpit_drawsurf_cpp_CDrawSurface_setColorRGB_FUN_00487220(0xff,0,0);
    cockpit_drawsurf_cpp_CDrawSurface_fillFullSurface_FUN_00488c70(&local_a4);
    cockpit_drawsurf_cpp_CDrawSurface_setColor_FUN_00487010(0xfb);
    cockpit_drawsurf_cpp_CDrawSurface_drawSurfaceBorder_FUN_00488530(&local_a4);
    cockpit_drawsurf_cpp_CDrawSurface_drawClippedLine_FUN_00487990(&local_a4,-0x15,-0xb,0x29,0x15);
    cockpit_drawsurf_cpp_CDrawSurface_drawCircle_FUN_00487730(&local_a4,10,5,6);
    cockpit_drawsurf_cpp_CDrawSurface_setColorRGB_FUN_00487220(0,0,0xff);
    cockpit_drawsurf_cpp_CDrawSurface_fillFullSurface_FUN_00488c70(&local_c4);
    cockpit_drawsurf_cpp_CDrawSurface_setColor_FUN_00487010(0xfb);
    cockpit_drawsurf_cpp_CDrawSurface_drawSurfaceBorder_FUN_00488530(&local_c4);
    cockpit_drawsurf_cpp_CDrawSurface_drawClippedLine_FUN_00487990(&local_c4,0,0,0x13,9);
    local_24[0] = "A+A"[0];
    local_24[1] = "A+A"[1];
    local_24[2] = "A+A"[2];
    local_24[3] = "A+A"[3];
    iVar2 = g_WindowHeight / 2 + 0x66;
    iVar3 = g_WindowHeight - iVar2;
    iVar7 = test_font->current_line_height;
    cockpit_drawsurf_cpp_CDrawSurface_ctor_FUN_00486ea0
              (&local_44,g_WindowWidth / 2,iVar2,0xc9,iVar3,(CDrawSurface *)0x0);
    cockpit_drawsurf_cpp_CDrawSurface_setColorRGB_FUN_00487220(0x80,0x80,0x80);
    cockpit_drawsurf_cpp_CDrawSurface_fillFullSurface_FUN_00488c70(&local_44);
    cockpit_drawsurf_cpp_CDrawSurface_setColor_FUN_00487010(7);
    cockpit_drawsurf_cpp_CDrawSurface_drawSurfaceBorder_FUN_00488530(&local_44);
    cockpit_drawsurf_cpp_CDrawSurface_setColor_FUN_00487010(0xf9);
    cockpit_drawsurf_cpp_setCurrentFont_FUN_004874c0(test_font);
    test_font->rendering_ready = 1;
    cockpit_drawsurf_cpp_CDrawSurface_drawTextRightAlignedPrintf_FUN_00489450
              (&local_44,1,1,"%s",local_24);
    cockpit_drawsurf_cpp_CDrawSurface_drawTextRightAlignedVariantPrintf_FUN_00489520
              (&local_44,199,1,"%s",local_24);
    cockpit_drawsurf_cpp_CDrawSurface_drawTextCenteredPrintf_FUN_004895f0
              (&local_44,100,1,"%s",local_24);
    y = iVar7 + 1;
    cockpit_drawsurf_cpp_CDrawSurface_drawTextRightAlignedVCenteredPrintf_FUN_004896c0
              (&local_44,100,y,"%s",local_24);
    y_00 = iVar7 * 2 + 1;
    cockpit_drawsurf_cpp_CDrawSurface_drawTextCenteredBothPrintf_FUN_00489790
              (&local_44,100,y_00,"%s",local_24);
    iVar5 = iVar3 + iVar7 * -3;
    cockpit_drawsurf_cpp_CDrawSurface_drawTextCenteredInBoundsPrintf_FUN_00489860
              (&local_44,0x32,0x96,iVar5,"%s",local_24);
    iVar6 = iVar3 + iVar7 * -2;
    cockpit_drawsurf_cpp_CDrawSurface_drawTextCenteredInAreaPrintf_FUN_00489940
              (&local_44,100,iVar6 + -0x32,iVar6 + 0x32,"%s",local_24);
    y_01 = iVar3 - iVar7;
    cockpit_drawsurf_cpp_CDrawSurface_drawTextCenteredInAreaWithWidthPrintf_FUN_00489a30
              (&local_44,0x32,0x96,y_01 + -0x32,y_01 + 0x32,"%s",local_24);
    cockpit_drawsurf_cpp_CDrawSurface_drawTextCenteredFullSurfacePrintf_FUN_00489c40
              (&local_44,"%s",local_24);
    cockpit_drawsurf_cpp_CDrawSurface_setColor_FUN_00487010(0xfb);
    cockpit_drawsurf_cpp_CDrawSurface_plotPixel_FUN_004874d0(&local_44,1,1);
    cockpit_drawsurf_cpp_CDrawSurface_plotPixel_FUN_004874d0(&local_44,199,1);
    cockpit_drawsurf_cpp_CDrawSurface_plotPixel_FUN_004874d0(&local_44,100,1);
    cockpit_drawsurf_cpp_CDrawSurface_plotPixel_FUN_004874d0(&local_44,100,y);
    cockpit_drawsurf_cpp_CDrawSurface_plotPixel_FUN_004874d0(&local_44,100,y_00);
    cockpit_drawsurf_cpp_CDrawSurface_plotPixel_FUN_004874d0(&local_44,100,iVar5);
    cockpit_drawsurf_cpp_CDrawSurface_plotPixel_FUN_004874d0(&local_44,100,iVar6);
    cockpit_drawsurf_cpp_CDrawSurface_plotPixel_FUN_004874d0(&local_44,100,y_01);
    iVar5 = g_WindowHeight / 2 + 0x66;
    iVar4 = g_WindowHeight - iVar5;
    cockpit_drawsurf_cpp_CDrawSurface_ctor_FUN_00486ea0
              (&local_84,g_WindowWidth / 2 + -0xca,iVar5,0xc9,iVar4,(CDrawSurface *)0x0);
    cockpit_drawsurf_cpp_CDrawSurface_setColorRGB_FUN_00487220(0x80,0x80,0x80);
    cockpit_drawsurf_cpp_CDrawSurface_fillFullSurface_FUN_00488c70(&local_84);
    cockpit_drawsurf_cpp_CDrawSurface_setColor_FUN_00487010(7);
    cockpit_drawsurf_cpp_CDrawSurface_drawSurfaceBorder_FUN_00488530(&local_84);
    cockpit_drawsurf_cpp_CDrawSurface_setColor_FUN_00487010(0xf9);
    cockpit_drawsurf_cpp_setCurrentFont_FUN_004874c0((CBitFont *)0x0);
    test_font->rendering_ready = 1;
    cockpit_drawsurf_cpp_CDrawSurface_drawTextRightAlignedPrintf_FUN_00489450
              (&local_84,1,1,"%s",local_24);
    cockpit_drawsurf_cpp_CDrawSurface_drawTextRightAlignedVariantPrintf_FUN_00489520
              (&local_84,199,1,"%s",local_24);
    cockpit_drawsurf_cpp_CDrawSurface_drawTextCenteredPrintf_FUN_004895f0
              (&local_84,100,1,"%s",local_24);
    cockpit_drawsurf_cpp_CDrawSurface_drawTextRightAlignedVCenteredPrintf_FUN_004896c0
              (&local_84,100,y,"%s",local_24);
    cockpit_drawsurf_cpp_CDrawSurface_drawTextCenteredBothPrintf_FUN_00489790
              (&local_84,100,y_00,"%s",local_24);
    iVar5 = iVar4 + iVar7 * -3;
    cockpit_drawsurf_cpp_CDrawSurface_drawTextCenteredInBoundsPrintf_FUN_00489860
              (&local_84,0x32,0x96,iVar5,"%s",local_24);
    iVar6 = iVar4 + iVar7 * -2;
    cockpit_drawsurf_cpp_CDrawSurface_drawTextCenteredInAreaPrintf_FUN_00489940
              (&local_84,100,iVar6 + -0x32,iVar6 + 0x32,"%s",local_24);
    iVar7 = iVar4 - iVar7;
    cockpit_drawsurf_cpp_CDrawSurface_drawTextCenteredInAreaWithWidthPrintf_FUN_00489a30
              (&local_84,0x32,0x96,iVar7 + -0x32,iVar7 + 0x32,"%s",local_24);
    cockpit_drawsurf_cpp_CDrawSurface_drawTextCenteredFullSurfacePrintf_FUN_00489c40
              (&local_84,"%s",local_24);
    cockpit_drawsurf_cpp_CDrawSurface_setColor_FUN_00487010(0xfb);
    cockpit_drawsurf_cpp_CDrawSurface_plotPixel_FUN_004874d0(&local_84,1,1);
    cockpit_drawsurf_cpp_CDrawSurface_plotPixel_FUN_004874d0(&local_84,199,1);
    cockpit_drawsurf_cpp_CDrawSurface_plotPixel_FUN_004874d0(&local_84,100,1);
    cockpit_drawsurf_cpp_CDrawSurface_plotPixel_FUN_004874d0(&local_84,100,y);
    cockpit_drawsurf_cpp_CDrawSurface_plotPixel_FUN_004874d0(&local_84,100,y_00);
    cockpit_drawsurf_cpp_CDrawSurface_plotPixel_FUN_004874d0(&local_84,100,iVar5);
    cockpit_drawsurf_cpp_CDrawSurface_plotPixel_FUN_004874d0(&local_84,100,iVar6);
    cockpit_drawsurf_cpp_CDrawSurface_plotPixel_FUN_004874d0(&local_84,100,iVar7);
    cockpit_drawsurf_cpp_CDrawSurface_setColor_FUN_00487010(4);
    cockpit_drawsurf_cpp_CDrawSurface_drawAnimatedFullSurface_FUN_00488990(&local_84);
    return;
  }
  return;
}
