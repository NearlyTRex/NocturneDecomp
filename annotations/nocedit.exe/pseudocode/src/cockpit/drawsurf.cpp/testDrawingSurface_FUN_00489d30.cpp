// Name: cockpit_drawsurf.cpp_testDrawingSurface_FUN_00489d30
// Address: 00489d30
// Address Range: [[00489d30, 0048a690]]
// Convention: __cdecl
// Signature: void cockpit_drawsurf.cpp_testDrawingSurface_FUN_00489d30(CBitFont * test_font)
// Globals:
//   TerminatedCString s_Hello_00621eb5
//   TerminatedCString s_Hello_00621ebb
//   TerminatedCString s_Hello_world_00621ec1
//   TerminatedCString s_anon_00621ed1
//   TerminatedCString s_anon_00621ed3
//   TerminatedCString s_Hello_00621ed5
//   TerminatedCString s_Hello_00621edb
//   TerminatedCString s_Hello_00621ee1
//   TerminatedCString s_Hello_00621ee7
//   TerminatedCString s_Hello_00621eed
//   TerminatedCString s_anon_00621ef3
//   TerminatedCString s_anon_00621ef5
//   TerminatedCString s_s_00621ef7
//   TerminatedCString s_s_00621efa
//   TerminatedCString s_s_00621efd
//   TerminatedCString s_s_00621f00
//   TerminatedCString s_s_00621f03
//   TerminatedCString s_s_00621f06
//   TerminatedCString s_s_00621f09
//   TerminatedCString s_s_00621f0c
//   TerminatedCString s_s_00621f0f
//   TerminatedCString s_s_00621f12
//   TerminatedCString s_s_00621f15
//   TerminatedCString s_s_00621f18
//   TerminatedCString s_s_00621f1b
//   TerminatedCString s_s_00621f1e
//   TerminatedCString s_s_00621f21
//   TerminatedCString s_s_00621f24
//   TerminatedCString s_s_00621f27
//   TerminatedCString s_s_00621f2a
//   void* PTR_core_baron.cpp_FUN_00412b41_006703e4 = 00412b41
//   int g_WindowWidth = 0x140
//   int g_WindowHeight = 0xc8
// Function calls:
//   cockpit_drawsurf.cpp_CDrawSurface_ctor_FUN_00486ea0
//   cockpit_drawsurf.cpp_CDrawSurface_drawAnimatedFullSurface_FUN_00488990
//   cockpit_drawsurf.cpp_CDrawSurface_drawCircle_FUN_00487730
//   cockpit_drawsurf.cpp_CDrawSurface_drawCircleFromBottomLeft_FUN_00487880
//   cockpit_drawsurf.cpp_CDrawSurface_drawCircleFromBottomRight_FUN_004878b0
//   cockpit_drawsurf.cpp_CDrawSurface_drawCircleFromTopLeft_FUN_00487820
//   cockpit_drawsurf.cpp_CDrawSurface_drawCircleFromTopRight_FUN_00487850
//   cockpit_drawsurf.cpp_CDrawSurface_drawClippedLine_FUN_00487990
//   cockpit_drawsurf.cpp_CDrawSurface_drawSurfaceBorder_FUN_00488530
//   cockpit_drawsurf.cpp_CDrawSurface_drawTextCenteredBothPrintf_FUN_00489790
//   cockpit_drawsurf.cpp_CDrawSurface_drawTextCenteredFullSurfacePrintf_FUN_00489c40
//   cockpit_drawsurf.cpp_CDrawSurface_drawTextCenteredInAreaPrintf_FUN_00489940
//   cockpit_drawsurf.cpp_CDrawSurface_drawTextCenteredInAreaWithWidthPrintf_FUN_00489a30
//   cockpit_drawsurf.cpp_CDrawSurface_drawTextCenteredInBoundsPrintf_FUN_00489860
//   cockpit_drawsurf.cpp_CDrawSurface_drawTextCenteredInBoundsWrapper_FUN_00489830
//   cockpit_drawsurf.cpp_CDrawSurface_drawTextCenteredPrintf_FUN_004895f0
//   cockpit_drawsurf.cpp_CDrawSurface_drawTextCenteredWrapper_FUN_004895c0
//   cockpit_drawsurf.cpp_CDrawSurface_drawTextRightAlignedPrintf_FUN_00489450
//   cockpit_drawsurf.cpp_CDrawSurface_drawTextRightAlignedVariantPrintf_FUN_00489520
//   cockpit_drawsurf.cpp_CDrawSurface_drawTextRightAlignedVCenteredPrintf_FUN_004896c0
//   cockpit_drawsurf.cpp_CDrawSurface_drawTextRightAlignedWrapper_FUN_00489420
//   cockpit_drawsurf.cpp_CDrawSurface_fillFullSurface_FUN_00488c70
//   cockpit_drawsurf.cpp_CDrawSurface_plotPixel_FUN_004874d0
//   cockpit_drawsurf.cpp_CDrawSurface_setColor_FUN_00487010
//   cockpit_drawsurf.cpp_CDrawSurface_setColorRGB_FUN_00487220
//   cockpit_drawsurf.cpp_setCurrentFont_FUN_004874c0

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


