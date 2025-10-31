// Name: engine_2d.c_setupViewportAndClipping_FUN_00401800
// Address: 00401800
// Address Range: [[00401800, 00401896]]
// Convention: __cdecl
// Signature: void engine_2d.c_setupViewportAndClipping_FUN_00401800(int left, int top, int right, int bottom)
// Cross-references:
//   core_msnedit.cpp_PrepareMissionMaybe_FUN_005390f0 (005390f0) at 0053971c [UNCONDITIONAL_CALL]
//   core_setedit.cpp_UserInputCreate_FUN_0057d660 (0057d660) at 0057dbcf [UNCONDITIONAL_CALL]
//   engine_matrix.c_pushViewport_FUN_0050e320 (0050e320) at 0050e43c [UNCONDITIONAL_CALL]
//   shape_design.c_showShapeEditorMenu_FUN_0046f290 (0046f290) at 0046f2ae [UNCONDITIONAL_CALL]
//   shape_edittool.cpp_CEditorTools_createModalWindow_FUN_004a0970 (004a0970) at 004a0d66 [UNCONDITIONAL_CALL]
//   wincore_wddvmem.cpp_setScreenResolution_FUN_005ecef0 (005ecef0) at 005ed246 [UNCONDITIONAL_CALL]
// Globals:
//   int g_ViewportCenterXFixed
//   int g_ViewportCenterYFixed
//   int g_ViewportRightFixed
//   int g_ViewportBottomFixed
//   int g_ClipLeft
//   int g_ClipTop
//   int g_ClipRight
//   int g_ClipBottom
//   int g_ViewportWidth
//   int g_ViewportHeight

#include "nocturne.h"

void __cdecl
engine_2d_c_setupViewportAndClipping_FUN_00401800(int left,int top,int right,int bottom)

{
  int iVar1;
  int iVar2;
  
  g_ClipRight = right;
  g_ClipBottom = bottom;
  g_ClipTop = top;
  g_ViewportWidth = (right - left) + 1;
  g_ViewportHeight = (bottom - top) + 1;
  iVar1 = (g_ViewportWidth / 2 & 0xffffU) - 1;
  g_ClipLeft = left;
  iVar2 = (g_ViewportHeight / 2 & 0xffffU) - 1;
  g_ViewportCenterXFixed = iVar1 * 0x10000;
  g_ViewportRightFixed = (iVar1 + left + 1) * 0x10000;
  g_ViewportCenterYFixed = iVar2 * -0x10000;
  g_ViewportBottomFixed = (iVar2 + top + 1) * 0x10000;
  return;
}


// Assembly code:
// 00401800: PUSH EBX
//   Label: engine_2d.c_setupViewportAndClipping_FUN_00401800
// 00401801: PUSH ESI
// 00401802: PUSH EDI
// 00401803: MOV EDI,dword ptr [ESP + 0x10]
//   XREF to: Stack[0x4] (READ)
// 00401807: MOV EBX,dword ptr [ESP + 0x18]
//   XREF to: Stack[0xc] (READ)
// 0040180b: MOV ECX,dword ptr [ESP + 0x1c]
//   XREF to: Stack[0x10] (READ)
// 0040180f: MOV EAX,dword ptr [ESP + 0x14]
//   XREF to: Stack[0x8] (READ)
// 00401813: MOV dword ptr [0x02d02560],EBX
//   XREF to: 02d02560 (WRITE)
// 00401819: MOV dword ptr [0x02d02564],ECX
//   XREF to: 02d02564 (WRITE)
// 0040181f: SUB EBX,EDI
// 00401821: MOV [0x02d0255c],EAX
//   XREF to: 02d0255c (WRITE)
// 00401826: INC EBX
// 00401827: SUB ECX,EAX
// 00401829: MOV EDX,EBX
// 0040182b: MOV EAX,EBX
// 0040182d: SAR EDX,0x1f
// 00401830: SUB EAX,EDX
// 00401832: SAR EAX,0x1
// 00401834: INC ECX
// 00401835: AND EAX,0xffff
// 0040183a: MOV EDX,ECX
// 0040183c: LEA ESI,[EAX + -0x1]
// 0040183f: SAR EDX,0x1f
// 00401842: MOV EAX,ECX
// 00401844: SUB EAX,EDX
// 00401846: SAR EAX,0x1
// 00401848: MOV dword ptr [0x02d02558],EDI
//   XREF to: 02d02558 (WRITE)
// 0040184e: MOV dword ptr [0x02d02568],EBX
//   XREF to: 02d02568 (WRITE)
// 00401854: MOV dword ptr [0x02d0256c],ECX
//   XREF to: 02d0256c (WRITE)
// 0040185a: AND EAX,0xffff
// 0040185f: MOV EDX,ESI
// 00401861: ADD ESI,EDI
// 00401863: DEC EAX
// 00401864: INC ESI
// 00401865: SHL EDX,0x10
// 00401868: SHL ESI,0x10
// 0040186b: MOV dword ptr [0x02d02548],EDX
//   XREF to: 02d02548 (WRITE)
// 00401871: MOV dword ptr [0x02d02550],ESI
//   XREF to: 02d02550 (WRITE)
// 00401877: MOV ESI,dword ptr [ESP + 0x14]
//   XREF to: Stack[0x8] (READ)
// 0040187b: MOV EDX,EAX
// 0040187d: ADD EAX,ESI
// 0040187f: NEG EDX
// 00401881: INC EAX
// 00401882: SHL EDX,0x10
// 00401885: SHL EAX,0x10
// 00401888: MOV dword ptr [0x02d0254c],EDX
//   XREF to: 02d0254c (WRITE)
// 0040188e: MOV [0x02d02554],EAX
//   XREF to: 02d02554 (WRITE)
// 00401893: POP EDI
// 00401894: POP ESI
// 00401895: POP EBX
// 00401896: RET
