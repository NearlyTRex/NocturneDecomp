// Name: cockpit_drawsurf.cpp_CDrawSurface_drawRectangleOutline_FUN_004878e0
// Address: 004878e0
// Address Range: [[004878e0, 0048798e]]
// Convention: __cdecl
// Signature: void cockpit_drawsurf.cpp_CDrawSurface_drawRectangleOutline_FUN_004878e0(CDrawSurface * this_ptr, int x, int y, int width, int height)
// Cross-references:
//   cockpit_drawsurf.cpp_CDrawSurface_drawCircle_FUN_00487730 (00487730) at 004877d3 [UNCONDITIONAL_CALL]
// Function calls:
//   cockpit_drawsurf.cpp_CDrawSurface_plotPixel_FUN_004874d0

#include "nocturne.h"

void __cdecl
cockpit_drawsurf_cpp_CDrawSurface_drawRectangleOutline_FUN_004878e0
          (CDrawSurface *this_ptr,int x,int y,int width,int height)

{
  int in_stack_00000018;
  int in_stack_0000001c;
  int in_stack_00000020;
  int in_stack_00000024;
  int in_stack_00000028;
  
  cockpit_drawsurf_cpp_CDrawSurface_plotPixel_FUN_004874d0(this_ptr,x + width,y + height);
  cockpit_drawsurf_cpp_CDrawSurface_plotPixel_FUN_004874d0(this_ptr,y - height,y + height);
  cockpit_drawsurf_cpp_CDrawSurface_plotPixel_FUN_004874d0
            (this_ptr,x + width,height - in_stack_0000001c);
  cockpit_drawsurf_cpp_CDrawSurface_plotPixel_FUN_004874d0
            (this_ptr,y - height,height - in_stack_0000001c);
  cockpit_drawsurf_cpp_CDrawSurface_plotPixel_FUN_004874d0
            (this_ptr,in_stack_00000018 + in_stack_00000024,in_stack_0000001c + in_stack_00000020);
  cockpit_drawsurf_cpp_CDrawSurface_plotPixel_FUN_004874d0
            (this_ptr,in_stack_0000001c - in_stack_00000028,in_stack_0000001c + in_stack_00000020);
  cockpit_drawsurf_cpp_CDrawSurface_plotPixel_FUN_004874d0
            (this_ptr,in_stack_00000018 + in_stack_00000024,in_stack_00000024 - in_stack_00000028);
  cockpit_drawsurf_cpp_CDrawSurface_plotPixel_FUN_004874d0
            (this_ptr,in_stack_0000001c - in_stack_00000028,in_stack_00000024 - in_stack_00000028);
  return;
}


