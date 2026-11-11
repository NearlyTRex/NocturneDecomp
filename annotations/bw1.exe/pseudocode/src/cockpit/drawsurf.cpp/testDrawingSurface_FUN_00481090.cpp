// Name: cockpit_drawsurf.cpp_testDrawingSurface_FUN_00481090
// Address: 00481090
// Address Range: [[00481090, 004819f0]]
// Convention: __cdecl
// Signature: void __cdecl cockpit_drawsurf_cpp_testDrawingSurface_FUN_00481090(CBitFont *test_font)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl cockpit_drawsurf_cpp_testDrawingSurface_FUN_00481090(CBitFont *test_font)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iStack0000006c;
  int iStack000000b8;
  int iStack000000cc;
  int iStack00000110;
  int iStack0000019c;
  int in_stack_00000210;
  int in_stack_00000218;
  int in_stack_00000228;
  int in_stack_00000250;
  int in_stack_000002a4;
  
  if ((0x27f < DAT_0061b498) && (0x1df < DAT_0061b49c)) {
    cockpit_drawsurf_cpp_CDrawSurface_initFromParent_FUN_0047e240
              ((CDrawSurface *)&stack0xffffff9c,DAT_0061b498 / 2,DAT_0061b49c / 2,0xc9,0x65,
               (CDrawSurface *)0x0);
    cockpit_drawsurf_cpp_CDrawSurface_initFromParent_FUN_0047e240
              ((CDrawSurface *)&stack0xffffff5c,0xc,8,0x15,0xb,(CDrawSurface *)&stack0xffffff9c);
    cockpit_drawsurf_cpp_CDrawSurface_initFromParent_FUN_0047e240
              ((CDrawSurface *)&stack0xffffff3c,0xbe,0x5f,0x14,10,(CDrawSurface *)&stack0xffffff9c);
    cockpit_drawsurf_cpp_FUN_0047e5c0(0x80,0x80,0x80);
    cockpit_drawsurf_cpp_CDrawSurface_fillFullSurface_FUN_0047ffd0((CDrawSurface *)&stack0xffffffa8)
    ;
    cockpit_drawsurf_cpp_setColor_FUN_0047e3b0(7);
    cockpit_drawsurf_cpp_CDrawSurface_drawSurfaceBorder_FUN_0047f8c0
              ((CDrawSurface *)&stack0xffffffa8);
    cockpit_drawsurf_cpp_CDrawSurface_drawClippedLine_FUN_0047ed30
              ((CDrawSurface *)&stack0xffffffa8,0,0,200,100);
    cockpit_drawsurf_cpp_CDrawSurface_drawCircle_FUN_0047ead0
              ((CDrawSurface *)&stack0xffffffbc,100,0x32,100);
    cockpit_drawsurf_cpp_CDrawSurface_drawCircle_FUN_0047ead0
              ((CDrawSurface *)&stack0xffffffcc,100,0x32,0x32);
    cockpit_drawsurf_cpp_CDrawSurface_drawCircleFromTopLeft_FUN_0047ebc0
              ((CDrawSurface *)&stack0xffffffdc,0,0,0x32);
    cockpit_drawsurf_cpp_CDrawSurface_drawCircleFromTopRight_FUN_0047ebf0
              ((CDrawSurface *)&stack0xffffffec,200,0,0x32);
    cockpit_drawsurf_cpp_CDrawSurface_drawCircleFromBottomLeft_FUN_0047ec20
              ((CDrawSurface *)&stack0xfffffffc,0,100,0x32);
    cockpit_drawsurf_cpp_CDrawSurface_drawCircleFromBottomRight_FUN_0047ec50
              ((CDrawSurface *)&stack0x0000000c,200,100,0x32);
    cockpit_drawsurf_cpp_setColor_FUN_0047e3b0(0xf9);
    cockpit_drawsurf_cpp_setCurrentFont_FUN_0047e860((CBitFont *)0x0);
    cockpit_drawsurf_cpp_CDrawSurface_drawTextRightAlignedWrapper_FUN_00480780
              ((CDrawSurface *)&stack0x0000001c,5,2,"Hello");
    cockpit_drawsurf_cpp_CDrawSurface_drawTextRightAlignedWrapper_FUN_00480780
              ((CDrawSurface *)&stack0x0000002c,-5,0x11,"Hello");
    cockpit_drawsurf_cpp_CDrawSurface_drawTextRightAlignedWrapper_FUN_00480780
              ((CDrawSurface *)&stack0x0000003c,0xb9,0x11,"Hello\nworld\n...");
    cockpit_drawsurf_cpp_CDrawSurface_drawTextCenteredWrapper_FUN_00480920
              ((CDrawSurface *)&stack0x0000004c,100,0x11,(char *)0x5db238);
    cockpit_drawsurf_cpp_CDrawSurface_drawTextCenteredInBoundsWrapper_FUN_00480b90
              ((CDrawSurface *)&stack0x0000005c,0x5c,0x6c,0x20,(char *)0x5db23a);
    cockpit_drawsurf_cpp_setCurrentFont_FUN_0047e860(test_font);
    test_font->rendering_ready = 0;
    cockpit_drawsurf_cpp_CDrawSurface_drawTextRightAlignedWrapper_FUN_00480780
              ((CDrawSurface *)&stack0x00000070,5,0x2a,"Hello");
    cockpit_drawsurf_cpp_CDrawSurface_drawTextRightAlignedWrapper_FUN_00480780
              ((CDrawSurface *)&stack0x00000080,-5,0x39,"Hello");
    cockpit_drawsurf_cpp_CDrawSurface_drawTextRightAlignedWrapper_FUN_00480780
              ((CDrawSurface *)&stack0x00000090,0xb9,0x39,"Hello");
    test_font->rendering_ready = 1;
    cockpit_drawsurf_cpp_CDrawSurface_drawTextRightAlignedWrapper_FUN_00480780
              ((CDrawSurface *)&stack0x000000a0,-5,0x48,"Hello");
    cockpit_drawsurf_cpp_CDrawSurface_drawTextRightAlignedWrapper_FUN_00480780
              ((CDrawSurface *)&stack0x000000b0,0xb9,0x48,"Hello");
    cockpit_drawsurf_cpp_CDrawSurface_drawTextCenteredWrapper_FUN_00480920
              ((CDrawSurface *)&stack0x000000c0,100,0x48,(char *)0x5db25a);
    cockpit_drawsurf_cpp_CDrawSurface_drawTextCenteredInBoundsWrapper_FUN_00480b90
              ((CDrawSurface *)&stack0x000000d0,0x5c,0x6c,0x57,(char *)0x5db25c);
    cockpit_drawsurf_cpp_setColor_FUN_0047e3b0(0xff);
    iStack0000006c = 0x48135a;
    cockpit_drawsurf_cpp_CDrawSurface_plotPixel_FUN_0047e870
              ((CDrawSurface *)&stack0x000000e4,100,0x14);
    cockpit_drawsurf_cpp_CDrawSurface_plotPixel_FUN_0047e870
              ((CDrawSurface *)&stack0x000000f0,100,0x23);
    cockpit_drawsurf_cpp_CDrawSurface_plotPixel_FUN_0047e870
              ((CDrawSurface *)&stack0x000000fc,100,0x4f);
    cockpit_drawsurf_cpp_CDrawSurface_plotPixel_FUN_0047e870
              ((CDrawSurface *)&stack0x00000108,100,0x5e);
    cockpit_drawsurf_cpp_FUN_0047e5c0(0xff,0,0);
    cockpit_drawsurf_cpp_CDrawSurface_fillFullSurface_FUN_0047ffd0((CDrawSurface *)&stack0x000000e0)
    ;
    cockpit_drawsurf_cpp_setColor_FUN_0047e3b0(0xfb);
    cockpit_drawsurf_cpp_CDrawSurface_drawSurfaceBorder_FUN_0047f8c0
              ((CDrawSurface *)&stack0x000000e0);
    cockpit_drawsurf_cpp_CDrawSurface_drawClippedLine_FUN_0047ed30
              ((CDrawSurface *)&stack0x000000e0,-0x15,-0xb,0x29,0x15);
    iStack000000b8 = 0x4813ed;
    cockpit_drawsurf_cpp_CDrawSurface_drawCircle_FUN_0047ead0
              ((CDrawSurface *)&stack0x000000f4,10,5,6);
    iStack000000cc = 0x4813fe;
    cockpit_drawsurf_cpp_FUN_0047e5c0(0,0,0xff);
    cockpit_drawsurf_cpp_CDrawSurface_fillFullSurface_FUN_0047ffd0((CDrawSurface *)&stack0x000000f0)
    ;
    cockpit_drawsurf_cpp_setColor_FUN_0047e3b0(0xfb);
    cockpit_drawsurf_cpp_CDrawSurface_drawSurfaceBorder_FUN_0047f8c0
              ((CDrawSurface *)&stack0x000000f0);
    cockpit_drawsurf_cpp_CDrawSurface_drawClippedLine_FUN_0047ed30
              ((CDrawSurface *)&stack0x000000f0,0,0,0x13,9);
    iVar2 = DAT_0061b49c / 2 + 0x66;
    iVar3 = DAT_0061b49c - iVar2;
    iVar1 = test_font->current_line_height;
    cockpit_drawsurf_cpp_CDrawSurface_initFromParent_FUN_0047e240
              ((CDrawSurface *)&stack0x00000184,DAT_0061b498 / 2,iVar2,0xc9,iVar3,
               (CDrawSurface *)0x0);
    cockpit_drawsurf_cpp_FUN_0047e5c0(0x80,0x80,0x80);
    cockpit_drawsurf_cpp_CDrawSurface_fillFullSurface_FUN_0047ffd0((CDrawSurface *)&stack0x00000190)
    ;
    cockpit_drawsurf_cpp_setColor_FUN_0047e3b0(7);
    cockpit_drawsurf_cpp_CDrawSurface_drawSurfaceBorder_FUN_0047f8c0
              ((CDrawSurface *)&stack0x00000190);
    cockpit_drawsurf_cpp_setColor_FUN_0047e3b0(0xf9);
    cockpit_drawsurf_cpp_setCurrentFont_FUN_0047e860(test_font);
    test_font->rendering_ready = 1;
    cockpit_drawsurf_cpp_FUN_004807b0();
    cockpit_drawsurf_cpp_FUN_00480880();
    cockpit_drawsurf_cpp_FUN_00480950();
    cockpit_drawsurf_cpp_FUN_00480a20();
    cockpit_drawsurf_cpp_FUN_00480af0();
    cockpit_drawsurf_cpp_FUN_00480bc0();
    cockpit_drawsurf_cpp_FUN_00480ca0();
    iVar3 = iVar3 - iVar1;
    cockpit_drawsurf_cpp_CDrawSurface_drawTextCenteredInAreaWithWidthPrintf_FUN_00480d90
              ((CDrawSurface *)&stack0x00000190,0x32,0x96,iVar3 + -0x32,iVar3 + 0x32,
               (char *)0x5db273);
    iStack00000110 = 0x481681;
    cockpit_drawsurf_cpp_CDrawSurface_drawTextCenteredFullSurfacePrintf_FUN_00480fa0
              ((CDrawSurface *)&stack0x000001a8,(char *)0x5db276);
    cockpit_drawsurf_cpp_setColor_FUN_0047e3b0(0xfb);
    cockpit_drawsurf_cpp_CDrawSurface_plotPixel_FUN_0047e870((CDrawSurface *)&stack0x000001b0,1,1);
    cockpit_drawsurf_cpp_CDrawSurface_plotPixel_FUN_0047e870((CDrawSurface *)&stack0x000001bc,199,1)
    ;
    cockpit_drawsurf_cpp_CDrawSurface_plotPixel_FUN_0047e870((CDrawSurface *)&stack0x000001c8,100,1)
    ;
    cockpit_drawsurf_cpp_CDrawSurface_plotPixel_FUN_0047e870
              ((CDrawSurface *)&stack0x000001d4,100,iVar1 + 1);
    cockpit_drawsurf_cpp_CDrawSurface_plotPixel_FUN_0047e870
              ((CDrawSurface *)&stack0x000001e0,100,in_stack_00000218);
    cockpit_drawsurf_cpp_CDrawSurface_plotPixel_FUN_0047e870
              ((CDrawSurface *)&stack0x000001ec,100,in_stack_00000210);
    cockpit_drawsurf_cpp_CDrawSurface_plotPixel_FUN_0047e870
              ((CDrawSurface *)&stack0x000001f8,100,in_stack_00000228);
    cockpit_drawsurf_cpp_CDrawSurface_plotPixel_FUN_0047e870
              ((CDrawSurface *)&stack0x00000204,100,iVar3);
    iVar2 = DAT_0061b49c / 2 + 0x66;
    iVar3 = DAT_0061b49c - iVar2;
    cockpit_drawsurf_cpp_CDrawSurface_initFromParent_FUN_0047e240
              ((CDrawSurface *)&stack0x000001d0,DAT_0061b498 / 2 + -0xca,iVar2,0xc9,iVar3,
               (CDrawSurface *)0x0);
    cockpit_drawsurf_cpp_FUN_0047e5c0(0x80,0x80,0x80);
    cockpit_drawsurf_cpp_CDrawSurface_fillFullSurface_FUN_0047ffd0((CDrawSurface *)&stack0x000001dc)
    ;
    cockpit_drawsurf_cpp_setColor_FUN_0047e3b0(7);
    cockpit_drawsurf_cpp_CDrawSurface_drawSurfaceBorder_FUN_0047f8c0
              ((CDrawSurface *)&stack0x000001dc);
    cockpit_drawsurf_cpp_setColor_FUN_0047e3b0(0xf9);
    cockpit_drawsurf_cpp_setCurrentFont_FUN_0047e860((CBitFont *)0x0);
    test_font->rendering_ready = 1;
    cockpit_drawsurf_cpp_FUN_004807b0();
    cockpit_drawsurf_cpp_FUN_00480880();
    cockpit_drawsurf_cpp_FUN_00480950();
    cockpit_drawsurf_cpp_FUN_00480a20();
    cockpit_drawsurf_cpp_FUN_00480af0();
    cockpit_drawsurf_cpp_FUN_00480bc0();
    cockpit_drawsurf_cpp_FUN_00480ca0();
    iVar2 = iVar3 - iVar1;
    cockpit_drawsurf_cpp_CDrawSurface_drawTextCenteredInAreaWithWidthPrintf_FUN_00480d90
              ((CDrawSurface *)&stack0x000001dc,0x32,0x96,iVar2 + -0x32,iVar2 + 0x32,
               (char *)0x5db28e);
    iStack0000019c = 0x48192b;
    cockpit_drawsurf_cpp_CDrawSurface_drawTextCenteredFullSurfacePrintf_FUN_00480fa0
              ((CDrawSurface *)&stack0x000001f4,(char *)0x5db291);
    cockpit_drawsurf_cpp_setColor_FUN_0047e3b0(0xfb);
    cockpit_drawsurf_cpp_CDrawSurface_plotPixel_FUN_0047e870((CDrawSurface *)&stack0x000001fc,1,1);
    cockpit_drawsurf_cpp_CDrawSurface_plotPixel_FUN_0047e870((CDrawSurface *)&stack0x00000208,199,1)
    ;
    cockpit_drawsurf_cpp_CDrawSurface_plotPixel_FUN_0047e870((CDrawSurface *)&stack0x00000214,100,1)
    ;
    cockpit_drawsurf_cpp_CDrawSurface_plotPixel_FUN_0047e870
              ((CDrawSurface *)&stack0x00000220,100,iVar1 + 1);
    cockpit_drawsurf_cpp_CDrawSurface_plotPixel_FUN_0047e870
              ((CDrawSurface *)&stack0x0000022c,100,in_stack_000002a4);
    cockpit_drawsurf_cpp_CDrawSurface_plotPixel_FUN_0047e870
              ((CDrawSurface *)&stack0x00000238,100,in_stack_000002a4);
    cockpit_drawsurf_cpp_CDrawSurface_plotPixel_FUN_0047e870
              ((CDrawSurface *)&stack0x00000244,100,iVar3 - in_stack_00000250);
    cockpit_drawsurf_cpp_CDrawSurface_plotPixel_FUN_0047e870
              ((CDrawSurface *)&stack0x00000250,100,iVar2);
    cockpit_drawsurf_cpp_setColor_FUN_0047e3b0(4);
    cockpit_drawsurf_cpp_FUN_0047fcf0((CDrawSurface *)&stack0x0000025c);
    return;
  }
  return;
}
