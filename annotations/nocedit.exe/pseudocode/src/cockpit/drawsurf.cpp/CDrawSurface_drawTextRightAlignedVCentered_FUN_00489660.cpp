// Name: cockpit_drawsurf.cpp_CDrawSurface_drawTextRightAlignedVCentered_FUN_00489660
// Address: 00489660
// Address Range: [[00489660, 00489686]]
// Convention: __cdecl
// Signature: void cockpit_drawsurf.cpp_CDrawSurface_drawTextRightAlignedVCentered_FUN_00489660(CDrawSurface * this_ptr, int x, int y, int height, char * text)
// Cross-references:
//   cockpit_drawsurf.cpp_CDrawSurface_drawTextRightAlignedVCenteredPrintf_FUN_004896c0 (004896c0) at 0048971a [UNCONDITIONAL_CALL]
//   cockpit_drawsurf.cpp_CDrawSurface_drawTextRightAlignedVCenteredWrapper_FUN_00489690 (00489690) at 004896a6 [UNCONDITIONAL_CALL]
// Function calls:
//   cockpit_drawsurf.cpp_CDrawSurface_drawTextWithAlignment_FUN_00489120

#include "nocturne.h"

void __cdecl
cockpit_drawsurf_cpp_CDrawSurface_drawTextRightAlignedVCentered_FUN_00489660
          (CDrawSurface *this_ptr,int x,int y,int height,char *text)

{
  cockpit_drawsurf_cpp_CDrawSurface_drawTextWithAlignment_FUN_00489120
            (this_ptr,x,y,0,height,(char *)0x0,3);
  return;
}


// Assembly code:
// 00489660: PUSH EBX
//   Label: cockpit_drawsurf.cpp_CDrawSurface_drawTextRightAlignedVCentered_FUN_00489660
// 00489661: PUSH ESI
// 00489662: PUSH 0x3
// 00489664: PUSH 0x0
// 00489666: MOV EDX,dword ptr [ESP + 0x20]
//   XREF to: Stack[0x10] (READ)
// 0048966a: PUSH EDX
// 0048966b: PUSH 0x0
// 0048966d: MOV ECX,dword ptr [ESP + 0x24]
//   XREF to: Stack[0xc] (READ)
// 00489671: PUSH ECX
// 00489672: MOV EBX,dword ptr [ESP + 0x24]
//   XREF to: Stack[0x8] (READ)
// 00489676: PUSH EBX
// 00489677: MOV ESI,dword ptr [ESP + 0x24]
//   XREF to: Stack[0x4] (READ)
// 0048967b: PUSH ESI
// 0048967c: CALL cockpit_drawsurf.cpp_CDrawSurface_drawTextWithAlignment_FUN_00489120
//   XREF to: 00489120 (UNCONDITIONAL_CALL)
// 00489681: ADD ESP,0x1c
// 00489684: POP ESI
// 00489685: POP EBX
// 00489686: RET
