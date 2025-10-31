// Name: cockpit_drawsurf.cpp_CDrawSurface_drawTextCenteredInArea_FUN_004898e0
// Address: 004898e0
// Address Range: [[004898e0, 0048990b]]
// Convention: __cdecl
// Signature: void cockpit_drawsurf.cpp_CDrawSurface_drawTextCenteredInArea_FUN_004898e0(CDrawSurface * this_ptr, int x, int y, int height, char * text)
// Cross-references:
//   cockpit_drawsurf.cpp_CDrawSurface_drawTextCenteredFullHeight_FUN_00489b60 (00489b60) at 00489b77 [UNCONDITIONAL_CALL]
//   cockpit_drawsurf.cpp_CDrawSurface_drawTextCenteredInAreaPrintf_FUN_00489940 (00489940) at 004899a3 [UNCONDITIONAL_CALL]
//   cockpit_drawsurf.cpp_CDrawSurface_drawTextCenteredInAreaWrapper_FUN_00489910 (00489910) at 0048992c [UNCONDITIONAL_CALL]
// Function calls:
//   cockpit_drawsurf.cpp_CDrawSurface_drawTextWithAlignment_FUN_00489120

#include "nocturne.h"

void __cdecl
cockpit_drawsurf_cpp_CDrawSurface_drawTextCenteredInArea_FUN_004898e0
          (CDrawSurface *this_ptr,int x,int y,int height,char *text)

{
  cockpit_drawsurf_cpp_CDrawSurface_drawTextWithAlignment_FUN_00489120(this_ptr,x,y,0,height,text,6)
  ;
  return;
}


// Assembly code:
// 004898e0: PUSH EBX
//   Label: cockpit_drawsurf.cpp_CDrawSurface_drawTextCenteredInArea_FUN_004898e0
// 004898e1: PUSH ESI
// 004898e2: PUSH EDI
// 004898e3: PUSH 0x6
// 004898e5: MOV EDX,dword ptr [ESP + 0x24]
//   XREF to: Stack[0x14] (READ)
// 004898e9: PUSH EDX
// 004898ea: MOV ECX,dword ptr [ESP + 0x24]
//   XREF to: Stack[0x10] (READ)
// 004898ee: PUSH ECX
// 004898ef: PUSH 0x0
// 004898f1: MOV EBX,dword ptr [ESP + 0x28]
//   XREF to: Stack[0xc] (READ)
// 004898f5: PUSH EBX
// 004898f6: MOV ESI,dword ptr [ESP + 0x28]
//   XREF to: Stack[0x8] (READ)
// 004898fa: PUSH ESI
// 004898fb: MOV EDI,dword ptr [ESP + 0x28]
//   XREF to: Stack[0x4] (READ)
// 004898ff: PUSH EDI
// 00489900: CALL cockpit_drawsurf.cpp_CDrawSurface_drawTextWithAlignment_FUN_00489120
//   XREF to: 00489120 (UNCONDITIONAL_CALL)
// 00489905: ADD ESP,0x1c
// 00489908: POP EDI
// 00489909: POP ESI
// 0048990a: POP EBX
// 0048990b: RET
