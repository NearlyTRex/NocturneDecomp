// Name: cockpit_drawsurf.cpp_testDrawingSurface_FUN_00489d30
// Address: 00489d30
// Address Range: [[00489d30, 0048a690]]
// Convention: __cdecl
// Signature: void cockpit_drawsurf.cpp_testDrawingSurface_FUN_00489d30(CBitFont * test_font)

#include "nocturne.h"

void __cdecl cockpit_drawsurf_cpp_testDrawingSurface_FUN_00489d30(CBitFont *test_font)

{
  CBitFont *y;
  int iVar1;
  CBitFont *font_ptr;
  int iVar2;
  int iVar3;
  BADSPACEBASE *in_ESP;
  int iStack000000c4;
  int iStack000000c8;
  int iStack000000d0;
  int iStack000000d4;
  int in_stack_000000d8;
  int in_stack_000000ec;
  int in_stack_000000fc;
  int in_stack_0000012c;
  int iStack00000130;
  int in_stack_00000138;
  int in_stack_0000013c;
  int in_stack_00000158;
  int in_stack_00000160;
  char *in_stack_ffffff80;
  char *in_stack_ffffff84;
  char *in_stack_ffffffa0;
  char *in_stack_ffffffa4;
  
  font_ptr = test_font;
  if ((0x27f < g_WindowWidth) && (0x1df < g_WindowHeight)) {
    cockpit_drawsurf_cpp_CDrawSurface_ctor_FUN_00486ea0
              ((CDrawSurface *)&stack0xffffff9c,g_WindowWidth / 2,g_WindowHeight / 2,0xc9,0x65,
               (CDrawSurface *)0x0);
    cockpit_drawsurf_cpp_CDrawSurface_ctor_FUN_00486ea0
              ((CDrawSurface *)&stack0xffffff60,0xc,8,0x15,0xb,(CDrawSurface *)&stack0xffffffa0);
    cockpit_drawsurf_cpp_CDrawSurface_ctor_FUN_00486ea0
              ((CDrawSurface *)&stack0xffffff44,0xbe,0x5f,0x14,10,(CDrawSurface *)&stack0xffffffa4);
    cockpit_drawsurf_cpp_CDrawSurface_setColorRGB_FUN_00487220(0x80,0x80,0x80);
    cockpit_drawsurf_cpp_CDrawSurface_fillFullSurface_FUN_00488c70((CDrawSurface *)&stack0xffffffac)
    ;
    cockpit_drawsurf_cpp_CDrawSurface_setColor_FUN_00487010(7);
    cockpit_drawsurf_cpp_CDrawSurface_drawSurfaceBorder_FUN_00488530
              ((CDrawSurface *)&stack0xffffffb4);
    cockpit_drawsurf_cpp_CDrawSurface_drawClippedLine_FUN_00487990
              ((CDrawSurface *)&stack0xffffffb8,0,0,200,100);
    cockpit_drawsurf_cpp_CDrawSurface_drawCircle_FUN_00487730
              ((CDrawSurface *)&stack0xffffffbc,100,0x32,100);
    cockpit_drawsurf_cpp_CDrawSurface_drawCircle_FUN_00487730
              ((CDrawSurface *)&stack0xffffffc0,100,0x32,0x32);
    cockpit_drawsurf_cpp_CDrawSurface_drawCircleFromTopLeft_FUN_00487820
              ((CDrawSurface *)&stack0xffffffc4,0,0,0x32);
    cockpit_drawsurf_cpp_CDrawSurface_drawCircleFromTopRight_FUN_00487850
              ((CDrawSurface *)&stack0xffffffc8,200,0,0x32);
    cockpit_drawsurf_cpp_CDrawSurface_drawCircleFromBottomLeft_FUN_00487880
              ((CDrawSurface *)&stack0xffffffcc,0,100,0x32);
    cockpit_drawsurf_cpp_CDrawSurface_drawCircleFromBottomRight_FUN_004878b0
              ((CDrawSurface *)&stack0xffffffd0,200,100,0x32);
    cockpit_drawsurf_cpp_CDrawSurface_setColor_FUN_00487010(0xf9);
    cockpit_drawsurf_cpp_setCurrentFont_FUN_004874c0((CBitFont *)0x0);
    cockpit_drawsurf_cpp_CDrawSurface_drawTextRightAlignedWrapper_FUN_00489420
              ((CDrawSurface *)&stack0xffffffdc,5,2,"Hello");
    cockpit_drawsurf_cpp_CDrawSurface_drawTextRightAlignedWrapper_FUN_00489420
              ((CDrawSurface *)&stack0xffffffe0,-5,0x11,"Hello");
    cockpit_drawsurf_cpp_CDrawSurface_drawTextRightAlignedWrapper_FUN_00489420
              ((CDrawSurface *)&stack0xffffffe4,0xb9,0x11,"Hello\nworld\n...");
    cockpit_drawsurf_cpp_CDrawSurface_drawTextCenteredWrapper_FUN_004895c0
              ((CDrawSurface *)&stack0xffffffe8,100,0x11,0x621ed1,in_stack_ffffff80);
    cockpit_drawsurf_cpp_CDrawSurface_drawTextCenteredInBoundsWrapper_FUN_00489830
              ((CDrawSurface *)&stack0xffffffec,0x5c,0x6c,0x20,0x621ed3,in_stack_ffffff84);
    cockpit_drawsurf_cpp_setCurrentFont_FUN_004874c0(font_ptr);
    font_ptr->rendering_ready = 0;
    cockpit_drawsurf_cpp_CDrawSurface_drawTextRightAlignedWrapper_FUN_00489420
              ((CDrawSurface *)&stack0xfffffff4,5,0x2a,"Hello");
    cockpit_drawsurf_cpp_CDrawSurface_drawTextRightAlignedWrapper_FUN_00489420
              ((CDrawSurface *)&stack0xfffffff8,-5,0x39,"Hello");
    cockpit_drawsurf_cpp_CDrawSurface_drawTextRightAlignedWrapper_FUN_00489420
              ((CDrawSurface *)&stack0xfffffffc,0xb9,0x39,"Hello");
    font_ptr->rendering_ready = 1;
    cockpit_drawsurf_cpp_CDrawSurface_drawTextRightAlignedWrapper_FUN_00489420
              ((CDrawSurface *)&stack0x00000000,-5,0x48,"Hello");
    cockpit_drawsurf_cpp_CDrawSurface_drawTextRightAlignedWrapper_FUN_00489420
              ((CDrawSurface *)&test_font,0xb9,0x48,"Hello");
    cockpit_drawsurf_cpp_CDrawSurface_drawTextCenteredWrapper_FUN_004895c0
              ((CDrawSurface *)&stack0x00000008,100,0x48,0x621ef3,in_stack_ffffffa0);
    cockpit_drawsurf_cpp_CDrawSurface_drawTextCenteredInBoundsWrapper_FUN_00489830
              ((CDrawSurface *)&stack0x0000000c,0x5c,0x6c,0x57,0x621ef5,in_stack_ffffffa4);
    cockpit_drawsurf_cpp_CDrawSurface_setColor_FUN_00487010(0xff);
    cockpit_drawsurf_cpp_CDrawSurface_plotPixel_FUN_004874d0
              ((CDrawSurface *)&stack0x00000014,100,0x14);
    cockpit_drawsurf_cpp_CDrawSurface_plotPixel_FUN_004874d0
              ((CDrawSurface *)&stack0x00000018,100,0x23);
    cockpit_drawsurf_cpp_CDrawSurface_plotPixel_FUN_004874d0
              ((CDrawSurface *)&stack0x0000001c,100,0x4f);
    cockpit_drawsurf_cpp_CDrawSurface_plotPixel_FUN_004874d0
              ((CDrawSurface *)&stack0x00000020,100,0x5e);
    cockpit_drawsurf_cpp_CDrawSurface_setColorRGB_FUN_00487220(0xff,0,0);
    cockpit_drawsurf_cpp_CDrawSurface_fillFullSurface_FUN_00488c70((CDrawSurface *)&stack0xffffffe8)
    ;
    cockpit_drawsurf_cpp_CDrawSurface_setColor_FUN_00487010(0xfb);
    cockpit_drawsurf_cpp_CDrawSurface_drawSurfaceBorder_FUN_00488530
              ((CDrawSurface *)&stack0xfffffff0);
    cockpit_drawsurf_cpp_CDrawSurface_drawClippedLine_FUN_00487990
              ((CDrawSurface *)&stack0xfffffff4,-0x15,-0xb,0x29,0x15);
    cockpit_drawsurf_cpp_CDrawSurface_drawCircle_FUN_00487730
              ((CDrawSurface *)&stack0xfffffff8,10,5,6);
    cockpit_drawsurf_cpp_CDrawSurface_setColorRGB_FUN_00487220(0,0,0xff);
    cockpit_drawsurf_cpp_CDrawSurface_fillFullSurface_FUN_00488c70((CDrawSurface *)&stack0xffffffe0)
    ;
    cockpit_drawsurf_cpp_CDrawSurface_setColor_FUN_00487010(0xfb);
    cockpit_drawsurf_cpp_CDrawSurface_drawSurfaceBorder_FUN_00488530
              ((CDrawSurface *)&stack0xffffffe8);
    cockpit_drawsurf_cpp_CDrawSurface_drawClippedLine_FUN_00487990
              ((CDrawSurface *)&stack0xffffffec,0,0,0x13,9);
    iVar2 = g_WindowHeight / 2 + 0x66;
    iVar3 = g_WindowHeight - iVar2;
    iVar1 = font_ptr->current_max_width;
    cockpit_drawsurf_cpp_CDrawSurface_ctor_FUN_00486ea0
              ((CDrawSurface *)&stack0x00000070,g_WindowWidth / 2,iVar2,0xc9,iVar3,
               (CDrawSurface *)0x0);
    cockpit_drawsurf_cpp_CDrawSurface_setColorRGB_FUN_00487220(0x80,0x80,0x80);
    cockpit_drawsurf_cpp_CDrawSurface_fillFullSurface_FUN_00488c70((CDrawSurface *)&stack0x00000078)
    ;
    cockpit_drawsurf_cpp_CDrawSurface_setColor_FUN_00487010(7);
    cockpit_drawsurf_cpp_CDrawSurface_drawSurfaceBorder_FUN_00488530
              ((CDrawSurface *)&stack0x00000080);
    cockpit_drawsurf_cpp_CDrawSurface_setColor_FUN_00487010(0xf9);
    cockpit_drawsurf_cpp_setCurrentFont_FUN_004874c0(font_ptr);
    font_ptr->rendering_ready = 1;
    cockpit_drawsurf_cpp_CDrawSurface_drawTextRightAlignedPrintf_FUN_00489450
              ((CDrawSurface *)&stack0x0000008c,1,1,"%s");
    test_font = (CBitFont *)&stack0x000000b0;
    cockpit_drawsurf_cpp_CDrawSurface_drawTextRightAlignedVariantPrintf_FUN_00489520
              ((CDrawSurface *)&stack0x00000090,199,1,0x621efa,(char *)test_font);
    test_font = (CBitFont *)"%s";
    cockpit_drawsurf_cpp_CDrawSurface_drawTextCenteredPrintf_FUN_004895f0
              ((CDrawSurface *)&stack0x00000094,100,1,0x621efd,&stack0x000000b4);
    y = (CBitFont *)(iVar1 + 1);
    test_font = y;
    cockpit_drawsurf_cpp_CDrawSurface_drawTextRightAlignedVCenteredPrintf_FUN_004896c0
              ((CDrawSurface *)&stack0x00000098,100,(int)y,0x621f00,&stack0x000000b8);
    iStack000000d0 = iVar1 * 2;
    iStack000000d4 = iStack000000d0 + 1;
    test_font = (CBitFont *)0x64;
    cockpit_drawsurf_cpp_CDrawSurface_drawTextCenteredBothPrintf_FUN_00489790
              ((CDrawSurface *)&stack0x0000009c,100,iStack000000d4,0x621f03,&stack0x000000bc);
    iStack000000c8 = iVar1 * 3;
    iStack000000c4 = iVar3 + iVar1 * -3;
    test_font = (CBitFont *)0x32;
    cockpit_drawsurf_cpp_CDrawSurface_drawTextCenteredInBoundsPrintf_FUN_00489860
              ((CDrawSurface *)&stack0x000000a0,0x32,0x96,iStack000000c4,0x621f06,&stack0x000000c0);
    iStack000000d4 = iVar3 - in_stack_000000d8;
    test_font = (CBitFont *)&stack0x000000a4;
    cockpit_drawsurf_cpp_CDrawSurface_drawTextCenteredInAreaPrintf_FUN_00489940
              ((CDrawSurface *)test_font,100,iStack000000d4 + -0x32,iStack000000d4 + 0x32,
               "%s");
    iVar3 = iVar3 - iVar1;
    test_font = (CBitFont *)&stack0x000000a8;
    cockpit_drawsurf_cpp_CDrawSurface_drawTextCenteredInAreaWithWidthPrintf_FUN_00489a30
              ((CDrawSurface *)test_font,0x32,0x96,iVar3 + -0x32,iVar3 + 0x32,"%s");
    cockpit_drawsurf_cpp_CDrawSurface_drawTextCenteredFullSurfacePrintf_FUN_00489c40
              ((CDrawSurface *)&stack0x000000ac,"%s");
    cockpit_drawsurf_cpp_CDrawSurface_setColor_FUN_00487010(0xfb);
    cockpit_drawsurf_cpp_CDrawSurface_plotPixel_FUN_004874d0((CDrawSurface *)&stack0x000000b4,1,1);
    cockpit_drawsurf_cpp_CDrawSurface_plotPixel_FUN_004874d0((CDrawSurface *)&stack0x000000b8,199,1)
    ;
    cockpit_drawsurf_cpp_CDrawSurface_plotPixel_FUN_004874d0((CDrawSurface *)&stack0x000000bc,100,1)
    ;
    cockpit_drawsurf_cpp_CDrawSurface_plotPixel_FUN_004874d0
              ((CDrawSurface *)&stack0x000000c0,100,(int)y);
    cockpit_drawsurf_cpp_CDrawSurface_plotPixel_FUN_004874d0
              ((CDrawSurface *)&stack0x000000c4,100,in_stack_000000fc);
    cockpit_drawsurf_cpp_CDrawSurface_plotPixel_FUN_004874d0
              ((CDrawSurface *)&stack0x000000c8,100,in_stack_000000ec);
    cockpit_drawsurf_cpp_CDrawSurface_plotPixel_FUN_004874d0
              ((CDrawSurface *)&stack0x000000cc,100,in_stack_000000fc);
    cockpit_drawsurf_cpp_CDrawSurface_plotPixel_FUN_004874d0
              ((CDrawSurface *)&stack0x000000d0,100,iVar3);
    iVar2 = g_WindowHeight / 2 + 0x66;
    iVar3 = g_WindowHeight - iVar2;
    cockpit_drawsurf_cpp_CDrawSurface_ctor_FUN_00486ea0
              ((CDrawSurface *)&stack0x00000094,g_WindowWidth / 2 + -0xca,iVar2,0xc9,iVar3,
               (CDrawSurface *)0x0);
    cockpit_drawsurf_cpp_CDrawSurface_setColorRGB_FUN_00487220(0x80,0x80,0x80);
    cockpit_drawsurf_cpp_CDrawSurface_fillFullSurface_FUN_00488c70((CDrawSurface *)&stack0x0000009c)
    ;
    cockpit_drawsurf_cpp_CDrawSurface_setColor_FUN_00487010(7);
    cockpit_drawsurf_cpp_CDrawSurface_drawSurfaceBorder_FUN_00488530
              ((CDrawSurface *)&stack0x000000a4);
    cockpit_drawsurf_cpp_CDrawSurface_setColor_FUN_00487010(0xf9);
    cockpit_drawsurf_cpp_setCurrentFont_FUN_004874c0((CBitFont *)0x0);
    font_ptr->rendering_ready = 1;
    cockpit_drawsurf_cpp_CDrawSurface_drawTextRightAlignedPrintf_FUN_00489450
              ((CDrawSurface *)&stack0x000000b0,1,1,"%s");
    cockpit_drawsurf_cpp_CDrawSurface_drawTextRightAlignedVariantPrintf_FUN_00489520
              ((CDrawSurface *)&stack0x000000b4,199,1,0x621f15,&stack0x00000114);
    cockpit_drawsurf_cpp_CDrawSurface_drawTextCenteredPrintf_FUN_004895f0
              ((CDrawSurface *)&stack0x000000b8,100,1,0x621f18,&stack0x00000118);
    cockpit_drawsurf_cpp_CDrawSurface_drawTextRightAlignedVCenteredPrintf_FUN_004896c0
              ((CDrawSurface *)&stack0x000000bc,100,(int)y,0x621f1b,&stack0x0000011c);
    cockpit_drawsurf_cpp_CDrawSurface_drawTextCenteredBothPrintf_FUN_00489790
              ((CDrawSurface *)&stack0x000000c0,100,in_stack_00000138,0x621f1e,&stack0x00000120);
    iStack00000130 = iVar3 - in_stack_0000012c;
    cockpit_drawsurf_cpp_CDrawSurface_drawTextCenteredInBoundsPrintf_FUN_00489860
              ((CDrawSurface *)&stack0x000000c4,0x32,0x96,iStack00000130,0x621f21,&stack0x00000124);
    iVar2 = iVar3 - in_stack_0000013c;
    cockpit_drawsurf_cpp_CDrawSurface_drawTextCenteredInAreaPrintf_FUN_00489940
              ((CDrawSurface *)&stack0x000000c8,100,iVar2 + -0x32,iVar2 + 0x32,"%s");
    iVar3 = iVar3 - iVar1;
    cockpit_drawsurf_cpp_CDrawSurface_drawTextCenteredInAreaWithWidthPrintf_FUN_00489a30
              ((CDrawSurface *)&stack0x000000cc,0x32,0x96,iVar3 + -0x32,iVar3 + 0x32,"%s");
    cockpit_drawsurf_cpp_CDrawSurface_drawTextCenteredFullSurfacePrintf_FUN_00489c40
              ((CDrawSurface *)&stack0x000000d0,"%s");
    cockpit_drawsurf_cpp_CDrawSurface_setColor_FUN_00487010(0xfb);
    cockpit_drawsurf_cpp_CDrawSurface_plotPixel_FUN_004874d0((CDrawSurface *)&stack0x000000d8,1,1);
    cockpit_drawsurf_cpp_CDrawSurface_plotPixel_FUN_004874d0((CDrawSurface *)&stack0x000000dc,199,1)
    ;
    cockpit_drawsurf_cpp_CDrawSurface_plotPixel_FUN_004874d0((CDrawSurface *)&stack0x000000e0,100,1)
    ;
    cockpit_drawsurf_cpp_CDrawSurface_plotPixel_FUN_004874d0
              ((CDrawSurface *)&stack0x000000e4,100,(int)y);
    cockpit_drawsurf_cpp_CDrawSurface_plotPixel_FUN_004874d0
              ((CDrawSurface *)&stack0x000000e8,100,in_stack_00000160);
    cockpit_drawsurf_cpp_CDrawSurface_plotPixel_FUN_004874d0
              ((CDrawSurface *)&stack0x000000ec,100,in_stack_00000158);
    cockpit_drawsurf_cpp_CDrawSurface_plotPixel_FUN_004874d0
              ((CDrawSurface *)&stack0x000000f0,100,iVar2);
    cockpit_drawsurf_cpp_CDrawSurface_plotPixel_FUN_004874d0
              ((CDrawSurface *)&stack0x000000f4,100,iVar3);
    cockpit_drawsurf_cpp_CDrawSurface_setColor_FUN_00487010(4);
    cockpit_drawsurf_cpp_CDrawSurface_drawAnimatedFullSurface_FUN_00488990
              ((CDrawSurface *)&stack0x000000fc);
    return;
  }
  return;
}