// Assembly code:
// 00489d30: PUSH ESI
//   Label: cockpit_drawsurf.cpp_testDrawingSurface_FUN_00489d30
// 00489d31: PUSH EBP
// 00489d32: SUB ESP,0xbc
// 00489d38: MOV ESI,dword ptr [ESP + 0xc8]
//   XREF to: Stack[0x4] (READ)
// 00489d3f: MOV EDX,dword ptr [0x00679394]
//   XREF to: 00679394 (READ)
// 00489d45: CMP EDX,0x280
// 00489d4b: JL 0x00489d5b
//   XREF to: 00489d5b (CONDITIONAL_JUMP)
// 00489d4d: MOV ECX,dword ptr [0x00679398]
//   XREF to: 00679398 (READ)
// 00489d53: CMP ECX,0x1e0
// 00489d59: JGE 0x00489d64
//   XREF to: 00489d64 (CONDITIONAL_JUMP)
// 00489d5b: ADD ESP,0xbc
//   Label: LAB_00489d5b
// 00489d61: POP EBP
// 00489d62: POP ESI
// 00489d63: RET
// 00489d64: PUSH EDI
//   Label: LAB_00489d64
// 00489d65: PUSH EBX
// 00489d66: MOV EAX,EDX
// 00489d68: SAR EDX,0x1f
// 00489d6b: SUB EAX,EDX
// 00489d6d: SAR EAX,0x1
// 00489d6f: MOV EBX,EAX
// 00489d71: MOV EDX,ECX
// 00489d73: MOV EAX,ECX
// 00489d75: SAR EDX,0x1f
// 00489d78: SUB EAX,EDX
// 00489d7a: SAR EAX,0x1
// 00489d7c: PUSH 0x0
// 00489d7e: PUSH 0x65
// 00489d80: PUSH 0xc9
// 00489d85: PUSH EAX
// 00489d86: PUSH EBX
// 00489d87: LEA EAX,[ESP + 0x7c]
//   XREF to: Stack[-0x64] (DATA)
// 00489d8b: PUSH EAX
// 00489d8c: CALL cockpit_drawsurf.cpp_CDrawSurface_ctor_FUN_00486ea0
//   XREF to: 00486ea0 (UNCONDITIONAL_CALL)
// 00489d91: ADD ESP,0x18
// 00489d94: LEA EAX,[ESP + 0x68]
//   XREF to: Stack[-0x64] (DATA)
// 00489d98: PUSH EAX
// 00489d99: PUSH 0xb
// 00489d9b: PUSH 0x15
// 00489d9d: PUSH 0x8
// 00489d9f: PUSH 0xc
// 00489da1: LEA EAX,[ESP + 0x3c]
//   XREF to: Stack[-0xa4] (DATA)
// 00489da5: PUSH EAX
// 00489da6: CALL cockpit_drawsurf.cpp_CDrawSurface_ctor_FUN_00486ea0
//   XREF to: 00486ea0 (UNCONDITIONAL_CALL)
// 00489dab: ADD ESP,0x18
// 00489dae: LEA EAX,[ESP + 0x68]
//   XREF to: Stack[-0x64] (DATA)
// 00489db2: PUSH EAX
// 00489db3: PUSH 0xa
// 00489db5: PUSH 0x14
// 00489db7: PUSH 0x5f
// 00489db9: PUSH 0xbe
// 00489dbe: LEA EAX,[ESP + 0x1c]
//   XREF to: Stack[-0xc4] (DATA)
// 00489dc2: PUSH EAX
// 00489dc3: CALL cockpit_drawsurf.cpp_CDrawSurface_ctor_FUN_00486ea0
//   XREF to: 00486ea0 (UNCONDITIONAL_CALL)
// 00489dc8: ADD ESP,0x18
// 00489dcb: PUSH 0x80
// 00489dd0: PUSH 0x80
// 00489dd5: PUSH 0x80
// 00489dda: CALL cockpit_drawsurf.cpp_CDrawSurface_setColorRGB_FUN_00487220
//   XREF to: 00487220 (UNCONDITIONAL_CALL)
// 00489ddf: ADD ESP,0xc
// 00489de2: LEA EAX,[ESP + 0x68]
//   XREF to: Stack[-0x64] (DATA)
// 00489de6: PUSH EAX
// 00489de7: CALL cockpit_drawsurf.cpp_CDrawSurface_fillFullSurface_FUN_00488c70
//   XREF to: 00488c70 (UNCONDITIONAL_CALL)
// 00489dec: ADD ESP,0x4
// 00489def: PUSH 0x7
// 00489df1: CALL cockpit_drawsurf.cpp_CDrawSurface_setColor_FUN_00487010
//   XREF to: 00487010 (UNCONDITIONAL_CALL)
// 00489df6: ADD ESP,0x4
// 00489df9: LEA EAX,[ESP + 0x68]
//   XREF to: Stack[-0x64] (DATA)
// 00489dfd: PUSH EAX
// 00489dfe: CALL cockpit_drawsurf.cpp_CDrawSurface_drawSurfaceBorder_FUN_00488530
//   XREF to: 00488530 (UNCONDITIONAL_CALL)
// 00489e03: ADD ESP,0x4
// 00489e06: PUSH 0x64
// 00489e08: PUSH 0xc8
// 00489e0d: PUSH 0x0
// 00489e0f: PUSH 0x0
// 00489e11: LEA EAX,[ESP + 0x78]
//   XREF to: Stack[-0x64] (DATA)
// 00489e15: PUSH EAX
// 00489e16: CALL cockpit_drawsurf.cpp_CDrawSurface_drawClippedLine_FUN_00487990
//   XREF to: 00487990 (UNCONDITIONAL_CALL)
// 00489e1b: ADD ESP,0x14
// 00489e1e: PUSH 0x64
// 00489e20: PUSH 0x32
// 00489e22: PUSH 0x64
// 00489e24: LEA EAX,[ESP + 0x74]
//   XREF to: Stack[-0x64] (DATA)
// 00489e28: PUSH EAX
// 00489e29: CALL cockpit_drawsurf.cpp_CDrawSurface_drawCircle_FUN_00487730
//   XREF to: 00487730 (UNCONDITIONAL_CALL)
// 00489e2e: ADD ESP,0x10
// 00489e31: PUSH 0x32
// 00489e33: PUSH 0x32
// 00489e35: PUSH 0x64
// 00489e37: LEA EAX,[ESP + 0x74]
//   XREF to: Stack[-0x64] (DATA)
// 00489e3b: PUSH EAX
// 00489e3c: CALL cockpit_drawsurf.cpp_CDrawSurface_drawCircle_FUN_00487730
//   XREF to: 00487730 (UNCONDITIONAL_CALL)
// 00489e41: ADD ESP,0x10
// 00489e44: PUSH 0x32
// 00489e46: PUSH 0x0
// 00489e48: PUSH 0x0
// 00489e4a: LEA EAX,[ESP + 0x74]
//   XREF to: Stack[-0x64] (DATA)
// 00489e4e: PUSH EAX
// 00489e4f: CALL cockpit_drawsurf.cpp_CDrawSurface_drawCircleFromTopLeft_FUN_00487820
//   XREF to: 00487820 (UNCONDITIONAL_CALL)
// 00489e54: ADD ESP,0x10
// 00489e57: PUSH 0x32
// 00489e59: PUSH 0x0
// 00489e5b: PUSH 0xc8
// 00489e60: LEA EAX,[ESP + 0x74]
//   XREF to: Stack[-0x64] (DATA)
// 00489e64: PUSH EAX
// 00489e65: CALL cockpit_drawsurf.cpp_CDrawSurface_drawCircleFromTopRight_FUN_00487850
//   XREF to: 00487850 (UNCONDITIONAL_CALL)
// 00489e6a: ADD ESP,0x10
// 00489e6d: PUSH 0x32
// 00489e6f: PUSH 0x64
// 00489e71: PUSH 0x0
// 00489e73: LEA EAX,[ESP + 0x74]
//   XREF to: Stack[-0x64] (DATA)
// 00489e77: PUSH EAX
// 00489e78: CALL cockpit_drawsurf.cpp_CDrawSurface_drawCircleFromBottomLeft_FUN_00487880
//   XREF to: 00487880 (UNCONDITIONAL_CALL)
// 00489e7d: ADD ESP,0x10
// 00489e80: PUSH 0x32
// 00489e82: PUSH 0x64
// 00489e84: PUSH 0xc8
// 00489e89: LEA EAX,[ESP + 0x74]
//   XREF to: Stack[-0x64] (DATA)
// 00489e8d: PUSH EAX
// 00489e8e: CALL cockpit_drawsurf.cpp_CDrawSurface_drawCircleFromBottomRight_FUN_004878b0
//   XREF to: 004878b0 (UNCONDITIONAL_CALL)
// 00489e93: ADD ESP,0x10
// 00489e96: PUSH 0xf9
// 00489e9b: CALL cockpit_drawsurf.cpp_CDrawSurface_setColor_FUN_00487010
//   XREF to: 00487010 (UNCONDITIONAL_CALL)
// 00489ea0: ADD ESP,0x4
// 00489ea3: PUSH 0x0
// 00489ea5: CALL cockpit_drawsurf.cpp_setCurrentFont_FUN_004874c0
//   XREF to: 004874c0 (UNCONDITIONAL_CALL)
// 00489eaa: ADD ESP,0x4
// 00489ead: PUSH 0x621eb5
//   XREF to: 00621eb5 (DATA)
// 00489eb2: PUSH 0x2
// 00489eb4: PUSH 0x5
// 00489eb6: LEA EAX,[ESP + 0x74]
//   XREF to: Stack[-0x64] (DATA)
// 00489eba: PUSH EAX
// 00489ebb: CALL cockpit_drawsurf.cpp_CDrawSurface_drawTextRightAlignedWrapper_FUN_00489420
//   XREF to: 00489420 (UNCONDITIONAL_CALL)
// 00489ec0: ADD ESP,0x10
// 00489ec3: PUSH 0x621ebb
//   XREF to: 00621ebb (DATA)
// 00489ec8: PUSH 0x11
// 00489eca: PUSH -0x5
// 00489ecc: LEA EAX,[ESP + 0x74]
//   XREF to: Stack[-0x64] (DATA)
// 00489ed0: PUSH EAX
// 00489ed1: CALL cockpit_drawsurf.cpp_CDrawSurface_drawTextRightAlignedWrapper_FUN_00489420
//   XREF to: 00489420 (UNCONDITIONAL_CALL)
// 00489ed6: ADD ESP,0x10
// 00489ed9: PUSH 0x621ec1
//   XREF to: 00621ec1 (DATA)
// 00489ede: PUSH 0x11
// 00489ee0: PUSH 0xb9
// 00489ee5: LEA EAX,[ESP + 0x74]
//   XREF to: Stack[-0x64] (DATA)
// 00489ee9: PUSH EAX
// 00489eea: CALL cockpit_drawsurf.cpp_CDrawSurface_drawTextRightAlignedWrapper_FUN_00489420
//   XREF to: 00489420 (UNCONDITIONAL_CALL)
// 00489eef: ADD ESP,0x10
// 00489ef2: PUSH 0x621ed1
//   XREF to: 00621ed1 (DATA)
// 00489ef7: PUSH 0x11
// 00489ef9: PUSH 0x64
// 00489efb: LEA EAX,[ESP + 0x74]
//   XREF to: Stack[-0x64] (DATA)
// 00489eff: PUSH EAX
// 00489f00: CALL cockpit_drawsurf.cpp_CDrawSurface_drawTextCenteredWrapper_FUN_004895c0
//   XREF to: 004895c0 (UNCONDITIONAL_CALL)
// 00489f05: ADD ESP,0x10
// 00489f08: PUSH 0x621ed3
//   XREF to: 00621ed3 (DATA)
// 00489f0d: PUSH 0x20
// 00489f0f: PUSH 0x6c
// 00489f11: PUSH 0x5c
// 00489f13: LEA EAX,[ESP + 0x78]
//   XREF to: Stack[-0x64] (DATA)
// 00489f17: PUSH EAX
// 00489f18: CALL cockpit_drawsurf.cpp_CDrawSurface_drawTextCenteredInBoundsWrapper_FUN_00489830
//   XREF to: 00489830 (UNCONDITIONAL_CALL)
// 00489f1d: ADD ESP,0x14
// 00489f20: PUSH ESI
// 00489f21: CALL cockpit_drawsurf.cpp_setCurrentFont_FUN_004874c0
//   XREF to: 004874c0 (UNCONDITIONAL_CALL)
// 00489f26: ADD ESP,0x4
// 00489f29: PUSH 0x621ed5
//   XREF to: 00621ed5 (DATA)
// 00489f2e: PUSH 0x2a
// 00489f30: PUSH 0x5
// 00489f32: LEA EAX,[ESP + 0x74]
//   XREF to: Stack[-0x64] (DATA)
// 00489f36: PUSH EAX
// 00489f37: MOV dword ptr [ESI + 0x3184],0x0
// 00489f41: CALL cockpit_drawsurf.cpp_CDrawSurface_drawTextRightAlignedWrapper_FUN_00489420
//   XREF to: 00489420 (UNCONDITIONAL_CALL)
// 00489f46: ADD ESP,0x10
// 00489f49: PUSH 0x621edb
//   XREF to: 00621edb (DATA)
// 00489f4e: PUSH 0x39
// 00489f50: PUSH -0x5
// 00489f52: LEA EAX,[ESP + 0x74]
//   XREF to: Stack[-0x64] (DATA)
// 00489f56: PUSH EAX
// 00489f57: CALL cockpit_drawsurf.cpp_CDrawSurface_drawTextRightAlignedWrapper_FUN_00489420
//   XREF to: 00489420 (UNCONDITIONAL_CALL)
// 00489f5c: ADD ESP,0x10
// 00489f5f: PUSH 0x621ee1
//   XREF to: 00621ee1 (DATA)
// 00489f64: PUSH 0x39
// 00489f66: PUSH 0xb9
// 00489f6b: LEA EAX,[ESP + 0x74]
//   XREF to: Stack[-0x64] (DATA)
// 00489f6f: PUSH EAX
// 00489f70: CALL cockpit_drawsurf.cpp_CDrawSurface_drawTextRightAlignedWrapper_FUN_00489420
//   XREF to: 00489420 (UNCONDITIONAL_CALL)
// 00489f75: ADD ESP,0x10
// 00489f78: MOV dword ptr [ESI + 0x3184],0x1
// 00489f82: PUSH 0x621ee7
//   XREF to: 00621ee7 (DATA)
// 00489f87: PUSH 0x48
// 00489f89: PUSH -0x5
// 00489f8b: LEA EAX,[ESP + 0x74]
//   XREF to: Stack[-0x64] (DATA)
// 00489f8f: PUSH EAX
// 00489f90: CALL cockpit_drawsurf.cpp_CDrawSurface_drawTextRightAlignedWrapper_FUN_00489420
//   XREF to: 00489420 (UNCONDITIONAL_CALL)
// 00489f95: ADD ESP,0x10
// 00489f98: PUSH 0x621eed
//   XREF to: 00621eed (DATA)
// 00489f9d: PUSH 0x48
// 00489f9f: PUSH 0xb9
// 00489fa4: LEA EAX,[ESP + 0x74]
//   XREF to: Stack[-0x64] (DATA)
// 00489fa8: PUSH EAX
// 00489fa9: CALL cockpit_drawsurf.cpp_CDrawSurface_drawTextRightAlignedWrapper_FUN_00489420
//   XREF to: 00489420 (UNCONDITIONAL_CALL)
// 00489fae: ADD ESP,0x10
// 00489fb1: PUSH 0x621ef3
//   XREF to: 00621ef3 (DATA)
// 00489fb6: PUSH 0x48
// 00489fb8: PUSH 0x64
// 00489fba: LEA EAX,[ESP + 0x74]
//   XREF to: Stack[-0x64] (DATA)
// 00489fbe: PUSH EAX
// 00489fbf: CALL cockpit_drawsurf.cpp_CDrawSurface_drawTextCenteredWrapper_FUN_004895c0
//   XREF to: 004895c0 (UNCONDITIONAL_CALL)
// 00489fc4: ADD ESP,0x10
// 00489fc7: PUSH 0x621ef5
//   XREF to: 00621ef5 (DATA)
// 00489fcc: PUSH 0x57
// 00489fce: PUSH 0x6c
// 00489fd0: PUSH 0x5c
// 00489fd2: LEA EAX,[ESP + 0x78]
//   XREF to: Stack[-0x64] (DATA)
// 00489fd6: PUSH EAX
// 00489fd7: CALL cockpit_drawsurf.cpp_CDrawSurface_drawTextCenteredInBoundsWrapper_FUN_00489830
//   XREF to: 00489830 (UNCONDITIONAL_CALL)
// 00489fdc: ADD ESP,0x14
// 00489fdf: PUSH 0xff
// 00489fe4: CALL cockpit_drawsurf.cpp_CDrawSurface_setColor_FUN_00487010
//   XREF to: 00487010 (UNCONDITIONAL_CALL)
// 00489fe9: ADD ESP,0x4
// 00489fec: PUSH 0x14
// 00489fee: PUSH 0x64
// 00489ff0: LEA EAX,[ESP + 0x70]
//   XREF to: Stack[-0x64] (DATA)
// 00489ff4: PUSH EAX
// 00489ff5: CALL cockpit_drawsurf.cpp_CDrawSurface_plotPixel_FUN_004874d0
//   XREF to: 004874d0 (UNCONDITIONAL_CALL)
// 00489ffa: ADD ESP,0xc
// 00489ffd: PUSH 0x23
// 00489fff: PUSH 0x64
// 0048a001: LEA EAX,[ESP + 0x70]
//   XREF to: Stack[-0x64] (DATA)
// 0048a005: PUSH EAX
// 0048a006: CALL cockpit_drawsurf.cpp_CDrawSurface_plotPixel_FUN_004874d0
//   XREF to: 004874d0 (UNCONDITIONAL_CALL)
// 0048a00b: ADD ESP,0xc
// 0048a00e: PUSH 0x4f
// 0048a010: PUSH 0x64
// 0048a012: LEA EAX,[ESP + 0x70]
//   XREF to: Stack[-0x64] (DATA)
// 0048a016: PUSH EAX
// 0048a017: CALL cockpit_drawsurf.cpp_CDrawSurface_plotPixel_FUN_004874d0
//   XREF to: 004874d0 (UNCONDITIONAL_CALL)
// 0048a01c: ADD ESP,0xc
// 0048a01f: PUSH 0x5e
// 0048a021: PUSH 0x64
// 0048a023: LEA EAX,[ESP + 0x70]
//   XREF to: Stack[-0x64] (DATA)
// 0048a027: PUSH EAX
// 0048a028: CALL cockpit_drawsurf.cpp_CDrawSurface_plotPixel_FUN_004874d0
//   XREF to: 004874d0 (UNCONDITIONAL_CALL)
// 0048a02d: ADD ESP,0xc
// 0048a030: PUSH 0x0
// 0048a032: PUSH 0x0
// 0048a034: PUSH 0xff
// 0048a039: CALL cockpit_drawsurf.cpp_CDrawSurface_setColorRGB_FUN_00487220
//   XREF to: 00487220 (UNCONDITIONAL_CALL)
// 0048a03e: ADD ESP,0xc
// 0048a041: LEA EAX,[ESP + 0x28]
//   XREF to: Stack[-0xa4] (DATA)
// 0048a045: PUSH EAX
// 0048a046: CALL cockpit_drawsurf.cpp_CDrawSurface_fillFullSurface_FUN_00488c70
//   XREF to: 00488c70 (UNCONDITIONAL_CALL)
// 0048a04b: ADD ESP,0x4
// 0048a04e: PUSH 0xfb
// 0048a053: CALL cockpit_drawsurf.cpp_CDrawSurface_setColor_FUN_00487010
//   XREF to: 00487010 (UNCONDITIONAL_CALL)
// 0048a058: ADD ESP,0x4
// 0048a05b: LEA EAX,[ESP + 0x28]
//   XREF to: Stack[-0xa4] (DATA)
// 0048a05f: PUSH EAX
// 0048a060: CALL cockpit_drawsurf.cpp_CDrawSurface_drawSurfaceBorder_FUN_00488530
//   XREF to: 00488530 (UNCONDITIONAL_CALL)
// 0048a065: ADD ESP,0x4
// 0048a068: PUSH 0x15
// 0048a06a: PUSH 0x29
// 0048a06c: PUSH -0xb
// 0048a06e: PUSH -0x15
// 0048a070: LEA EAX,[ESP + 0x38]
//   XREF to: Stack[-0xa4] (DATA)
// 0048a074: PUSH EAX
// 0048a075: CALL cockpit_drawsurf.cpp_CDrawSurface_drawClippedLine_FUN_00487990
//   XREF to: 00487990 (UNCONDITIONAL_CALL)
// 0048a07a: ADD ESP,0x14
// 0048a07d: PUSH 0x6
// 0048a07f: PUSH 0x5
// 0048a081: PUSH 0xa
// 0048a083: LEA EAX,[ESP + 0x34]
//   XREF to: Stack[-0xa4] (DATA)
// 0048a087: PUSH EAX
// 0048a088: CALL cockpit_drawsurf.cpp_CDrawSurface_drawCircle_FUN_00487730
//   XREF to: 00487730 (UNCONDITIONAL_CALL)
// 0048a08d: ADD ESP,0x10
// 0048a090: PUSH 0xff
// 0048a095: PUSH 0x0
// 0048a097: PUSH 0x0
// 0048a099: CALL cockpit_drawsurf.cpp_CDrawSurface_setColorRGB_FUN_00487220
//   XREF to: 00487220 (UNCONDITIONAL_CALL)
// 0048a09e: ADD ESP,0xc
// 0048a0a1: LEA EAX,[ESP + 0x8]
//   XREF to: Stack[-0xc4] (DATA)
// 0048a0a5: PUSH EAX
// 0048a0a6: CALL cockpit_drawsurf.cpp_CDrawSurface_fillFullSurface_FUN_00488c70
//   XREF to: 00488c70 (UNCONDITIONAL_CALL)
// 0048a0ab: ADD ESP,0x4
// 0048a0ae: PUSH 0xfb
// 0048a0b3: CALL cockpit_drawsurf.cpp_CDrawSurface_setColor_FUN_00487010
//   XREF to: 00487010 (UNCONDITIONAL_CALL)
// 0048a0b8: ADD ESP,0x4
// 0048a0bb: LEA EAX,[ESP + 0x8]
//   XREF to: Stack[-0xc4] (DATA)
// 0048a0bf: PUSH EAX
// 0048a0c0: CALL cockpit_drawsurf.cpp_CDrawSurface_drawSurfaceBorder_FUN_00488530
//   XREF to: 00488530 (UNCONDITIONAL_CALL)
// 0048a0c5: ADD ESP,0x4
// 0048a0c8: PUSH 0x9
// 0048a0ca: PUSH 0x13
// 0048a0cc: PUSH 0x0
// 0048a0ce: PUSH 0x0
// 0048a0d0: LEA EAX,[ESP + 0x18]
//   XREF to: Stack[-0xc4] (DATA)
// 0048a0d4: PUSH EAX
// 0048a0d5: CALL cockpit_drawsurf.cpp_CDrawSurface_drawClippedLine_FUN_00487990
//   XREF to: 00487990 (UNCONDITIONAL_CALL)
// 0048a0da: MOV EAX,[0x006703e4]
//   XREF to: 006703e4 (READ)
// 0048a0df: ADD ESP,0x14
// 0048a0e2: MOV dword ptr [ESP + 0xa8],EAX
//   XREF to: 00412b41 (DATA)
//   XREF to: Stack[-0x24] (WRITE)
// 0048a0e9: MOV EAX,[0x00679394]
//   XREF to: 00679394 (READ)
// 0048a0ee: MOV EDX,EAX
// 0048a0f0: SAR EDX,0x1f
// 0048a0f3: SUB EAX,EDX
// 0048a0f5: SAR EAX,0x1
// 0048a0f7: MOV EBP,EAX
// 0048a0f9: MOV EAX,[0x00679398]
//   XREF to: 00679398 (READ)
// 0048a0fe: MOV EDX,EAX
// 0048a100: SAR EDX,0x1f
// 0048a103: SUB EAX,EDX
// 0048a105: SAR EAX,0x1
// 0048a107: MOV EDX,dword ptr [0x00679398]
//   XREF to: 00679398 (READ)
// 0048a10d: ADD EAX,0x66
// 0048a110: DEC EDX
// 0048a111: SUB EDX,EAX
// 0048a113: PUSH 0x0
// 0048a115: LEA EDI,[EDX + 0x1]
// 0048a118: PUSH EDI
// 0048a119: PUSH 0xc9
// 0048a11e: PUSH EAX
// 0048a11f: PUSH EBP
// 0048a120: LEA EAX,[ESP + 0x9c]
//   XREF to: Stack[-0x44] (DATA)
// 0048a127: PUSH EAX
// 0048a128: MOV EBX,dword ptr [ESI + 0x3170]
// 0048a12e: CALL cockpit_drawsurf.cpp_CDrawSurface_ctor_FUN_00486ea0
//   XREF to: 00486ea0 (UNCONDITIONAL_CALL)
// 0048a133: ADD ESP,0x18
// 0048a136: PUSH 0x80
// 0048a13b: PUSH 0x80
// 0048a140: PUSH 0x80
// 0048a145: CALL cockpit_drawsurf.cpp_CDrawSurface_setColorRGB_FUN_00487220
//   XREF to: 00487220 (UNCONDITIONAL_CALL)
// 0048a14a: ADD ESP,0xc
// 0048a14d: LEA EAX,[ESP + 0x88]
//   XREF to: Stack[-0x44] (DATA)
// 0048a154: PUSH EAX
// 0048a155: CALL cockpit_drawsurf.cpp_CDrawSurface_fillFullSurface_FUN_00488c70
//   XREF to: 00488c70 (UNCONDITIONAL_CALL)
// 0048a15a: ADD ESP,0x4
// 0048a15d: PUSH 0x7
// 0048a15f: CALL cockpit_drawsurf.cpp_CDrawSurface_setColor_FUN_00487010
//   XREF to: 00487010 (UNCONDITIONAL_CALL)
// 0048a164: ADD ESP,0x4
// 0048a167: LEA EAX,[ESP + 0x88]
//   XREF to: Stack[-0x44] (DATA)
// 0048a16e: PUSH EAX
// 0048a16f: CALL cockpit_drawsurf.cpp_CDrawSurface_drawSurfaceBorder_FUN_00488530
//   XREF to: 00488530 (UNCONDITIONAL_CALL)
// 0048a174: ADD ESP,0x4
// 0048a177: PUSH 0xf9
// 0048a17c: CALL cockpit_drawsurf.cpp_CDrawSurface_setColor_FUN_00487010
//   XREF to: 00487010 (UNCONDITIONAL_CALL)
// 0048a181: ADD ESP,0x4
// 0048a184: PUSH ESI
// 0048a185: CALL cockpit_drawsurf.cpp_setCurrentFont_FUN_004874c0
//   XREF to: 004874c0 (UNCONDITIONAL_CALL)
// 0048a18a: ADD ESP,0x4
// 0048a18d: MOV dword ptr [ESI + 0x3184],0x1
// 0048a197: LEA EAX,[ESP + 0xa8]
//   XREF to: Stack[-0x24] (DATA)
// 0048a19e: PUSH EAX
// 0048a19f: PUSH 0x621ef7
//   XREF to: 00621ef7 (DATA)
// 0048a1a4: PUSH 0x1
// 0048a1a6: PUSH 0x1
// 0048a1a8: LEA EAX,[ESP + 0x98]
//   XREF to: Stack[-0x44] (DATA)
// 0048a1af: PUSH EAX
// 0048a1b0: CALL cockpit_drawsurf.cpp_CDrawSurface_drawTextRightAlignedPrintf_FUN_00489450
//   XREF to: 00489450 (UNCONDITIONAL_CALL)
// 0048a1b5: ADD ESP,0x14
// 0048a1b8: LEA EAX,[ESP + 0xa8]
//   XREF to: Stack[-0x24] (DATA)
// 0048a1bf: PUSH EAX
// 0048a1c0: PUSH 0x621efa
//   XREF to: 00621efa (DATA)
// 0048a1c5: PUSH 0x1
// 0048a1c7: PUSH 0xc7
// 0048a1cc: LEA EAX,[ESP + 0x98]
//   XREF to: Stack[-0x44] (DATA)
// 0048a1d3: PUSH EAX
// 0048a1d4: CALL cockpit_drawsurf.cpp_CDrawSurface_drawTextRightAlignedVariantPrintf_FUN_00489520
//   XREF to: 00489520 (UNCONDITIONAL_CALL)
// 0048a1d9: ADD ESP,0x14
// 0048a1dc: LEA EAX,[ESP + 0xa8]
//   XREF to: Stack[-0x24] (DATA)
// 0048a1e3: PUSH EAX
// 0048a1e4: PUSH 0x621efd
//   XREF to: 00621efd (DATA)
// 0048a1e9: PUSH 0x1
// 0048a1eb: PUSH 0x64
// 0048a1ed: LEA EAX,[ESP + 0x98]
//   XREF to: Stack[-0x44] (DATA)
// 0048a1f4: PUSH EAX
// 0048a1f5: CALL cockpit_drawsurf.cpp_CDrawSurface_drawTextCenteredPrintf_FUN_004895f0
//   XREF to: 004895f0 (UNCONDITIONAL_CALL)
// 0048a1fa: ADD ESP,0x14
// 0048a1fd: LEA EAX,[ESP + 0xa8]
//   XREF to: Stack[-0x24] (DATA)
// 0048a204: PUSH EAX
// 0048a205: PUSH 0x621f00
//   XREF to: 00621f00 (DATA)
// 0048a20a: LEA EBP,[EBX + 0x1]
// 0048a20d: PUSH EBP
// 0048a20e: PUSH 0x64
// 0048a210: LEA EAX,[ESP + 0x98]
//   XREF to: Stack[-0x44] (DATA)
// 0048a217: PUSH EAX
// 0048a218: CALL cockpit_drawsurf.cpp_CDrawSurface_drawTextRightAlignedVCenteredPrintf_FUN_004896c0
//   XREF to: 004896c0 (UNCONDITIONAL_CALL)
// 0048a21d: ADD ESP,0x14
// 0048a220: LEA EAX,[ESP + 0xa8]
//   XREF to: Stack[-0x24] (DATA)
// 0048a227: PUSH EAX
// 0048a228: LEA EAX,[EBX + EBX*0x1]
// 0048a22b: PUSH 0x621f03
//   XREF to: 00621f03 (DATA)
// 0048a230: MOV dword ptr [ESP + 0xc4],EAX
//   XREF to: Stack[-0x10] (WRITE)
// 0048a237: INC EAX
// 0048a238: PUSH EAX
// 0048a239: PUSH 0x64
// 0048a23b: MOV dword ptr [ESP + 0xd0],EAX
//   XREF to: Stack[-0xc] (WRITE)
// 0048a242: LEA EAX,[ESP + 0x98]
//   XREF to: Stack[-0x44] (DATA)
// 0048a249: PUSH EAX
// 0048a24a: CALL cockpit_drawsurf.cpp_CDrawSurface_drawTextCenteredBothPrintf_FUN_00489790
//   XREF to: 00489790 (UNCONDITIONAL_CALL)
// 0048a24f: ADD ESP,0x14
// 0048a252: LEA EAX,[ESP + 0xa8]
//   XREF to: Stack[-0x24] (DATA)
// 0048a259: PUSH EAX
// 0048a25a: LEA EAX,[EBX*0x4 + 0x0]
// 0048a261: SUB EAX,EBX
// 0048a263: MOV dword ptr [ESP + 0xb4],EAX
//   XREF to: Stack[-0x1c] (WRITE)
// 0048a26a: MOV EDX,dword ptr [ESP + 0xb4]
//   XREF to: Stack[-0x1c] (READ)
// 0048a271: MOV EAX,EDI
// 0048a273: PUSH 0x621f06
//   XREF to: 00621f06 (DATA)
// 0048a278: SUB EAX,EDX
// 0048a27a: PUSH EAX
// 0048a27b: PUSH 0x96
// 0048a280: PUSH 0x32
// 0048a282: MOV dword ptr [ESP + 0xc0],EAX
//   XREF to: Stack[-0x20] (WRITE)
// 0048a289: LEA EAX,[ESP + 0x9c]
//   XREF to: Stack[-0x44] (DATA)
// 0048a290: PUSH EAX
// 0048a291: CALL cockpit_drawsurf.cpp_CDrawSurface_drawTextCenteredInBoundsPrintf_FUN_00489860
//   XREF to: 00489860 (UNCONDITIONAL_CALL)
// 0048a296: ADD ESP,0x18
// 0048a299: LEA EAX,[ESP + 0xa8]
//   XREF to: Stack[-0x24] (DATA)
// 0048a2a0: MOV EDX,dword ptr [ESP + 0xbc]
//   XREF to: Stack[-0x10] (READ)
// 0048a2a7: PUSH EAX
// 0048a2a8: MOV EAX,EDI
// 0048a2aa: SUB EAX,EDX
// 0048a2ac: PUSH 0x621f09
//   XREF to: 00621f09 (DATA)
// 0048a2b1: MOV dword ptr [ESP + 0xc0],EAX
//   XREF to: Stack[-0x14] (WRITE)
// 0048a2b8: ADD EAX,0x32
// 0048a2bb: PUSH EAX
// 0048a2bc: MOV EAX,dword ptr [ESP + 0xc4]
//   XREF to: Stack[-0x14] (READ)
// 0048a2c3: SUB EAX,0x32
// 0048a2c6: PUSH EAX
// 0048a2c7: PUSH 0x64
// 0048a2c9: LEA EAX,[ESP + 0x9c]
//   XREF to: Stack[-0x44] (DATA)
// 0048a2d0: PUSH EAX
// 0048a2d1: CALL cockpit_drawsurf.cpp_CDrawSurface_drawTextCenteredInAreaPrintf_FUN_00489940
//   XREF to: 00489940 (UNCONDITIONAL_CALL)
// 0048a2d6: ADD ESP,0x18
// 0048a2d9: LEA EAX,[ESP + 0xa8]
//   XREF to: Stack[-0x24] (DATA)
// 0048a2e0: PUSH EAX
// 0048a2e1: SUB EDI,EBX
// 0048a2e3: PUSH 0x621f0c
//   XREF to: 00621f0c (DATA)
// 0048a2e8: LEA EAX,[EDI + 0x32]
// 0048a2eb: PUSH EAX
// 0048a2ec: LEA EAX,[EDI + -0x32]
// 0048a2ef: PUSH EAX
// 0048a2f0: PUSH 0x96
// 0048a2f5: PUSH 0x32
// 0048a2f7: LEA EAX,[ESP + 0xa0]
//   XREF to: Stack[-0x44] (DATA)
// 0048a2fe: PUSH EAX
// 0048a2ff: CALL cockpit_drawsurf.cpp_CDrawSurface_drawTextCenteredInAreaWithWidthPrintf_FUN_00489a30
//   XREF to: 00489a30 (UNCONDITIONAL_CALL)
// 0048a304: ADD ESP,0x1c
// 0048a307: LEA EAX,[ESP + 0xa8]
//   XREF to: Stack[-0x24] (DATA)
// 0048a30e: PUSH EAX
// 0048a30f: PUSH 0x621f0f
//   XREF to: 00621f0f (DATA)
// 0048a314: LEA EAX,[ESP + 0x90]
//   XREF to: Stack[-0x44] (DATA)
// 0048a31b: PUSH EAX
// 0048a31c: CALL cockpit_drawsurf.cpp_CDrawSurface_drawTextCenteredFullSurfacePrintf_FUN_00489c40
//   XREF to: 00489c40 (UNCONDITIONAL_CALL)
// 0048a321: ADD ESP,0xc
// 0048a324: PUSH 0xfb
// 0048a329: CALL cockpit_drawsurf.cpp_CDrawSurface_setColor_FUN_00487010
//   XREF to: 00487010 (UNCONDITIONAL_CALL)
// 0048a32e: ADD ESP,0x4
// 0048a331: PUSH 0x1
// 0048a333: PUSH 0x1
// 0048a335: LEA EAX,[ESP + 0x90]
//   XREF to: Stack[-0x44] (DATA)
// 0048a33c: PUSH EAX
// 0048a33d: CALL cockpit_drawsurf.cpp_CDrawSurface_plotPixel_FUN_004874d0
//   XREF to: 004874d0 (UNCONDITIONAL_CALL)
// 0048a342: ADD ESP,0xc
// 0048a345: PUSH 0x1
// 0048a347: PUSH 0xc7
// 0048a34c: LEA EAX,[ESP + 0x90]
//   XREF to: Stack[-0x44] (DATA)
// 0048a353: PUSH EAX
// 0048a354: CALL cockpit_drawsurf.cpp_CDrawSurface_plotPixel_FUN_004874d0
//   XREF to: 004874d0 (UNCONDITIONAL_CALL)
// 0048a359: ADD ESP,0xc
// 0048a35c: PUSH 0x1
// 0048a35e: PUSH 0x64
// 0048a360: LEA EAX,[ESP + 0x90]
//   XREF to: Stack[-0x44] (DATA)
// 0048a367: PUSH EAX
// 0048a368: CALL cockpit_drawsurf.cpp_CDrawSurface_plotPixel_FUN_004874d0
//   XREF to: 004874d0 (UNCONDITIONAL_CALL)
// 0048a36d: ADD ESP,0xc
// 0048a370: PUSH EBP
// 0048a371: PUSH 0x64
// 0048a373: LEA EAX,[ESP + 0x90]
//   XREF to: Stack[-0x44] (DATA)
// 0048a37a: PUSH EAX
// 0048a37b: CALL cockpit_drawsurf.cpp_CDrawSurface_plotPixel_FUN_004874d0
//   XREF to: 004874d0 (UNCONDITIONAL_CALL)
// 0048a380: ADD ESP,0xc
// 0048a383: MOV ECX,dword ptr [ESP + 0xc0]
//   XREF to: Stack[-0xc] (READ)
// 0048a38a: PUSH ECX
// 0048a38b: PUSH 0x64
// 0048a38d: LEA EAX,[ESP + 0x90]
//   XREF to: Stack[-0x44] (DATA)
// 0048a394: PUSH EAX
// 0048a395: CALL cockpit_drawsurf.cpp_CDrawSurface_plotPixel_FUN_004874d0
//   XREF to: 004874d0 (UNCONDITIONAL_CALL)
// 0048a39a: ADD ESP,0xc
// 0048a39d: MOV EAX,dword ptr [ESP + 0xac]
//   XREF to: Stack[-0x20] (READ)
// 0048a3a4: PUSH EAX
// 0048a3a5: PUSH 0x64
// 0048a3a7: LEA EAX,[ESP + 0x90]
//   XREF to: Stack[-0x44] (DATA)
// 0048a3ae: PUSH EAX
// 0048a3af: CALL cockpit_drawsurf.cpp_CDrawSurface_plotPixel_FUN_004874d0
//   XREF to: 004874d0 (UNCONDITIONAL_CALL)
// 0048a3b4: ADD ESP,0xc
// 0048a3b7: MOV EDX,dword ptr [ESP + 0xb8]
//   XREF to: Stack[-0x14] (READ)
// 0048a3be: PUSH EDX
// 0048a3bf: PUSH 0x64
// 0048a3c1: LEA EAX,[ESP + 0x90]
//   XREF to: Stack[-0x44] (DATA)
// 0048a3c8: PUSH EAX
// 0048a3c9: CALL cockpit_drawsurf.cpp_CDrawSurface_plotPixel_FUN_004874d0
//   XREF to: 004874d0 (UNCONDITIONAL_CALL)
// 0048a3ce: ADD ESP,0xc
// 0048a3d1: PUSH EDI
// 0048a3d2: PUSH 0x64
// 0048a3d4: LEA EAX,[ESP + 0x90]
//   XREF to: Stack[-0x44] (DATA)
// 0048a3db: PUSH EAX
// 0048a3dc: CALL cockpit_drawsurf.cpp_CDrawSurface_plotPixel_FUN_004874d0
//   XREF to: 004874d0 (UNCONDITIONAL_CALL)
// 0048a3e1: MOV EAX,[0x00679394]
//   XREF to: 00679394 (READ)
// 0048a3e6: MOV EDX,EAX
// 0048a3e8: SAR EDX,0x1f
// 0048a3eb: SUB EAX,EDX
// 0048a3ed: SAR EAX,0x1
// 0048a3ef: LEA ECX,[EAX + 0xffffff36]
// 0048a3f5: MOV EAX,[0x00679398]
//   XREF to: 00679398 (READ)
// 0048a3fa: MOV EDX,EAX
// 0048a3fc: SAR EDX,0x1f
// 0048a3ff: SUB EAX,EDX
// 0048a401: SAR EAX,0x1
// 0048a403: MOV EDX,dword ptr [0x00679398]
//   XREF to: 00679398 (READ)
// 0048a409: ADD EAX,0x66
// 0048a40c: DEC EDX
// 0048a40d: ADD ESP,0xc
// 0048a410: SUB EDX,EAX
// 0048a412: PUSH 0x0
// 0048a414: LEA EDI,[EDX + 0x1]
// 0048a417: PUSH EDI
// 0048a418: PUSH 0xc9
// 0048a41d: PUSH EAX
// 0048a41e: PUSH ECX
// 0048a41f: LEA EAX,[ESP + 0x5c]
//   XREF to: Stack[-0x84] (DATA)
// 0048a423: PUSH EAX
// 0048a424: CALL cockpit_drawsurf.cpp_CDrawSurface_ctor_FUN_00486ea0
//   XREF to: 00486ea0 (UNCONDITIONAL_CALL)
// 0048a429: ADD ESP,0x18
// 0048a42c: PUSH 0x80
// 0048a431: PUSH 0x80
// 0048a436: PUSH 0x80
// 0048a43b: CALL cockpit_drawsurf.cpp_CDrawSurface_setColorRGB_FUN_00487220
//   XREF to: 00487220 (UNCONDITIONAL_CALL)
// 0048a440: ADD ESP,0xc
// 0048a443: LEA EAX,[ESP + 0x48]
//   XREF to: Stack[-0x84] (DATA)
// 0048a447: PUSH EAX
// 0048a448: CALL cockpit_drawsurf.cpp_CDrawSurface_fillFullSurface_FUN_00488c70
//   XREF to: 00488c70 (UNCONDITIONAL_CALL)
// 0048a44d: ADD ESP,0x4
// 0048a450: PUSH 0x7
// 0048a452: CALL cockpit_drawsurf.cpp_CDrawSurface_setColor_FUN_00487010
//   XREF to: 00487010 (UNCONDITIONAL_CALL)
// 0048a457: ADD ESP,0x4
// 0048a45a: LEA EAX,[ESP + 0x48]
//   XREF to: Stack[-0x84] (DATA)
// 0048a45e: PUSH EAX
// 0048a45f: CALL cockpit_drawsurf.cpp_CDrawSurface_drawSurfaceBorder_FUN_00488530
//   XREF to: 00488530 (UNCONDITIONAL_CALL)
// 0048a464: ADD ESP,0x4
// 0048a467: PUSH 0xf9
// 0048a46c: CALL cockpit_drawsurf.cpp_CDrawSurface_setColor_FUN_00487010
//   XREF to: 00487010 (UNCONDITIONAL_CALL)
// 0048a471: ADD ESP,0x4
// 0048a474: PUSH 0x0
// 0048a476: CALL cockpit_drawsurf.cpp_setCurrentFont_FUN_004874c0
//   XREF to: 004874c0 (UNCONDITIONAL_CALL)
// 0048a47b: ADD ESP,0x4
// 0048a47e: MOV dword ptr [ESI + 0x3184],0x1
// 0048a488: LEA EAX,[ESP + 0xa8]
//   XREF to: Stack[-0x24] (DATA)
// 0048a48f: PUSH EAX
// 0048a490: PUSH 0x621f12
//   XREF to: 00621f12 (DATA)
// 0048a495: PUSH 0x1
// 0048a497: PUSH 0x1
// 0048a499: LEA EAX,[ESP + 0x58]
//   XREF to: Stack[-0x84] (DATA)
// 0048a49d: PUSH EAX
// 0048a49e: CALL cockpit_drawsurf.cpp_CDrawSurface_drawTextRightAlignedPrintf_FUN_00489450
//   XREF to: 00489450 (UNCONDITIONAL_CALL)
// 0048a4a3: ADD ESP,0x14
// 0048a4a6: LEA EAX,[ESP + 0xa8]
//   XREF to: Stack[-0x24] (DATA)
// 0048a4ad: PUSH EAX
// 0048a4ae: PUSH 0x621f15
//   XREF to: 00621f15 (DATA)
// 0048a4b3: PUSH 0x1
// 0048a4b5: PUSH 0xc7
// 0048a4ba: LEA EAX,[ESP + 0x58]
//   XREF to: Stack[-0x84] (DATA)
// 0048a4be: PUSH EAX
// 0048a4bf: CALL cockpit_drawsurf.cpp_CDrawSurface_drawTextRightAlignedVariantPrintf_FUN_00489520
//   XREF to: 00489520 (UNCONDITIONAL_CALL)
// 0048a4c4: ADD ESP,0x14
// 0048a4c7: LEA EAX,[ESP + 0xa8]
//   XREF to: Stack[-0x24] (DATA)
// 0048a4ce: PUSH EAX
// 0048a4cf: PUSH 0x621f18
//   XREF to: 00621f18 (DATA)
// 0048a4d4: PUSH 0x1
// 0048a4d6: PUSH 0x64
// 0048a4d8: LEA EAX,[ESP + 0x58]
//   XREF to: Stack[-0x84] (DATA)
// 0048a4dc: PUSH EAX
// 0048a4dd: CALL cockpit_drawsurf.cpp_CDrawSurface_drawTextCenteredPrintf_FUN_004895f0
//   XREF to: 004895f0 (UNCONDITIONAL_CALL)
// 0048a4e2: ADD ESP,0x14
// 0048a4e5: LEA EAX,[ESP + 0xa8]
//   XREF to: Stack[-0x24] (DATA)
// 0048a4ec: PUSH EAX
// 0048a4ed: PUSH 0x621f1b
//   XREF to: 00621f1b (DATA)
// 0048a4f2: PUSH EBP
// 0048a4f3: PUSH 0x64
// 0048a4f5: LEA EAX,[ESP + 0x58]
//   XREF to: Stack[-0x84] (DATA)
// 0048a4f9: PUSH EAX
// 0048a4fa: CALL cockpit_drawsurf.cpp_CDrawSurface_drawTextRightAlignedVCenteredPrintf_FUN_004896c0
//   XREF to: 004896c0 (UNCONDITIONAL_CALL)
// 0048a4ff: ADD ESP,0x14
// 0048a502: LEA EAX,[ESP + 0xa8]
//   XREF to: Stack[-0x24] (DATA)
// 0048a509: PUSH EAX
// 0048a50a: PUSH 0x621f1e
//   XREF to: 00621f1e (DATA)
// 0048a50f: MOV ECX,dword ptr [ESP + 0xc8]
//   XREF to: Stack[-0xc] (READ)
// 0048a516: PUSH ECX
// 0048a517: PUSH 0x64
// 0048a519: LEA EAX,[ESP + 0x58]
//   XREF to: Stack[-0x84] (DATA)
// 0048a51d: PUSH EAX
// 0048a51e: CALL cockpit_drawsurf.cpp_CDrawSurface_drawTextCenteredBothPrintf_FUN_00489790
//   XREF to: 00489790 (UNCONDITIONAL_CALL)
// 0048a523: ADD ESP,0x14
// 0048a526: LEA EAX,[ESP + 0xa8]
//   XREF to: Stack[-0x24] (DATA)
// 0048a52d: PUSH EAX
// 0048a52e: MOV ESI,dword ptr [ESP + 0xb4]
//   XREF to: Stack[-0x1c] (READ)
// 0048a535: MOV EAX,EDI
// 0048a537: PUSH 0x621f21
//   XREF to: 00621f21 (DATA)
// 0048a53c: SUB EAX,ESI
// 0048a53e: PUSH EAX
// 0048a53f: PUSH 0x96
// 0048a544: PUSH 0x32
// 0048a546: MOV dword ptr [ESP + 0xc8],EAX
//   XREF to: Stack[-0x18] (WRITE)
// 0048a54d: LEA EAX,[ESP + 0x5c]
//   XREF to: Stack[-0x84] (DATA)
// 0048a551: PUSH EAX
// 0048a552: MOV ESI,EDI
// 0048a554: CALL cockpit_drawsurf.cpp_CDrawSurface_drawTextCenteredInBoundsPrintf_FUN_00489860
//   XREF to: 00489860 (UNCONDITIONAL_CALL)
// 0048a559: ADD ESP,0x18
// 0048a55c: LEA EAX,[ESP + 0xa8]
//   XREF to: Stack[-0x24] (DATA)
// 0048a563: MOV EDX,dword ptr [ESP + 0xbc]
//   XREF to: Stack[-0x10] (READ)
// 0048a56a: PUSH EAX
// 0048a56b: SUB ESI,EDX
// 0048a56d: PUSH 0x621f24
//   XREF to: 00621f24 (DATA)
// 0048a572: LEA EAX,[ESI + 0x32]
// 0048a575: PUSH EAX
// 0048a576: LEA EAX,[ESI + -0x32]
// 0048a579: PUSH EAX
// 0048a57a: PUSH 0x64
// 0048a57c: LEA EAX,[ESP + 0x5c]
//   XREF to: Stack[-0x84] (DATA)
// 0048a580: PUSH EAX
// 0048a581: CALL cockpit_drawsurf.cpp_CDrawSurface_drawTextCenteredInAreaPrintf_FUN_00489940
//   XREF to: 00489940 (UNCONDITIONAL_CALL)
// 0048a586: ADD ESP,0x18
// 0048a589: LEA EAX,[ESP + 0xa8]
//   XREF to: Stack[-0x24] (DATA)
// 0048a590: PUSH EAX
// 0048a591: SUB EDI,EBX
// 0048a593: PUSH 0x621f27
//   XREF to: 00621f27 (DATA)
// 0048a598: LEA EAX,[EDI + 0x32]
// 0048a59b: PUSH EAX
// 0048a59c: LEA EAX,[EDI + -0x32]
// 0048a59f: PUSH EAX
// 0048a5a0: PUSH 0x96
// 0048a5a5: PUSH 0x32
// 0048a5a7: LEA EAX,[ESP + 0x60]
//   XREF to: Stack[-0x84] (DATA)
// 0048a5ab: PUSH EAX
// 0048a5ac: CALL cockpit_drawsurf.cpp_CDrawSurface_drawTextCenteredInAreaWithWidthPrintf_FUN_00489a30
//   XREF to: 00489a30 (UNCONDITIONAL_CALL)
// 0048a5b1: ADD ESP,0x1c
// 0048a5b4: LEA EAX,[ESP + 0xa8]
//   XREF to: Stack[-0x24] (DATA)
// 0048a5bb: PUSH EAX
// 0048a5bc: PUSH 0x621f2a
//   XREF to: 00621f2a (DATA)
// 0048a5c1: LEA EAX,[ESP + 0x50]
//   XREF to: Stack[-0x84] (DATA)
// 0048a5c5: PUSH EAX
// 0048a5c6: CALL cockpit_drawsurf.cpp_CDrawSurface_drawTextCenteredFullSurfacePrintf_FUN_00489c40
//   XREF to: 00489c40 (UNCONDITIONAL_CALL)
// 0048a5cb: ADD ESP,0xc
// 0048a5ce: PUSH 0xfb
// 0048a5d3: CALL cockpit_drawsurf.cpp_CDrawSurface_setColor_FUN_00487010
//   XREF to: 00487010 (UNCONDITIONAL_CALL)
// 0048a5d8: ADD ESP,0x4
// 0048a5db: PUSH 0x1
// 0048a5dd: PUSH 0x1
// 0048a5df: LEA EAX,[ESP + 0x50]
//   XREF to: Stack[-0x84] (DATA)
// 0048a5e3: PUSH EAX
// 0048a5e4: CALL cockpit_drawsurf.cpp_CDrawSurface_plotPixel_FUN_004874d0
//   XREF to: 004874d0 (UNCONDITIONAL_CALL)
// 0048a5e9: ADD ESP,0xc
// 0048a5ec: PUSH 0x1
// 0048a5ee: PUSH 0xc7
// 0048a5f3: LEA EAX,[ESP + 0x50]
//   XREF to: Stack[-0x84] (DATA)
// 0048a5f7: PUSH EAX
// 0048a5f8: CALL cockpit_drawsurf.cpp_CDrawSurface_plotPixel_FUN_004874d0
//   XREF to: 004874d0 (UNCONDITIONAL_CALL)
// 0048a5fd: ADD ESP,0xc
// 0048a600: PUSH 0x1
// 0048a602: PUSH 0x64
// 0048a604: LEA EAX,[ESP + 0x50]
//   XREF to: Stack[-0x84] (DATA)
// 0048a608: PUSH EAX
// 0048a609: CALL cockpit_drawsurf.cpp_CDrawSurface_plotPixel_FUN_004874d0
//   XREF to: 004874d0 (UNCONDITIONAL_CALL)
// 0048a60e: ADD ESP,0xc
// 0048a611: PUSH EBP
// 0048a612: PUSH 0x64
// 0048a614: LEA EAX,[ESP + 0x50]
//   XREF to: Stack[-0x84] (DATA)
// 0048a618: PUSH EAX
// 0048a619: CALL cockpit_drawsurf.cpp_CDrawSurface_plotPixel_FUN_004874d0
//   XREF to: 004874d0 (UNCONDITIONAL_CALL)
// 0048a61e: ADD ESP,0xc
// 0048a621: MOV ECX,dword ptr [ESP + 0xc0]
//   XREF to: Stack[-0xc] (READ)
// 0048a628: PUSH ECX
// 0048a629: PUSH 0x64
// 0048a62b: LEA EAX,[ESP + 0x50]
//   XREF to: Stack[-0x84] (DATA)
// 0048a62f: PUSH EAX
// 0048a630: CALL cockpit_drawsurf.cpp_CDrawSurface_plotPixel_FUN_004874d0
//   XREF to: 004874d0 (UNCONDITIONAL_CALL)
// 0048a635: ADD ESP,0xc
// 0048a638: MOV EBX,dword ptr [ESP + 0xb4]
//   XREF to: Stack[-0x18] (READ)
// 0048a63f: PUSH EBX
// 0048a640: PUSH 0x64
// 0048a642: LEA EAX,[ESP + 0x50]
//   XREF to: Stack[-0x84] (DATA)
// 0048a646: PUSH EAX
// 0048a647: CALL cockpit_drawsurf.cpp_CDrawSurface_plotPixel_FUN_004874d0
//   XREF to: 004874d0 (UNCONDITIONAL_CALL)
// 0048a64c: ADD ESP,0xc
// 0048a64f: PUSH ESI
// 0048a650: PUSH 0x64
// 0048a652: LEA EAX,[ESP + 0x50]
//   XREF to: Stack[-0x84] (DATA)
// 0048a656: PUSH EAX
// 0048a657: CALL cockpit_drawsurf.cpp_CDrawSurface_plotPixel_FUN_004874d0
//   XREF to: 004874d0 (UNCONDITIONAL_CALL)
// 0048a65c: ADD ESP,0xc
// 0048a65f: PUSH EDI
// 0048a660: PUSH 0x64
// 0048a662: LEA EAX,[ESP + 0x50]
//   XREF to: Stack[-0x84] (DATA)
// 0048a666: PUSH EAX
// 0048a667: CALL cockpit_drawsurf.cpp_CDrawSurface_plotPixel_FUN_004874d0
//   XREF to: 004874d0 (UNCONDITIONAL_CALL)
// 0048a66c: ADD ESP,0xc
// 0048a66f: PUSH 0x4
// 0048a671: CALL cockpit_drawsurf.cpp_CDrawSurface_setColor_FUN_00487010
//   XREF to: 00487010 (UNCONDITIONAL_CALL)
// 0048a676: ADD ESP,0x4
// 0048a679: LEA EAX,[ESP + 0x48]
//   XREF to: Stack[-0x84] (DATA)
// 0048a67d: PUSH EAX
// 0048a67e: CALL cockpit_drawsurf.cpp_CDrawSurface_drawAnimatedFullSurface_FUN_00488990
//   XREF to: 00488990 (UNCONDITIONAL_CALL)
// 0048a683: ADD ESP,0x4
// 0048a686: POP EBX
// 0048a687: POP EDI
// 0048a688: ADD ESP,0xbc
// 0048a68e: POP EBP
// 0048a68f: POP ESI
// 0048a690: RET
