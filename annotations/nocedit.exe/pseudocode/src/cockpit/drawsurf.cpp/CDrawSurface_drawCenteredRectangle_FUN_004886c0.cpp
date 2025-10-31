// Name: cockpit_drawsurf.cpp_CDrawSurface_drawCenteredRectangle_FUN_004886c0
// Address: 004886c0
// Address Range: [[004886c0, 00488731]]
// Convention: __cdecl
// Signature: void cockpit_drawsurf.cpp_CDrawSurface_drawCenteredRectangle_FUN_004886c0(CDrawSurface * this_ptr, int center_x, int center_y, int width, int height)
// Function calls:
//   cockpit_drawsurf.cpp_CDrawSurface_drawSolidRectangle_FUN_00488630

#include "nocturne.h"

void __cdecl
cockpit_drawsurf_cpp_CDrawSurface_drawCenteredRectangle_FUN_004886c0
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
  cockpit_drawsurf_cpp_CDrawSurface_drawSolidRectangle_FUN_00488630
            (this_ptr,center_x - width / 2,center_y - height / 2,x2,y2);
  return;
}


// Assembly code:
// 004886c0: PUSH EBX
//   Label: cockpit_drawsurf.cpp_CDrawSurface_drawCenteredRectangle_FUN_004886c0
// 004886c1: PUSH ESI
// 004886c2: PUSH EBP
// 004886c3: MOV EBX,dword ptr [ESP + 0x1c]
//   XREF to: Stack[0x10] (READ)
// 004886c7: MOV ECX,dword ptr [ESP + 0x20]
//   XREF to: Stack[0x14] (READ)
// 004886cb: MOV EDX,EBX
// 004886cd: MOV EAX,EBX
// 004886cf: SAR EDX,0x1f
// 004886d2: SUB EAX,EDX
// 004886d4: SAR EAX,0x1
// 004886d6: ADD EAX,dword ptr [ESP + 0x14]
//   XREF to: Stack[0x8] (READ)
// 004886da: TEST BL,0x1
// 004886dd: JZ 0x0048872c
//   XREF to: 0048872c (CONDITIONAL_JUMP)
// 004886df: MOV ESI,EAX
//   Label: LAB_004886df
// 004886e1: MOV EDX,ECX
// 004886e3: MOV EAX,ECX
// 004886e5: SAR EDX,0x1f
// 004886e8: SUB EAX,EDX
// 004886ea: SAR EAX,0x1
// 004886ec: ADD EAX,dword ptr [ESP + 0x18]
//   XREF to: Stack[0xc] (READ)
// 004886f0: TEST CL,0x1
// 004886f3: JZ 0x0048872f
//   XREF to: 0048872f (CONDITIONAL_JUMP)
// 004886f5: PUSH EAX
//   Label: LAB_004886f5
// 004886f6: MOV EDX,ECX
// 004886f8: MOV EAX,ECX
// 004886fa: SAR EDX,0x1f
// 004886fd: SUB EAX,EDX
// 004886ff: SAR EAX,0x1
// 00488701: MOV ECX,dword ptr [ESP + 0x1c]
//   XREF to: Stack[0xc] (READ)
// 00488705: MOV EDX,EBX
// 00488707: SUB ECX,EAX
// 00488709: MOV EAX,EBX
// 0048870b: SAR EDX,0x1f
// 0048870e: SUB EAX,EDX
// 00488710: SAR EAX,0x1
// 00488712: PUSH ESI
// 00488713: PUSH ECX
// 00488714: MOV ECX,dword ptr [ESP + 0x20]
//   XREF to: Stack[0x8] (READ)
// 00488718: SUB ECX,EAX
// 0048871a: PUSH ECX
// 0048871b: MOV EBP,dword ptr [ESP + 0x20]
//   XREF to: Stack[0x4] (READ)
// 0048871f: PUSH EBP
// 00488720: CALL cockpit_drawsurf.cpp_CDrawSurface_drawSolidRectangle_FUN_00488630
//   XREF to: 00488630 (UNCONDITIONAL_CALL)
// 00488725: ADD ESP,0x14
// 00488728: POP EBP
// 00488729: POP ESI
// 0048872a: POP EBX
// 0048872b: RET
// 0048872c: DEC EAX
//   Label: LAB_0048872c
// 0048872d: JMP 0x004886df
//   XREF to: 004886df (UNCONDITIONAL_JUMP)
// 0048872f: DEC EAX
//   Label: LAB_0048872f
// 00488730: JMP 0x004886f5
//   XREF to: 004886f5 (UNCONDITIONAL_JUMP)
