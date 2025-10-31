// Name: cockpit_drawsurf.cpp_CDrawSurface_drawCenteredRectangle_FUN_00488550
// Address: 00488550
// Address Range: [[00488550, 004885c1]]
// Convention: __cdecl
// Signature: void cockpit_drawsurf.cpp_CDrawSurface_drawCenteredRectangle_FUN_00488550(CDrawSurface * this_ptr, int center_x, int center_y, int width, int height)
// Function calls:
//   cockpit_drawsurf.cpp_CDrawSurface_drawRectangleOutline_FUN_004884d0

#include "nocturne.h"

void __cdecl
cockpit_drawsurf_cpp_CDrawSurface_drawCenteredRectangle_FUN_00488550
          (CDrawSurface *this_ptr,int center_x,int center_y,int width,int height)

{
  int width_00;
  int height_00;
  
  width_00 = width / 2 + center_x;
  if ((width & 1U) == 0) {
    width_00 = width_00 + -1;
  }
  height_00 = height / 2 + center_y;
  if ((height & 1U) == 0) {
    height_00 = height_00 + -1;
  }
  cockpit_drawsurf_cpp_CDrawSurface_drawRectangleOutline_FUN_004884d0
            (this_ptr,center_x - width / 2,center_y - height / 2,width_00,height_00);
  return;
}


// Assembly code:
// 00488550: PUSH EBX
//   Label: cockpit_drawsurf.cpp_CDrawSurface_drawCenteredRectangle_FUN_00488550
// 00488551: PUSH ESI
// 00488552: PUSH EBP
// 00488553: MOV EBX,dword ptr [ESP + 0x1c]
//   XREF to: Stack[0x10] (READ)
// 00488557: MOV ECX,dword ptr [ESP + 0x20]
//   XREF to: Stack[0x14] (READ)
// 0048855b: MOV EDX,EBX
// 0048855d: MOV EAX,EBX
// 0048855f: SAR EDX,0x1f
// 00488562: SUB EAX,EDX
// 00488564: SAR EAX,0x1
// 00488566: ADD EAX,dword ptr [ESP + 0x14]
//   XREF to: Stack[0x8] (READ)
// 0048856a: TEST BL,0x1
// 0048856d: JZ 0x004885bc
//   XREF to: 004885bc (CONDITIONAL_JUMP)
// 0048856f: MOV ESI,EAX
//   Label: LAB_0048856f
// 00488571: MOV EDX,ECX
// 00488573: MOV EAX,ECX
// 00488575: SAR EDX,0x1f
// 00488578: SUB EAX,EDX
// 0048857a: SAR EAX,0x1
// 0048857c: ADD EAX,dword ptr [ESP + 0x18]
//   XREF to: Stack[0xc] (READ)
// 00488580: TEST CL,0x1
// 00488583: JZ 0x004885bf
//   XREF to: 004885bf (CONDITIONAL_JUMP)
// 00488585: PUSH EAX
//   Label: LAB_00488585
// 00488586: MOV EDX,ECX
// 00488588: MOV EAX,ECX
// 0048858a: SAR EDX,0x1f
// 0048858d: SUB EAX,EDX
// 0048858f: SAR EAX,0x1
// 00488591: MOV ECX,dword ptr [ESP + 0x1c]
//   XREF to: Stack[0xc] (READ)
// 00488595: MOV EDX,EBX
// 00488597: SUB ECX,EAX
// 00488599: MOV EAX,EBX
// 0048859b: SAR EDX,0x1f
// 0048859e: SUB EAX,EDX
// 004885a0: SAR EAX,0x1
// 004885a2: PUSH ESI
// 004885a3: PUSH ECX
// 004885a4: MOV ECX,dword ptr [ESP + 0x20]
//   XREF to: Stack[0x8] (READ)
// 004885a8: SUB ECX,EAX
// 004885aa: PUSH ECX
// 004885ab: MOV EBP,dword ptr [ESP + 0x20]
//   XREF to: Stack[0x4] (READ)
// 004885af: PUSH EBP
// 004885b0: CALL cockpit_drawsurf.cpp_CDrawSurface_drawRectangleOutline_FUN_004884d0
//   XREF to: 004884d0 (UNCONDITIONAL_CALL)
// 004885b5: ADD ESP,0x14
// 004885b8: POP EBP
// 004885b9: POP ESI
// 004885ba: POP EBX
// 004885bb: RET
// 004885bc: DEC EAX
//   Label: LAB_004885bc
// 004885bd: JMP 0x0048856f
//   XREF to: 0048856f (UNCONDITIONAL_JUMP)
// 004885bf: DEC EAX
//   Label: LAB_004885bf
// 004885c0: JMP 0x00488585
//   XREF to: 00488585 (UNCONDITIONAL_JUMP)
