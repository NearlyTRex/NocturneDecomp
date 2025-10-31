// Name: cockpit_drawsurf.cpp_CDrawSurface_drawSolidRectangle_FUN_00488630
// Address: 00488630
// Address Range: [[00488630, 0048869c]]
// Convention: __cdecl
// Signature: void cockpit_drawsurf.cpp_CDrawSurface_drawSolidRectangle_FUN_00488630(CDrawSurface * this_ptr, int x1, int y1, int x2, int y2)
// Cross-references:
//   cockpit_drawsurf.cpp_CDrawSurface_drawCenteredRectangle_FUN_004886c0 (004886c0) at 00488720 [UNCONDITIONAL_CALL]
//   cockpit_drawsurf.cpp_CDrawSurface_drawFullSurface_FUN_004886a0 (004886a0) at 004886b2 [UNCONDITIONAL_CALL]
//   cockpit_drawsurf.cpp_CDrawSurface_drawInsetRectangle_FUN_00488740 (00488740) at 0048878c [UNCONDITIONAL_CALL]
// Globals:
//   int g_DashLength = 0x1
//   float g_DashAnimationThreshold = 0.1000000
// Function calls:
//   cockpit_drawsurf.cpp_CDrawSurface_drawAnimatedDashedLine_FUN_004887a0
//   crt_math.c_round_FUN_005fe6b0

#include "nocturne.h"

void __cdecl
cockpit_drawsurf_cpp_CDrawSurface_drawSolidRectangle_FUN_00488630
          (CDrawSurface *this_ptr,int x1,int y1,int x2,int y2)

{
  float fVar1;
  undefined4 extraout_EDX;
  undefined4 unaff_EBP;
  float10 fVar2;
  double dVar3;
  
  fVar1 = g_DashAnimationThreshold;
  g_DashLength = 1;
  g_DashAnimationThreshold = 0.0;
  cockpit_drawsurf_cpp_CDrawSurface_drawAnimatedDashedLine_FUN_004887a0(this_ptr,x1,y1,x2,y2);
  fVar2 = (float10)fVar1;
  dVar3 = crt_math_c_round_FUN_005fe6b0((double)CONCAT44(extraout_EDX,unaff_EBP));
  g_DashLength = (int)ROUND(fVar2);
  g_DashAnimationThreshold = SUB84(dVar3,0);
  return;
}


// Assembly code:
// 00488630: PUSH EBX
//   Label: cockpit_drawsurf.cpp_CDrawSurface_drawSolidRectangle_FUN_00488630
// 00488631: PUSH ESI
// 00488632: PUSH EDI
// 00488633: PUSH EBP
// 00488634: SUB ESP,0x8
// 00488637: FILD dword ptr [0x006703dc]
//   XREF to: 006703dc (READ)
// 0048863d: MOV EBX,dword ptr [ESP + 0x2c]
//   XREF to: Stack[0x14] (READ)
// 00488641: MOV EDX,0x1
// 00488646: PUSH EBX
// 00488647: MOV ESI,dword ptr [ESP + 0x2c]
//   XREF to: Stack[0x10] (READ)
// 0048864b: MOV EDI,dword ptr [ESP + 0x28]
//   XREF to: Stack[0xc] (READ)
// 0048864f: PUSH ESI
// 00488650: MOV EBP,dword ptr [ESP + 0x28]
//   XREF to: Stack[0x8] (READ)
// 00488654: MOV EAX,[0x006703e0]
//   XREF to: 006703e0 (READ)
// 00488659: PUSH EDI
// 0048865a: FSTP float ptr [ESP + 0xc]
//   XREF to: Stack[-0x18] (WRITE)
// 0048865e: MOV dword ptr [ESP + 0x10],EAX
//   XREF to: Stack[-0x14] (WRITE)
// 00488662: PUSH EBP
// 00488663: MOV EAX,dword ptr [ESP + 0x2c]
//   XREF to: Stack[0x4] (READ)
// 00488667: XOR ECX,ECX
// 00488669: PUSH EAX
// 0048866a: MOV dword ptr [0x006703dc],EDX
//   XREF to: 006703dc (WRITE)
// 00488670: MOV dword ptr [0x006703e0],ECX
//   XREF to: 006703e0 (WRITE)
// 00488676: CALL cockpit_drawsurf.cpp_CDrawSurface_drawAnimatedDashedLine_FUN_004887a0
//   XREF to: 004887a0 (UNCONDITIONAL_CALL)
// 0048867b: ADD ESP,0x14
// 0048867e: FLD float ptr [ESP]
//   XREF to: Stack[-0x18] (DATA)
// 00488681: MOV EAX,dword ptr [ESP + 0x4]
//   XREF to: Stack[-0x14] (READ)
// 00488685: CALL crt_math.c_round_FUN_005fe6b0
//   XREF to: 005fe6b0 (UNCONDITIONAL_CALL)
// 0048868a: FISTP dword ptr [0x006703dc]
//   XREF to: 006703dc (WRITE)
// 00488690: MOV [0x006703e0],EAX
//   XREF to: 006703e0 (WRITE)
// 00488695: ADD ESP,0x8
// 00488698: POP EBP
// 00488699: POP EDI
// 0048869a: POP ESI
// 0048869b: POP EBX
// 0048869c: RET