// Assembly code:
// 004878e0: PUSH EBX
//   Label: cockpit_drawsurf.cpp_CDrawSurface_drawRectangleOutline_FUN_004878e0
// 004878e1: PUSH ESI
// 004878e2: PUSH EDI
// 004878e3: PUSH EBP
// 004878e4: MOV EBX,dword ptr [ESP + 0x14]
//   XREF to: Stack[0x4] (READ)
// 004878e8: MOV EDI,dword ptr [ESP + 0x1c]
//   XREF to: Stack[0xc] (READ)
// 004878ec: MOV EDX,dword ptr [ESP + 0x24]
//   XREF to: Stack[0x14] (READ)
// 004878f0: MOV ESI,dword ptr [ESP + 0x18]
//   XREF to: Stack[0x8] (READ)
// 004878f4: ADD EDI,EDX
// 004878f6: MOV ECX,dword ptr [ESP + 0x20]
//   XREF to: Stack[0x10] (READ)
// 004878fa: PUSH EDI
// 004878fb: ADD ESI,ECX
// 004878fd: PUSH ESI
// 004878fe: PUSH EBX
// 004878ff: CALL cockpit_drawsurf.cpp_CDrawSurface_plotPixel_FUN_004874d0
//   XREF to: 004874d0 (UNCONDITIONAL_CALL)
// 00487904: ADD ESP,0xc
// 00487907: MOV EBP,dword ptr [ESP + 0x18]
//   XREF to: Stack[0x8] (READ)
// 0048790b: PUSH EDI
// 0048790c: SUB EBP,dword ptr [ESP + 0x24]
//   XREF to: Stack[0x10] (READ)
// 00487910: PUSH EBP
// 00487911: PUSH EBX
// 00487912: CALL cockpit_drawsurf.cpp_CDrawSurface_plotPixel_FUN_004874d0
//   XREF to: 004874d0 (UNCONDITIONAL_CALL)
// 00487917: ADD ESP,0xc
// 0048791a: MOV EDI,dword ptr [ESP + 0x1c]
//   XREF to: Stack[0xc] (READ)
// 0048791e: SUB EDI,dword ptr [ESP + 0x24]
//   XREF to: Stack[0x14] (READ)
// 00487922: PUSH EDI
// 00487923: PUSH ESI
// 00487924: PUSH EBX
// 00487925: CALL cockpit_drawsurf.cpp_CDrawSurface_plotPixel_FUN_004874d0
//   XREF to: 004874d0 (UNCONDITIONAL_CALL)
// 0048792a: ADD ESP,0xc
// 0048792d: PUSH EDI
// 0048792e: PUSH EBP
// 0048792f: PUSH EBX
// 00487930: CALL cockpit_drawsurf.cpp_CDrawSurface_plotPixel_FUN_004874d0
//   XREF to: 004874d0 (UNCONDITIONAL_CALL)
// 00487935: ADD ESP,0xc
// 00487938: MOV ESI,dword ptr [ESP + 0x1c]
//   XREF to: Stack[0xc] (READ)
// 0048793c: MOV EDX,dword ptr [ESP + 0x20]
//   XREF to: Stack[0x10] (READ)
// 00487940: MOV EDI,dword ptr [ESP + 0x18]
//   XREF to: Stack[0x8] (READ)
// 00487944: ADD ESI,EDX
// 00487946: MOV ECX,dword ptr [ESP + 0x24]
//   XREF to: Stack[0x14] (READ)
// 0048794a: PUSH ESI
// 0048794b: ADD EDI,ECX
// 0048794d: PUSH EDI
// 0048794e: PUSH EBX
// 0048794f: CALL cockpit_drawsurf.cpp_CDrawSurface_plotPixel_FUN_004874d0
//   XREF to: 004874d0 (UNCONDITIONAL_CALL)
// 00487954: ADD ESP,0xc
// 00487957: MOV EBP,dword ptr [ESP + 0x24]
//   XREF to: Stack[0x14] (READ)
// 0048795b: PUSH ESI
// 0048795c: MOV ESI,dword ptr [ESP + 0x1c]
//   XREF to: Stack[0x8] (READ)
// 00487960: SUB ESI,EBP
// 00487962: PUSH ESI
// 00487963: PUSH EBX
// 00487964: CALL cockpit_drawsurf.cpp_CDrawSurface_plotPixel_FUN_004874d0
//   XREF to: 004874d0 (UNCONDITIONAL_CALL)
// 00487969: ADD ESP,0xc
// 0048796c: MOV EBP,dword ptr [ESP + 0x1c]
//   XREF to: Stack[0xc] (READ)
// 00487970: SUB EBP,dword ptr [ESP + 0x20]
//   XREF to: Stack[0x10] (READ)
// 00487974: PUSH EBP
// 00487975: PUSH EDI
// 00487976: PUSH EBX
// 00487977: CALL cockpit_drawsurf.cpp_CDrawSurface_plotPixel_FUN_004874d0
//   XREF to: 004874d0 (UNCONDITIONAL_CALL)
// 0048797c: ADD ESP,0xc
// 0048797f: PUSH EBP
// 00487980: PUSH ESI
// 00487981: PUSH EBX
// 00487982: CALL cockpit_drawsurf.cpp_CDrawSurface_plotPixel_FUN_004874d0
//   XREF to: 004874d0 (UNCONDITIONAL_CALL)
// 00487987: ADD ESP,0xc
// 0048798a: POP EBP
// 0048798b: POP EDI
// 0048798c: POP ESI
// 0048798d: POP EBX
// 0048798e: RET
