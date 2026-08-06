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
  int iVar4;
  int iStack00000008;
  int iStack00000094;
  int iStack00000104;
  int in_stack_00000108;
  int in_stack_00000110;
  int in_stack_00000120;
  int in_stack_0000013c;
  int iStack00000140;
  int in_stack_00000148;
  int in_stack_0000014c;
  int in_stack_0000019c;
  
  if ((0x27f < g_WindowWidth) && (0x1df < g_WindowHeight)) {
    cockpit_drawsurf_cpp_CDrawSurface_initFromParent_FUN_0045b480
              ((CDrawSurface *)&stack0xffffff9c,g_WindowWidth / 2,g_WindowHeight / 2,0xc9,0x65,
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
    iVar2 = g_WindowHeight / 2 + 0x66;
    iVar4 = g_WindowHeight - iVar2;
    iVar1 = test_font->current_line_height;
    cockpit_drawsurf_cpp_CDrawSurface_initFromParent_FUN_0045b480
              ((CDrawSurface *)&stack0x0000007c,g_WindowWidth / 2,iVar2,0xc9,iVar4,
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
    cockpit_drawsurf_cpp_CDrawSurface_drawTextRightAlignedPrintf_FUN_0045da90
              ((CDrawSurface *)&stack0x00000088,1,1,"%s");
    cockpit_drawsurf_cpp_CDrawSurface_drawTextRightAlignedVariantPrintf_FUN_0045db60
              ((CDrawSurface *)&stack0x00000088,199,1,"%s");
    cockpit_drawsurf_cpp_CDrawSurface_drawTextCenteredPrintf_FUN_0045dc30
              ((CDrawSurface *)&stack0x00000088,100,1,"%s");
    iVar2 = iVar1 + 1;
    cockpit_drawsurf_cpp_CDrawSurface_drawTextRightAlignedVCenteredPrintf_FUN_0045dd00
              ((CDrawSurface *)&stack0x00000088,100,iVar2,"%s");
    iVar3 = iVar1 * 2;
    cockpit_drawsurf_cpp_CDrawSurface_drawTextCenteredBothPrintf_FUN_0045ddd0
              ((CDrawSurface *)&stack0x00000088,100,iVar3 + 1,"%s");
    cockpit_drawsurf_cpp_CDrawSurface_drawTextCenteredInBoundsPrintf_FUN_0045dea0
              ((CDrawSurface *)&stack0x00000088,0x32,0x96,iVar4 + iVar1 * -3,"%s");
    cockpit_drawsurf_cpp_CDrawSurface_drawTextCenteredInAreaPrintf_FUN_0045df80
              ((CDrawSurface *)&stack0x00000088,100,(iVar4 - iVar3) + -0x32,(iVar4 - iVar3) + 0x32,
               "%s");
    iVar4 = iVar4 - iVar1;
    cockpit_drawsurf_cpp_CDrawSurface_drawTextCenteredInAreaWithWidthPrintf_FUN_0045e070
              ((CDrawSurface *)&stack0x00000088,0x32,0x96,iVar4 + -0x32,iVar4 + 0x32,"%s");
    iStack00000008 = 0x45e961;
    cockpit_drawsurf_cpp_CDrawSurface_drawTextCenteredFullSurfacePrintf_FUN_0045e280
              ((CDrawSurface *)&stack0x000000a0,"%s");
    cockpit_drawsurf_cpp_setColor_FUN_0045b5f0(0xfb);
    cockpit_drawsurf_cpp_CDrawSurface_plotPixel_FUN_0045bab0((CDrawSurface *)&stack0x000000a8,1,1);
    cockpit_drawsurf_cpp_CDrawSurface_plotPixel_FUN_0045bab0((CDrawSurface *)&stack0x000000b4,199,1)
    ;
    cockpit_drawsurf_cpp_CDrawSurface_plotPixel_FUN_0045bab0((CDrawSurface *)&stack0x000000c0,100,1)
    ;
    cockpit_drawsurf_cpp_CDrawSurface_plotPixel_FUN_0045bab0
              ((CDrawSurface *)&stack0x000000cc,100,iVar2);
    cockpit_drawsurf_cpp_CDrawSurface_plotPixel_FUN_0045bab0
              ((CDrawSurface *)&stack0x000000d8,100,in_stack_00000110);
    cockpit_drawsurf_cpp_CDrawSurface_plotPixel_FUN_0045bab0
              ((CDrawSurface *)&stack0x000000e4,100,in_stack_00000108);
    cockpit_drawsurf_cpp_CDrawSurface_plotPixel_FUN_0045bab0
              ((CDrawSurface *)&stack0x000000f0,100,in_stack_00000120);
    cockpit_drawsurf_cpp_CDrawSurface_plotPixel_FUN_0045bab0
              ((CDrawSurface *)&stack0x000000fc,100,iVar4);
    iVar3 = g_WindowHeight / 2 + 0x66;
    iVar4 = g_WindowHeight - iVar3;
    cockpit_drawsurf_cpp_CDrawSurface_initFromParent_FUN_0045b480
              ((CDrawSurface *)&stack0x000000c8,g_WindowWidth / 2 + -0xca,iVar3,0xc9,iVar4,
               (CDrawSurface *)0x0);
    cockpit_drawsurf_cpp_setColorRGB_FUN_0045b800(0x80,0x80,0x80);
    cockpit_drawsurf_cpp_CDrawSurface_fillFullSurface_FUN_0045d2b0((CDrawSurface *)&stack0x000000d4)
    ;
    cockpit_drawsurf_cpp_setColor_FUN_0045b5f0(7);
    cockpit_drawsurf_cpp_CDrawSurface_drawSurfaceBorder_FUN_0045cb70
              ((CDrawSurface *)&stack0x000000d4);
    cockpit_drawsurf_cpp_setColor_FUN_0045b5f0(0xf9);
    cockpit_drawsurf_cpp_setCurrentFont_FUN_0045baa0((CBitFont *)0x0);
    test_font->rendering_ready = 1;
    cockpit_drawsurf_cpp_CDrawSurface_drawTextRightAlignedPrintf_FUN_0045da90
              ((CDrawSurface *)&stack0x000000d4,1,1,"%s");
    cockpit_drawsurf_cpp_CDrawSurface_drawTextRightAlignedVariantPrintf_FUN_0045db60
              ((CDrawSurface *)&stack0x000000d4,199,1,"%s");
    cockpit_drawsurf_cpp_CDrawSurface_drawTextCenteredPrintf_FUN_0045dc30
              ((CDrawSurface *)&stack0x000000d4,100,1,"%s");
    cockpit_drawsurf_cpp_CDrawSurface_drawTextRightAlignedVCenteredPrintf_FUN_0045dd00
              ((CDrawSurface *)&stack0x000000d4,100,iVar2,"%s");
    cockpit_drawsurf_cpp_CDrawSurface_drawTextCenteredBothPrintf_FUN_0045ddd0
              ((CDrawSurface *)&stack0x000000d4,100,in_stack_0000014c,"%s");
    iStack00000140 = iVar4 - in_stack_0000013c;
    cockpit_drawsurf_cpp_CDrawSurface_drawTextCenteredInBoundsPrintf_FUN_0045dea0
              ((CDrawSurface *)&stack0x000000d4,0x32,0x96,iStack00000140,"%s");
    iVar3 = iVar4 - in_stack_00000148;
    cockpit_drawsurf_cpp_CDrawSurface_drawTextCenteredInAreaPrintf_FUN_0045df80
              ((CDrawSurface *)&stack0x000000d4,100,iVar3 + -0x32,iVar3 + 0x32,"%s");
    iVar4 = iVar4 - iVar1;
    cockpit_drawsurf_cpp_CDrawSurface_drawTextCenteredInAreaWithWidthPrintf_FUN_0045e070
              ((CDrawSurface *)&stack0x000000d4,0x32,0x96,iVar4 + -0x32,iVar4 + 0x32,"%s");
    iStack00000094 = 0x45ec0b;
    cockpit_drawsurf_cpp_CDrawSurface_drawTextCenteredFullSurfacePrintf_FUN_0045e280
              ((CDrawSurface *)&stack0x000000ec,"%s");
    cockpit_drawsurf_cpp_setColor_FUN_0045b5f0(0xfb);
    cockpit_drawsurf_cpp_CDrawSurface_plotPixel_FUN_0045bab0((CDrawSurface *)&stack0x000000f4,1,1);
    cockpit_drawsurf_cpp_CDrawSurface_plotPixel_FUN_0045bab0((CDrawSurface *)&stack0x00000100,199,1)
    ;
    cockpit_drawsurf_cpp_CDrawSurface_plotPixel_FUN_0045bab0((CDrawSurface *)&stack0x0000010c,100,1)
    ;
    cockpit_drawsurf_cpp_CDrawSurface_plotPixel_FUN_0045bab0
              ((CDrawSurface *)&stack0x00000118,100,iVar2);
    cockpit_drawsurf_cpp_CDrawSurface_plotPixel_FUN_0045bab0
              ((CDrawSurface *)&stack0x00000124,100,in_stack_0000019c);
    cockpit_drawsurf_cpp_CDrawSurface_plotPixel_FUN_0045bab0
              ((CDrawSurface *)&stack0x00000130,100,in_stack_0000019c);
    cockpit_drawsurf_cpp_CDrawSurface_plotPixel_FUN_0045bab0
              ((CDrawSurface *)&stack0x0000013c,100,iVar3);
    cockpit_drawsurf_cpp_CDrawSurface_plotPixel_FUN_0045bab0
              ((CDrawSurface *)&stack0x00000148,100,iVar4);
    iStack00000104 = 0x45ecb6;
    cockpit_drawsurf_cpp_setColor_FUN_0045b5f0(4);
    iStack00000104 = 0x45ecc3;
    cockpit_drawsurf_cpp_CDrawSurface_drawAnimatedFullSurface_FUN_0045cfd0
              ((CDrawSurface *)&stack0x00000154);
    return;
  }
  return;
}
