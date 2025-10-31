// Name: cockpit_drawsurf.cpp_CDrawSurface_drawAnimatedCenteredRectangle_FUN_004889b0
// Address: 004889b0
// Address Range: [[004889b0, 00488a21]]
// Convention: __cdecl
// Signature: void cockpit_drawsurf.cpp_CDrawSurface_drawAnimatedCenteredRectangle_FUN_004889b0(CDrawSurface * this_ptr, int center_x, int center_y, int width, int height)
// Function calls:
//   cockpit_drawsurf.cpp_CDrawSurface_drawAnimatedDashedLine_FUN_004887a0

#include "nocturne.h"

void __cdecl
cockpit_drawsurf_cpp_CDrawSurface_drawAnimatedCenteredRectangle_FUN_004889b0
          (CDrawSurface *this_ptr,int center_x,int center_y,int width,int height)

{
  int x2;
  int y2;
  
  x2 = width / 2 + center_x;
  if ((width & 1U) == 0) {
    x2 = x2 + -1;
  }
  y2 = height / 2 + center_y;
  if ((height & 1U) == 0) {
    y2 = y2 + -1;
  }
  cockpit_drawsurf_cpp_CDrawSurface_drawAnimatedDashedLine_FUN_004887a0
            (this_ptr,center_x - width / 2,center_y - height / 2,x2,y2);
  return;
}


// Assembly code:
// 004889b0: PUSH EBX
//   Label: cockpit_drawsurf.cpp_CDrawSurface_drawAnimatedCenteredRectangle_FUN_004889b0
// 004889b1: PUSH ESI
// 004889b2: PUSH EBP
// 004889b3: MOV EBX,dword ptr [ESP + 0x1c]
//   XREF to: Stack[0x10] (READ)
// 004889b7: MOV ECX,dword ptr [ESP + 0x20]
//   XREF to: Stack[0x14] (READ)
// 004889bb: MOV EDX,EBX
// 004889bd: MOV EAX,EBX
// 004889bf: SAR EDX,0x1f
// 004889c2: SUB EAX,EDX
// 004889c4: SAR EAX,0x1
// 004889c6: ADD EAX,dword ptr [ESP + 0x14]
//   XREF to: Stack[0x8] (READ)
// 004889ca: TEST BL,0x1
// 004889cd: JZ 0x00488a1c
//   XREF to: 00488a1c (CONDITIONAL_JUMP)
// 004889cf: MOV ESI,EAX
//   Label: LAB_004889cf
// 004889d1: MOV EDX,ECX
// 004889d3: MOV EAX,ECX
// 004889d5: SAR EDX,0x1f
// 004889d8: SUB EAX,EDX
// 004889da: SAR EAX,0x1
// 004889dc: ADD EAX,dword ptr [ESP + 0x18]
//   XREF to: Stack[0xc] (READ)
// 004889e0: TEST CL,0x1
// 004889e3: JZ 0x00488a1f
//   XREF to: 00488a1f (CONDITIONAL_JUMP)
// 004889e5: PUSH EAX
//   Label: LAB_004889e5
// 004889e6: MOV EDX,ECX
// 004889e8: MOV EAX,ECX
// 004889ea: SAR EDX,0x1f
// 004889ed: SUB EAX,EDX
// 004889ef: SAR EAX,0x1
// 004889f1: MOV ECX,dword ptr [ESP + 0x1c]
//   XREF to: Stack[0xc] (READ)
// 004889f5: MOV EDX,EBX
// 004889f7: SUB ECX,EAX
// 004889f9: MOV EAX,EBX
// 004889fb: SAR EDX,0x1f
// 004889fe: SUB EAX,EDX
// 00488a00: SAR EAX,0x1
// 00488a02: PUSH ESI
// 00488a03: PUSH ECX
// 00488a04: MOV ECX,dword ptr [ESP + 0x20]
//   XREF to: Stack[0x8] (READ)
// 00488a08: SUB ECX,EAX
// 00488a0a: PUSH ECX
// 00488a0b: MOV EBP,dword ptr [ESP + 0x20]
//   XREF to: Stack[0x4] (READ)
// 00488a0f: PUSH EBP
// 00488a10: CALL cockpit_drawsurf.cpp_CDrawSurface_drawAnimatedDashedLine_FUN_004887a0
//   XREF to: 004887a0 (UNCONDITIONAL_CALL)
// 00488a15: ADD ESP,0x14
// 00488a18: POP EBP
// 00488a19: POP ESI
// 00488a1a: POP EBX
// 00488a1b: RET
// 00488a1c: DEC EAX
//   Label: LAB_00488a1c
// 00488a1d: JMP 0x004889cf
//   XREF to: 004889cf (UNCONDITIONAL_JUMP)
// 00488a1f: DEC EAX
//   Label: LAB_00488a1f
// 00488a20: JMP 0x004889e5
//   XREF to: 004889e5 (UNCONDITIONAL_JUMP)
