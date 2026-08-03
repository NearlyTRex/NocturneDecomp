// Name: cockpit_drawsurf.cpp_testDrawingSurface_FUN_0045e370
// Address: 0045e370
// Address Range: [[0045e370, 0045ecd0]]
// Convention: __cdecl
// Signature: void __cdecl cockpit_drawsurf_cpp_testDrawingSurface_FUN_0045e370(CBitFont *test_font)

#include "nocturne.h"

void __cdecl cockpit_drawsurf_cpp_testDrawingSurface_FUN_0045e370(CBitFont *test_font)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iStack000000c0;
  int iStack000000c4;
  int in_stack_000000e8;
  int in_stack_000000f0;
  int in_stack_00000100;
  int in_stack_0000011c;
  int iStack00000120;
  int in_stack_00000128;
  int in_stack_0000015c;
  
  if ((0x27f < DAT_005b761c) && (0x1df < DAT_005b7620)) {
    cockpit_drawsurf_cpp_CDrawSurface_initFromParent_FUN_0045b480
              ((CDrawSurface *)&stack0xffffff9c,DAT_005b761c / 2,DAT_005b7620 / 2,0xc9,0x65,
               (CDrawSurface *)0x0);
    cockpit_drawsurf_cpp_CDrawSurface_initFromParent_FUN_0045b480
              ((CDrawSurface *)&stack0xffffff5c,0xc,8,0x15,0xb,(CDrawSurface *)&stack0xffffff9c);
    cockpit_drawsurf_cpp_CDrawSurface_initFromParent_FUN_0045b480
              ((CDrawSurface *)&stack0xffffff3c,0xbe,0x5f,0x14,10,(CDrawSurface *)&stack0xffffff9c);
    cockpit_drawsurf_cpp_setColorRGB_FUN_0045b800(0x80,0x80,0x80);
    cockpit_drawsurf_cpp_CDrawSurface_fillFullSurface_FUN_0045d2b0((CDrawSurface *)&stack0xffffffa8)
    ;
    cockpit_drawsurf_cpp_setColor_FUN_0045b5f0(7);
    cockpit_drawsurf_cpp_CDrawSurface_drawSurfaceBorder_FUN_0045cb70
              ((CDrawSurface *)&stack0xffffffa8);
    cockpit_drawsurf_cpp_CDrawSurface_drawClippedLine_FUN_0045bfb0
              ((CDrawSurface *)&stack0xffffffa8,0,0,200,100);
    cockpit_drawsurf_cpp_CDrawSurface_drawCircle_FUN_0045bd50
              ((CDrawSurface *)&stack0xffffffbc,100,0x32,100);
    cockpit_drawsurf_cpp_CDrawSurface_drawCircle_FUN_0045bd50
              ((CDrawSurface *)&stack0xffffffcc,100,0x32,0x32);
    cockpit_drawsurf_cpp_CDrawSurface_drawCircleFromTopLeft_FUN_0045be40
              ((CDrawSurface *)&stack0xffffffdc,0,0,0x32);
    cockpit_drawsurf_cpp_CDrawSurface_drawCircleFromTopRight_FUN_0045be70
              ((CDrawSurface *)&stack0xffffffdc,200,0,0x32);
    cockpit_drawsurf_cpp_CDrawSurface_drawCircleFromBottomLeft_FUN_0045bea0
              ((CDrawSurface *)&stack0xffffffdc,0,100,0x32);
    cockpit_drawsurf_cpp_CDrawSurface_drawCircleFromBottomRight_FUN_0045bed0
              ((CDrawSurface *)&stack0xffffffdc,200,100,0x32);
    cockpit_drawsurf_cpp_setColor_FUN_0045b5f0(0xf9);
    cockpit_drawsurf_cpp_setCurrentFont_FUN_0045baa0((CBitFont *)0x0);
    cockpit_drawsurf_cpp_CDrawSurface_drawTextRightAlignedWrapper_FUN_0045da60
              ((CDrawSurface *)&stack0xffffffdc,5,2,"Hello");
    cockpit_drawsurf_cpp_CDrawSurface_drawTextRightAlignedWrapper_FUN_0045da60
              ((CDrawSurface *)&stack0xffffffdc,-5,0x11,"Hello");
    cockpit_drawsurf_cpp_CDrawSurface_drawTextRightAlignedWrapper_FUN_0045da60
              ((CDrawSurface *)&stack0xffffffdc,0xb9,0x11,"Hello\nworld\n...");
    cockpit_drawsurf_cpp_CDrawSurface_drawTextCenteredWrapper_FUN_0045dc00
              ((CDrawSurface *)&stack0xffffffdc,100,0x11,"+");
    cockpit_drawsurf_cpp_CDrawSurface_drawTextCenteredInBoundsWrapper_FUN_0045de70
              ((CDrawSurface *)&stack0xffffffdc,0x5c,0x6c,0x20,"+");
    cockpit_drawsurf_cpp_setCurrentFont_FUN_0045baa0(test_font);
    test_font->rendering_ready = 0;
    cockpit_drawsurf_cpp_CDrawSurface_drawTextRightAlignedWrapper_FUN_0045da60
              ((CDrawSurface *)&stack0xffffffdc,5,0x2a,"Hello");
    cockpit_drawsurf_cpp_CDrawSurface_drawTextRightAlignedWrapper_FUN_0045da60
              ((CDrawSurface *)&stack0xffffffdc,-5,0x39,"Hello");
    cockpit_drawsurf_cpp_CDrawSurface_drawTextRightAlignedWrapper_FUN_0045da60
              ((CDrawSurface *)&stack0xffffffdc,0xb9,0x39,"Hello");
    test_font->rendering_ready = 1;
    cockpit_drawsurf_cpp_CDrawSurface_drawTextRightAlignedWrapper_FUN_0045da60
              ((CDrawSurface *)&stack0xffffffdc,-5,0x48,"Hello");
    cockpit_drawsurf_cpp_CDrawSurface_drawTextRightAlignedWrapper_FUN_0045da60
              ((CDrawSurface *)&stack0xffffffdc,0xb9,0x48,"Hello");
    cockpit_drawsurf_cpp_CDrawSurface_drawTextCenteredWrapper_FUN_0045dc00
              ((CDrawSurface *)&stack0xffffffdc,100,0x48,"+");
    cockpit_drawsurf_cpp_CDrawSurface_drawTextCenteredInBoundsWrapper_FUN_0045de70
              ((CDrawSurface *)&stack0xffffffdc,0x5c,0x6c,0x57,"+");
    cockpit_drawsurf_cpp_setColor_FUN_0045b5f0(0xff);
    cockpit_drawsurf_cpp_CDrawSurface_plotPixel_FUN_0045bab0
              ((CDrawSurface *)&stack0xffffffdc,100,0x14);
    cockpit_drawsurf_cpp_CDrawSurface_plotPixel_FUN_0045bab0
              ((CDrawSurface *)&stack0xffffffe8,100,0x23);
    cockpit_drawsurf_cpp_CDrawSurface_plotPixel_FUN_0045bab0
              ((CDrawSurface *)&stack0xfffffff4,100,0x4f);
    cockpit_drawsurf_cpp_CDrawSurface_plotPixel_FUN_0045bab0
              ((CDrawSurface *)&stack0x00000000,100,0x5e);
    cockpit_drawsurf_cpp_setColorRGB_FUN_0045b800(0xff,0,0);
    cockpit_drawsurf_cpp_CDrawSurface_fillFullSurface_FUN_0045d2b0((CDrawSurface *)&stack0xffffffd8)
    ;
    cockpit_drawsurf_cpp_setColor_FUN_0045b5f0(0xfb);
    cockpit_drawsurf_cpp_CDrawSurface_drawSurfaceBorder_FUN_0045cb70
              ((CDrawSurface *)&stack0xffffffd8);
    cockpit_drawsurf_cpp_CDrawSurface_drawClippedLine_FUN_0045bfb0
              ((CDrawSurface *)&stack0xffffffd8,-0x15,-0xb,0x29,0x15);
    cockpit_drawsurf_cpp_CDrawSurface_drawCircle_FUN_0045bd50
              ((CDrawSurface *)&stack0xffffffec,10,5,6);
    cockpit_drawsurf_cpp_setColorRGB_FUN_0045b800(0,0,0xff);
    cockpit_drawsurf_cpp_CDrawSurface_fillFullSurface_FUN_0045d2b0((CDrawSurface *)&stack0xffffffe8)
    ;
    cockpit_drawsurf_cpp_setColor_FUN_0045b5f0(0xfb);
    cockpit_drawsurf_cpp_CDrawSurface_drawSurfaceBorder_FUN_0045cb70
              ((CDrawSurface *)&stack0xffffffe8);
    cockpit_drawsurf_cpp_CDrawSurface_drawClippedLine_FUN_0045bfb0
              ((CDrawSurface *)&stack0xffffffe8,0,0,0x13,9);
    iVar2 = DAT_005b7620 / 2 + 0x66;
    iVar3 = DAT_005b7620 - iVar2;
    iVar1 = test_font->current_line_height;
    cockpit_drawsurf_cpp_CDrawSurface_initFromParent_FUN_0045b480
              ((CDrawSurface *)&stack0x0000007c,DAT_005b761c / 2,iVar2,0xc9,iVar3,
               (CDrawSurface *)0x0);
    cockpit_drawsurf_cpp_setColorRGB_FUN_0045b800(0x80,0x80,0x80);
    cockpit_drawsurf_cpp_CDrawSurface_fillFullSurface_FUN_0045d2b0((CDrawSurface *)&stack0x00000088)
    ;
    cockpit_drawsurf_cpp_setColor_FUN_0045b5f0(7);
    cockpit_drawsurf_cpp_CDrawSurface_drawSurfaceBorder_FUN_0045cb70
              ((CDrawSurface *)&stack0x00000088);
    cockpit_drawsurf_cpp_setColor_FUN_0045b5f0(0xf9);
    cockpit_drawsurf_cpp_setCurrentFont_FUN_0045baa0(test_font);
    test_font->rendering_ready = 1;
    cockpit_drawsurf_cpp_CDrawSurface_drawTextRightAlignedPrintf_FUN_0045da90();
    cockpit_drawsurf_cpp_CDrawSurface_drawTextRightAlignedVariantPrintf_FUN_0045db60();
    cockpit_drawsurf_cpp_CDrawSurface_drawTextCenteredPrintf_FUN_0045dc30();
    cockpit_drawsurf_cpp_CDrawSurface_drawTextRightAlignedVCenteredPrintf_FUN_0045dd00();
    iStack000000c0 = iVar1 * 2 + 1;
    cockpit_drawsurf_cpp_CDrawSurface_drawTextCenteredBothPrintf_FUN_0045ddd0();
    cockpit_drawsurf_cpp_CDrawSurface_drawTextCenteredInBoundsPrintf_FUN_0045dea0();
    cockpit_drawsurf_cpp_CDrawSurface_drawTextCenteredInAreaPrintf_FUN_0045df80();
    cockpit_drawsurf_cpp_CDrawSurface_drawTextCenteredInAreaWithWidthPrintf_FUN_0045e070();
    cockpit_drawsurf_cpp_CDrawSurface_drawTextCenteredFullSurfacePrintf_FUN_0045e280();
    cockpit_drawsurf_cpp_setColor_FUN_0045b5f0(0xfb);
    cockpit_drawsurf_cpp_CDrawSurface_plotPixel_FUN_0045bab0((CDrawSurface *)&stack0x00000088,1,1);
    cockpit_drawsurf_cpp_CDrawSurface_plotPixel_FUN_0045bab0((CDrawSurface *)&stack0x00000094,199,1)
    ;
    cockpit_drawsurf_cpp_CDrawSurface_plotPixel_FUN_0045bab0((CDrawSurface *)&stack0x000000a0,100,1)
    ;
    cockpit_drawsurf_cpp_CDrawSurface_plotPixel_FUN_0045bab0
              ((CDrawSurface *)&stack0x000000ac,100,iVar1 + 1);
    cockpit_drawsurf_cpp_CDrawSurface_plotPixel_FUN_0045bab0
              ((CDrawSurface *)&stack0x000000b8,100,in_stack_000000f0);
    cockpit_drawsurf_cpp_CDrawSurface_plotPixel_FUN_0045bab0
              ((CDrawSurface *)&stack0x000000c4,100,in_stack_000000e8);
    cockpit_drawsurf_cpp_CDrawSurface_plotPixel_FUN_0045bab0
              ((CDrawSurface *)&stack0x000000d0,100,in_stack_00000100);
    cockpit_drawsurf_cpp_CDrawSurface_plotPixel_FUN_0045bab0
              ((CDrawSurface *)&stack0x000000dc,100,iVar3 - iVar1);
    iVar2 = DAT_005b7620 / 2 + 0x66;
    iVar3 = DAT_005b7620 - iVar2;
    cockpit_drawsurf_cpp_CDrawSurface_initFromParent_FUN_0045b480
              ((CDrawSurface *)&stack0x000000a8,DAT_005b761c / 2 + -0xca,iVar2,0xc9,iVar3,
               (CDrawSurface *)0x0);
    cockpit_drawsurf_cpp_setColorRGB_FUN_0045b800(0x80,0x80,0x80);
    cockpit_drawsurf_cpp_CDrawSurface_fillFullSurface_FUN_0045d2b0((CDrawSurface *)&stack0x000000b4)
    ;
    cockpit_drawsurf_cpp_setColor_FUN_0045b5f0(7);
    cockpit_drawsurf_cpp_CDrawSurface_drawSurfaceBorder_FUN_0045cb70
              ((CDrawSurface *)&stack0x000000b4);
    cockpit_drawsurf_cpp_setColor_FUN_0045b5f0(0xf9);
    cockpit_drawsurf_cpp_setCurrentFont_FUN_0045baa0((CBitFont *)0x0);
    test_font->rendering_ready = 1;
    cockpit_drawsurf_cpp_CDrawSurface_drawTextRightAlignedPrintf_FUN_0045da90();
    cockpit_drawsurf_cpp_CDrawSurface_drawTextRightAlignedVariantPrintf_FUN_0045db60();
    cockpit_drawsurf_cpp_CDrawSurface_drawTextCenteredPrintf_FUN_0045dc30();
    cockpit_drawsurf_cpp_CDrawSurface_drawTextRightAlignedVCenteredPrintf_FUN_0045dd00();
    cockpit_drawsurf_cpp_CDrawSurface_drawTextCenteredBothPrintf_FUN_0045ddd0();
    iStack00000120 = iVar3 - in_stack_0000011c;
    cockpit_drawsurf_cpp_CDrawSurface_drawTextCenteredInBoundsPrintf_FUN_0045dea0();
    cockpit_drawsurf_cpp_CDrawSurface_drawTextCenteredInAreaPrintf_FUN_0045df80();
    cockpit_drawsurf_cpp_CDrawSurface_drawTextCenteredInAreaWithWidthPrintf_FUN_0045e070();
    cockpit_drawsurf_cpp_CDrawSurface_drawTextCenteredFullSurfacePrintf_FUN_0045e280();
    cockpit_drawsurf_cpp_setColor_FUN_0045b5f0(0xfb);
    cockpit_drawsurf_cpp_CDrawSurface_plotPixel_FUN_0045bab0((CDrawSurface *)&stack0x000000b4,1,1);
    cockpit_drawsurf_cpp_CDrawSurface_plotPixel_FUN_0045bab0((CDrawSurface *)&stack0x000000c0,199,1)
    ;
    cockpit_drawsurf_cpp_CDrawSurface_plotPixel_FUN_0045bab0((CDrawSurface *)&stack0x000000cc,100,1)
    ;
    cockpit_drawsurf_cpp_CDrawSurface_plotPixel_FUN_0045bab0
              ((CDrawSurface *)&stack0x000000d8,100,iVar1 + 1);
    cockpit_drawsurf_cpp_CDrawSurface_plotPixel_FUN_0045bab0
              ((CDrawSurface *)&stack0x000000e4,100,in_stack_0000015c);
    cockpit_drawsurf_cpp_CDrawSurface_plotPixel_FUN_0045bab0
              ((CDrawSurface *)&stack0x000000f0,100,in_stack_0000015c);
    cockpit_drawsurf_cpp_CDrawSurface_plotPixel_FUN_0045bab0
              ((CDrawSurface *)&stack0x000000fc,100,iVar3 - in_stack_00000128);
    cockpit_drawsurf_cpp_CDrawSurface_plotPixel_FUN_0045bab0
              ((CDrawSurface *)&stack0x00000108,100,iVar3 - iVar1);
    iStack000000c4 = 0x45ecb6;
    cockpit_drawsurf_cpp_setColor_FUN_0045b5f0(4);
    iStack000000c4 = 0x45ecc3;
    cockpit_drawsurf_cpp_CDrawSurface_drawAnimatedFullSurface_FUN_0045cfd0
              ((CDrawSurface *)&stack0x00000114);
    return;
  }
  return;
}
