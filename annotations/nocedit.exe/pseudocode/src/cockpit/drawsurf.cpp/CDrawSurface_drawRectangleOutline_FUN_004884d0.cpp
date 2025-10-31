// Name: cockpit_drawsurf.cpp_CDrawSurface_drawRectangleOutline_FUN_004884d0
// Address: 004884d0
// Address Range: [[004884d0, 00488524]]
// Convention: __cdecl
// Signature: void cockpit_drawsurf.cpp_CDrawSurface_drawRectangleOutline_FUN_004884d0(CDrawSurface * this_ptr, int x, int y, int width, int height)
// Cross-references:
//   cockpit_drawsurf.cpp_CDrawSurface_drawCenteredRectangle_FUN_00488550 (00488550) at 004885b0 [UNCONDITIONAL_CALL]
//   cockpit_drawsurf.cpp_CDrawSurface_drawRectangleBetweenPoints_FUN_004885d0 (004885d0) at 0048861c [UNCONDITIONAL_CALL]
//   cockpit_drawsurf.cpp_CDrawSurface_drawSurfaceBorder_FUN_00488530 (00488530) at 00488542 [UNCONDITIONAL_CALL]
// Function calls:
//   cockpit_drawsurf.cpp_CDrawSurface_drawHorizontalLine_FUN_00488110
//   cockpit_drawsurf.cpp_CDrawSurface_drawVerticalLine_FUN_00488230

#include "nocturne.h"

void __cdecl
cockpit_drawsurf_cpp_CDrawSurface_drawRectangleOutline_FUN_004884d0
          (CDrawSurface *this_ptr,int x,int y,int width,int height)

{
  cockpit_drawsurf_cpp_CDrawSurface_drawHorizontalLine_FUN_00488110(this_ptr,x,y,width);
  cockpit_drawsurf_cpp_CDrawSurface_drawHorizontalLine_FUN_00488110(this_ptr,y,height,width);
  cockpit_drawsurf_cpp_CDrawSurface_drawVerticalLine_FUN_00488230(this_ptr,width,y,height);
  cockpit_drawsurf_cpp_CDrawSurface_drawVerticalLine_FUN_00488230(this_ptr,width,y,height);
  return;
}


// Assembly code:
// 004884d0: PUSH EBX
//   Label: cockpit_drawsurf.cpp_CDrawSurface_drawRectangleOutline_FUN_004884d0
// 004884d1: PUSH ESI
// 004884d2: PUSH EDI
// 004884d3: PUSH EBP
// 004884d4: MOV EBX,dword ptr [ESP + 0x14]
//   XREF to: Stack[0x4] (READ)
// 004884d8: MOV EBP,dword ptr [ESP + 0x1c]
//   XREF to: Stack[0xc] (READ)
// 004884dc: MOV ESI,dword ptr [ESP + 0x20]
//   XREF to: Stack[0x10] (READ)
// 004884e0: MOV EDI,dword ptr [ESP + 0x24]
//   XREF to: Stack[0x14] (READ)
// 004884e4: PUSH ESI
// 004884e5: PUSH EBP
// 004884e6: MOV EDX,dword ptr [ESP + 0x20]
//   XREF to: Stack[0x8] (READ)
// 004884ea: PUSH EDX
// 004884eb: PUSH EBX
// 004884ec: CALL cockpit_drawsurf.cpp_CDrawSurface_drawHorizontalLine_FUN_00488110
//   XREF to: 00488110 (UNCONDITIONAL_CALL)
// 004884f1: ADD ESP,0x10
// 004884f4: PUSH ESI
// 004884f5: PUSH EDI
// 004884f6: MOV ECX,dword ptr [ESP + 0x20]
//   XREF to: Stack[0x8] (READ)
// 004884fa: PUSH ECX
// 004884fb: PUSH EBX
// 004884fc: CALL cockpit_drawsurf.cpp_CDrawSurface_drawHorizontalLine_FUN_00488110
//   XREF to: 00488110 (UNCONDITIONAL_CALL)
// 00488501: ADD ESP,0x10
// 00488504: PUSH EDI
// 00488505: PUSH EBP
// 00488506: MOV EAX,dword ptr [ESP + 0x20]
//   XREF to: Stack[0x8] (READ)
// 0048850a: PUSH EAX
// 0048850b: PUSH EBX
// 0048850c: CALL cockpit_drawsurf.cpp_CDrawSurface_drawVerticalLine_FUN_00488230
//   XREF to: 00488230 (UNCONDITIONAL_CALL)
// 00488511: ADD ESP,0x10
// 00488514: PUSH EDI
// 00488515: PUSH EBP
// 00488516: PUSH ESI
// 00488517: PUSH EBX
// 00488518: CALL cockpit_drawsurf.cpp_CDrawSurface_drawVerticalLine_FUN_00488230
//   XREF to: 00488230 (UNCONDITIONAL_CALL)
// 0048851d: ADD ESP,0x10
// 00488520: POP EBP
// 00488521: POP EDI
// 00488522: POP ESI
// 00488523: POP EBX
// 00488524: RET
