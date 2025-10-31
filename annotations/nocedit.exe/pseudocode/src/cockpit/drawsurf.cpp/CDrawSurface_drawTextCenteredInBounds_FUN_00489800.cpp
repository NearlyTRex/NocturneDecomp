// Name: cockpit_drawsurf.cpp_CDrawSurface_drawTextCenteredInBounds_FUN_00489800
// Address: 00489800
// Address Range: [[00489800, 0048982b]]
// Convention: __cdecl
// Signature: void cockpit_drawsurf.cpp_CDrawSurface_drawTextCenteredInBounds_FUN_00489800(CDrawSurface * this_ptr, int x, int y, int width, int height, char * text)
// Cross-references:
//   cockpit_drawsurf.cpp_CDrawSurface_drawTextCenteredFullWidth_FUN_00489ab0 (00489ab0) at 00489ac6 [UNCONDITIONAL_CALL]
//   cockpit_drawsurf.cpp_CDrawSurface_drawTextCenteredInBoundsPrintf_FUN_00489860 (00489860) at 004898c3 [UNCONDITIONAL_CALL]
//   cockpit_drawsurf.cpp_CDrawSurface_drawTextCenteredInBoundsWrapper_FUN_00489830 (00489830) at 0048984c [UNCONDITIONAL_CALL]
// Function calls:
//   cockpit_drawsurf.cpp_CDrawSurface_drawTextWithAlignment_FUN_00489120

#include "nocturne.h"

void __cdecl
cockpit_drawsurf_cpp_CDrawSurface_drawTextCenteredInBounds_FUN_00489800
          (CDrawSurface *this_ptr,int x,int y,int width,int height,char *text)

{
  cockpit_drawsurf_cpp_CDrawSurface_drawTextWithAlignment_FUN_00489120
            (this_ptr,x,y,width,height,(char *)0x0,5);
  return;
}


// Assembly code:
// 00489800: PUSH EBX
//   Label: cockpit_drawsurf.cpp_CDrawSurface_drawTextCenteredInBounds_FUN_00489800
// 00489801: PUSH ESI
// 00489802: PUSH EDI
// 00489803: PUSH 0x5
// 00489805: PUSH 0x0
// 00489807: MOV EDX,dword ptr [ESP + 0x28]
//   XREF to: Stack[0x14] (READ)
// 0048980b: PUSH EDX
// 0048980c: MOV ECX,dword ptr [ESP + 0x28]
//   XREF to: Stack[0x10] (READ)
// 00489810: PUSH ECX
// 00489811: MOV EBX,dword ptr [ESP + 0x28]
//   XREF to: Stack[0xc] (READ)
// 00489815: PUSH EBX
// 00489816: MOV ESI,dword ptr [ESP + 0x28]
//   XREF to: Stack[0x8] (READ)
// 0048981a: PUSH ESI
// 0048981b: MOV EDI,dword ptr [ESP + 0x28]
//   XREF to: Stack[0x4] (READ)
// 0048981f: PUSH EDI
// 00489820: CALL cockpit_drawsurf.cpp_CDrawSurface_drawTextWithAlignment_FUN_00489120
//   XREF to: 00489120 (UNCONDITIONAL_CALL)
// 00489825: ADD ESP,0x1c
// 00489828: POP EDI
// 00489829: POP ESI
// 0048982a: POP EBX
// 0048982b: RET
