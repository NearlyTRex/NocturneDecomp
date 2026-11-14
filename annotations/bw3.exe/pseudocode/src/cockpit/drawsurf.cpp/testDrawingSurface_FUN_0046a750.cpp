// Name: cockpit_drawsurf.cpp_testDrawingSurface_FUN_0046a750
// Address: 0046a750
// Address Range: [[0046a750, 0046b0b0]]
// Convention: __cdecl
// Signature: void __cdecl cockpit_drawsurf_cpp_testDrawingSurface_FUN_0046a750(CBitFont *test_font)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl cockpit_drawsurf_cpp_testDrawingSurface_FUN_0046a750(CBitFont *test_font)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iStack0000006c;
  int iStack000000b8;
  int iStack000000cc;
  byte *puStack0000017c;
  int iStack00000188;
  int in_stack_00000228;
  int in_stack_00000288;
  int in_stack_00000290;
  int in_stack_000002a0;
  int in_stack_0000030c;
  int in_stack_0000032c;
  int in_stack_00000394;
  
  if ((0x27f < DAT_005fba18) && (0x1df < DAT_005fba1c)) {
    cockpit_drawsurf_cpp_CDrawSurface_initFromParent_FUN_00467900
              ((CDrawSurface *)&stack0xffffff9c,DAT_005fba18 / 2,DAT_005fba1c / 2,0xc9,0x65,
               (CDrawSurface *)0x0);
    cockpit_drawsurf_cpp_CDrawSurface_initFromParent_FUN_00467900
              ((CDrawSurface *)&stack0xffffff5c,0xc,8,0x15,0xb,(CDrawSurface *)&stack0xffffff9c);
    cockpit_drawsurf_cpp_CDrawSurface_initFromParent_FUN_00467900
              ((CDrawSurface *)&stack0xffffff3c,0xbe,0x5f,0x14,10,(CDrawSurface *)&stack0xffffff9c);
    cockpit_drawsurf_cpp_FUN_00467c80(0x80,0x80,0x80);
    cockpit_drawsurf_cpp_CDrawSurface_fillFullSurface_FUN_00469690((CDrawSurface *)&stack0xffffffa8)
    ;
    cockpit_drawsurf_cpp_setColor_FUN_00467a70(7);
    cockpit_drawsurf_cpp_CDrawSurface_drawSurfaceBorder_FUN_00468f80
              ((CDrawSurface *)&stack0xffffffa8);
    cockpit_drawsurf_cpp_CDrawSurface_drawClippedLine_FUN_004683f0
              ((CDrawSurface *)&stack0xffffffa8,0,0,200,100);
    cockpit_drawsurf_cpp_CDrawSurface_drawCircle_FUN_00468190
              ((CDrawSurface *)&stack0xffffffbc,100,0x32,100);
    cockpit_drawsurf_cpp_CDrawSurface_drawCircle_FUN_00468190
              ((CDrawSurface *)&stack0xffffffcc,100,0x32,0x32);
    cockpit_drawsurf_cpp_CDrawSurface_drawCircleFromTopLeft_FUN_00468280
              ((CDrawSurface *)&stack0xffffffdc,0,0,0x32);
    cockpit_drawsurf_cpp_CDrawSurface_drawCircleFromTopRight_FUN_004682b0
              ((CDrawSurface *)&stack0xffffffec,200,0,0x32);
    cockpit_drawsurf_cpp_CDrawSurface_drawCircleFromBottomLeft_FUN_004682e0
              ((CDrawSurface *)&stack0xfffffffc,0,100,0x32);
    cockpit_drawsurf_cpp_CDrawSurface_drawCircleFromBottomRight_FUN_00468310
              ((CDrawSurface *)&stack0x0000000c,200,100,0x32);
    cockpit_drawsurf_cpp_setColor_FUN_00467a70(0xf9);
    cockpit_drawsurf_cpp_setCurrentFont_FUN_00467f20((CBitFont *)0x0);
    cockpit_drawsurf_cpp_CDrawSurface_drawTextRightAlignedWrapper_FUN_00469e40
              ((CDrawSurface *)&stack0x0000001c,5,2,"Hello");
    cockpit_drawsurf_cpp_CDrawSurface_drawTextRightAlignedWrapper_FUN_00469e40
              ((CDrawSurface *)&stack0x0000002c,-5,0x11,"Hello");
    cockpit_drawsurf_cpp_CDrawSurface_drawTextRightAlignedWrapper_FUN_00469e40
              ((CDrawSurface *)&stack0x0000003c,0xb9,0x11,"Hello\nworld\n...");
    cockpit_drawsurf_cpp_CDrawSurface_drawTextCenteredWrapper_FUN_00469fe0
              ((CDrawSurface *)&stack0x0000004c,100,0x11,(char *)0x5bc3cf);
    cockpit_drawsurf_cpp_CDrawSurface_drawTextCenteredInBoundsWrapper_FUN_0046a250
              ((CDrawSurface *)&stack0x0000005c,0x5c,0x6c,0x20,(char *)0x5bc3d1);
    cockpit_drawsurf_cpp_setCurrentFont_FUN_00467f20(test_font);
    test_font->rendering_ready = 0;
    cockpit_drawsurf_cpp_CDrawSurface_drawTextRightAlignedWrapper_FUN_00469e40
              ((CDrawSurface *)&stack0x00000070,5,0x2a,"Hello");
    cockpit_drawsurf_cpp_CDrawSurface_drawTextRightAlignedWrapper_FUN_00469e40
              ((CDrawSurface *)&stack0x00000080,-5,0x39,"Hello");
    cockpit_drawsurf_cpp_CDrawSurface_drawTextRightAlignedWrapper_FUN_00469e40
              ((CDrawSurface *)&stack0x00000090,0xb9,0x39,"Hello");
    test_font->rendering_ready = 1;
    cockpit_drawsurf_cpp_CDrawSurface_drawTextRightAlignedWrapper_FUN_00469e40
              ((CDrawSurface *)&stack0x000000a0,-5,0x48,"Hello");
    cockpit_drawsurf_cpp_CDrawSurface_drawTextRightAlignedWrapper_FUN_00469e40
              ((CDrawSurface *)&stack0x000000b0,0xb9,0x48,"Hello");
    cockpit_drawsurf_cpp_CDrawSurface_drawTextCenteredWrapper_FUN_00469fe0
              ((CDrawSurface *)&stack0x000000c0,100,0x48,(char *)0x5bc3f1);
    cockpit_drawsurf_cpp_CDrawSurface_drawTextCenteredInBoundsWrapper_FUN_0046a250
              ((CDrawSurface *)&stack0x000000d0,0x5c,0x6c,0x57,(char *)0x5bc3f3);
    cockpit_drawsurf_cpp_setColor_FUN_00467a70(0xff);
    iStack0000006c = 0x46aa1a;
    cockpit_drawsurf_cpp_CDrawSurface_plotPixel_FUN_00467f30
              ((CDrawSurface *)&stack0x000000e4,100,0x14);
    cockpit_drawsurf_cpp_CDrawSurface_plotPixel_FUN_00467f30
              ((CDrawSurface *)&stack0x000000f0,100,0x23);
    cockpit_drawsurf_cpp_CDrawSurface_plotPixel_FUN_00467f30
              ((CDrawSurface *)&stack0x000000fc,100,0x4f);
    cockpit_drawsurf_cpp_CDrawSurface_plotPixel_FUN_00467f30
              ((CDrawSurface *)&stack0x00000108,100,0x5e);
    cockpit_drawsurf_cpp_FUN_00467c80(0xff,0,0);
    cockpit_drawsurf_cpp_CDrawSurface_fillFullSurface_FUN_00469690((CDrawSurface *)&stack0x000000e0)
    ;
    cockpit_drawsurf_cpp_setColor_FUN_00467a70(0xfb);
    cockpit_drawsurf_cpp_CDrawSurface_drawSurfaceBorder_FUN_00468f80
              ((CDrawSurface *)&stack0x000000e0);
    cockpit_drawsurf_cpp_CDrawSurface_drawClippedLine_FUN_004683f0
              ((CDrawSurface *)&stack0x000000e0,-0x15,-0xb,0x29,0x15);
    iStack000000b8 = 0x46aaad;
    cockpit_drawsurf_cpp_CDrawSurface_drawCircle_FUN_00468190
              ((CDrawSurface *)&stack0x000000f4,10,5,6);
    iStack000000cc = 0x46aabe;
    cockpit_drawsurf_cpp_FUN_00467c80(0,0,0xff);
    cockpit_drawsurf_cpp_CDrawSurface_fillFullSurface_FUN_00469690((CDrawSurface *)&stack0x000000f0)
    ;
    cockpit_drawsurf_cpp_setColor_FUN_00467a70(0xfb);
    cockpit_drawsurf_cpp_CDrawSurface_drawSurfaceBorder_FUN_00468f80
              ((CDrawSurface *)&stack0x000000f0);
    cockpit_drawsurf_cpp_CDrawSurface_drawClippedLine_FUN_004683f0
              ((CDrawSurface *)&stack0x000000f0,0,0,0x13,9);
    iVar2 = DAT_005fba1c / 2 + 0x66;
    iVar3 = DAT_005fba1c - iVar2;
    iVar1 = test_font->current_line_height;
    cockpit_drawsurf_cpp_CDrawSurface_initFromParent_FUN_00467900
              ((CDrawSurface *)&stack0x00000184,DAT_005fba18 / 2,iVar2,0xc9,iVar3,
               (CDrawSurface *)0x0);
    cockpit_drawsurf_cpp_FUN_00467c80(0x80,0x80,0x80);
    cockpit_drawsurf_cpp_CDrawSurface_fillFullSurface_FUN_00469690((CDrawSurface *)&stack0x00000190)
    ;
    cockpit_drawsurf_cpp_setColor_FUN_00467a70(7);
    cockpit_drawsurf_cpp_CDrawSurface_drawSurfaceBorder_FUN_00468f80
              ((CDrawSurface *)&stack0x00000190);
    cockpit_drawsurf_cpp_setColor_FUN_00467a70(0xf9);
    cockpit_drawsurf_cpp_setCurrentFont_FUN_00467f20(test_font);
    test_font->rendering_ready = 1;
    cockpit_drawsurf_cpp_CDrawSurface_drawTextRightAlignedPrintf_FUN_00469e70
              ((CDrawSurface *)&stack0x00000190,1,1,(char *)0x5bc3f5);
    cockpit_drawsurf_cpp_CDrawSurface_drawTextRightAlignedVariantPrintf_FUN_00469f40
              ((CDrawSurface *)&stack0x000001a0,199,1,(char *)0x5bc3f8);
    cockpit_drawsurf_cpp_CDrawSurface_drawTextCenteredPrintf_FUN_0046a010
              ((CDrawSurface *)&stack0x000001b0,100,1,(char *)0x5bc3fb);
    iVar2 = iVar1 + 1;
    cockpit_drawsurf_cpp_CDrawSurface_drawTextRightAlignedVCenteredPrintf_FUN_0046a0e0
              ((CDrawSurface *)&stack0x000001c0,100,iVar2,(char *)0x5bc3fe);
    cockpit_drawsurf_cpp_CDrawSurface_drawTextCenteredBothPrintf_FUN_0046a1b0
              ((CDrawSurface *)&stack0x000001d0,100,iVar1 * 2 + 1,(char *)0x5bc401);
    cockpit_drawsurf_cpp_CDrawSurface_drawTextCenteredInBoundsPrintf_FUN_0046a280
              ((CDrawSurface *)&stack0x000001e0,0x32,0x96,iVar3 + iVar1 * -3,(char *)0x5bc404);
    cockpit_drawsurf_cpp_CDrawSurface_drawTextCenteredInAreaPrintf_FUN_0046a360
              ((CDrawSurface *)&stack0x000001f4,100,(iVar3 - in_stack_00000228) + -0x32,
               (iVar3 - in_stack_00000228) + 0x32,(char *)0x5bc407);
    puStack0000017c = &stack0x00000228;
    iVar3 = iVar3 - iVar1;
    cockpit_drawsurf_cpp_CDrawSurface_drawTextCenteredInAreaWithWidthPrintf_FUN_0046a450
              ((CDrawSurface *)&stack0x00000208,0x32,0x96,iVar3 + -0x32,iVar3 + 0x32,
               (char *)0x5bc40a);
    iStack00000188 = 0x46ad41;
    cockpit_drawsurf_cpp_CDrawSurface_drawTextCenteredFullSurfacePrintf_FUN_0046a660
              ((CDrawSurface *)&stack0x00000220,(char *)0x5bc40d);
    cockpit_drawsurf_cpp_setColor_FUN_00467a70(0xfb);
    cockpit_drawsurf_cpp_CDrawSurface_plotPixel_FUN_00467f30((CDrawSurface *)&stack0x00000228,1,1);
    cockpit_drawsurf_cpp_CDrawSurface_plotPixel_FUN_00467f30((CDrawSurface *)&stack0x00000234,199,1)
    ;
    cockpit_drawsurf_cpp_CDrawSurface_plotPixel_FUN_00467f30((CDrawSurface *)&stack0x00000240,100,1)
    ;
    cockpit_drawsurf_cpp_CDrawSurface_plotPixel_FUN_00467f30
              ((CDrawSurface *)&stack0x0000024c,100,iVar2);
    cockpit_drawsurf_cpp_CDrawSurface_plotPixel_FUN_00467f30
              ((CDrawSurface *)&stack0x00000258,100,in_stack_00000290);
    cockpit_drawsurf_cpp_CDrawSurface_plotPixel_FUN_00467f30
              ((CDrawSurface *)&stack0x00000264,100,in_stack_00000288);
    cockpit_drawsurf_cpp_CDrawSurface_plotPixel_FUN_00467f30
              ((CDrawSurface *)&stack0x00000270,100,in_stack_000002a0);
    cockpit_drawsurf_cpp_CDrawSurface_plotPixel_FUN_00467f30
              ((CDrawSurface *)&stack0x0000027c,100,iVar3);
    iVar3 = DAT_005fba1c / 2 + 0x66;
    iVar4 = DAT_005fba1c - iVar3;
    cockpit_drawsurf_cpp_CDrawSurface_initFromParent_FUN_00467900
              ((CDrawSurface *)&stack0x00000248,DAT_005fba18 / 2 + -0xca,iVar3,0xc9,iVar4,
               (CDrawSurface *)0x0);
    cockpit_drawsurf_cpp_FUN_00467c80(0x80,0x80,0x80);
    cockpit_drawsurf_cpp_CDrawSurface_fillFullSurface_FUN_00469690((CDrawSurface *)&stack0x00000254)
    ;
    cockpit_drawsurf_cpp_setColor_FUN_00467a70(7);
    cockpit_drawsurf_cpp_CDrawSurface_drawSurfaceBorder_FUN_00468f80
              ((CDrawSurface *)&stack0x00000254);
    cockpit_drawsurf_cpp_setColor_FUN_00467a70(0xf9);
    cockpit_drawsurf_cpp_setCurrentFont_FUN_00467f20((CBitFont *)0x0);
    test_font->rendering_ready = 1;
    cockpit_drawsurf_cpp_CDrawSurface_drawTextRightAlignedPrintf_FUN_00469e70
              ((CDrawSurface *)&stack0x00000254,1,1,(char *)0x5bc410);
    cockpit_drawsurf_cpp_CDrawSurface_drawTextRightAlignedVariantPrintf_FUN_00469f40
              ((CDrawSurface *)&stack0x00000264,199,1,(char *)0x5bc413);
    cockpit_drawsurf_cpp_CDrawSurface_drawTextCenteredPrintf_FUN_0046a010
              ((CDrawSurface *)&stack0x00000274,100,1,(char *)0x5bc416);
    cockpit_drawsurf_cpp_CDrawSurface_drawTextRightAlignedVCenteredPrintf_FUN_0046a0e0
              ((CDrawSurface *)&stack0x00000284,100,iVar2,(char *)0x5bc419);
    cockpit_drawsurf_cpp_CDrawSurface_drawTextCenteredBothPrintf_FUN_0046a1b0
              ((CDrawSurface *)&stack0x00000294,100,in_stack_0000030c,(char *)0x5bc41c);
    cockpit_drawsurf_cpp_CDrawSurface_drawTextCenteredInBoundsPrintf_FUN_0046a280
              ((CDrawSurface *)&stack0x000002a4,0x32,0x96,iVar4 - in_stack_0000030c,(char *)0x5bc41f
              );
    in_stack_0000032c = iVar4 - in_stack_0000032c;
    cockpit_drawsurf_cpp_CDrawSurface_drawTextCenteredInAreaPrintf_FUN_0046a360
              ((CDrawSurface *)&stack0x000002b8,100,in_stack_0000032c + -0x32,
               in_stack_0000032c + 0x32,(char *)0x5bc422);
    iVar4 = iVar4 - iVar1;
    cockpit_drawsurf_cpp_CDrawSurface_drawTextCenteredInAreaWithWidthPrintf_FUN_0046a450
              ((CDrawSurface *)&stack0x000002cc,0x32,0x96,iVar4 + -0x32,iVar4 + 0x32,
               (char *)0x5bc425);
    cockpit_drawsurf_cpp_CDrawSurface_drawTextCenteredFullSurfacePrintf_FUN_0046a660
              ((CDrawSurface *)&stack0x000002e4,(char *)0x5bc428);
    cockpit_drawsurf_cpp_setColor_FUN_00467a70(0xfb);
    cockpit_drawsurf_cpp_CDrawSurface_plotPixel_FUN_00467f30((CDrawSurface *)&stack0x000002ec,1,1);
    cockpit_drawsurf_cpp_CDrawSurface_plotPixel_FUN_00467f30((CDrawSurface *)&stack0x000002f8,199,1)
    ;
    cockpit_drawsurf_cpp_CDrawSurface_plotPixel_FUN_00467f30((CDrawSurface *)&stack0x00000304,100,1)
    ;
    cockpit_drawsurf_cpp_CDrawSurface_plotPixel_FUN_00467f30
              ((CDrawSurface *)&stack0x00000310,100,iVar2);
    cockpit_drawsurf_cpp_CDrawSurface_plotPixel_FUN_00467f30
              ((CDrawSurface *)&stack0x0000031c,100,in_stack_00000394);
    cockpit_drawsurf_cpp_CDrawSurface_plotPixel_FUN_00467f30
              ((CDrawSurface *)&stack0x00000328,100,in_stack_00000394);
    cockpit_drawsurf_cpp_CDrawSurface_plotPixel_FUN_00467f30
              ((CDrawSurface *)&stack0x00000334,100,in_stack_0000032c);
    cockpit_drawsurf_cpp_CDrawSurface_plotPixel_FUN_00467f30
              ((CDrawSurface *)&stack0x00000340,100,iVar4);
    cockpit_drawsurf_cpp_setColor_FUN_00467a70(4);
    cockpit_drawsurf_cpp_FUN_004693b0((CDrawSurface *)&stack0x0000034c);
    return;
  }
  return;
}
