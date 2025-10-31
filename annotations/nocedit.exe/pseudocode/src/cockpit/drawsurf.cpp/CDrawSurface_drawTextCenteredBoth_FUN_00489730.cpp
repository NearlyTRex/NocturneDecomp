// Name: cockpit_drawsurf.cpp_CDrawSurface_drawTextCenteredBoth_FUN_00489730
// Address: 00489730
// Address Range: [[00489730, 00489756]]
// Convention: __cdecl
// Signature: void cockpit_drawsurf.cpp_CDrawSurface_drawTextCenteredBoth_FUN_00489730(CDrawSurface * this_ptr, int x, int y, int height, char * text)
// Cross-references:
//   cockpit_drawsurf.cpp_CDrawSurface_drawTextCenteredBothPrintf_FUN_00489790 (00489790) at 004897ea [UNCONDITIONAL_CALL]
//   cockpit_drawsurf.cpp_CDrawSurface_drawTextCenteredBothWrapper_FUN_00489760 (00489760) at 00489776 [UNCONDITIONAL_CALL]
// Function calls:
//   cockpit_drawsurf.cpp_CDrawSurface_drawTextWithAlignment_FUN_00489120

#include "nocturne.h"

void __cdecl
cockpit_drawsurf_cpp_CDrawSurface_drawTextCenteredBoth_FUN_00489730
          (CDrawSurface *this_ptr,int x,int y,int height,char *text)

{
  cockpit_drawsurf_cpp_CDrawSurface_drawTextWithAlignment_FUN_00489120
            (this_ptr,x,y,0,height,(char *)0x0,4);
  return;
}


// Assembly code:
// 00489730: PUSH EBX
//   Label: cockpit_drawsurf.cpp_CDrawSurface_drawTextCenteredBoth_FUN_00489730
// 00489731: PUSH ESI
// 00489732: PUSH 0x4
// 00489734: PUSH 0x0
// 00489736: MOV EDX,dword ptr [ESP + 0x20]
//   XREF to: Stack[0x10] (READ)
// 0048973a: PUSH EDX
// 0048973b: PUSH 0x0
// 0048973d: MOV ECX,dword ptr [ESP + 0x24]
//   XREF to: Stack[0xc] (READ)
// 00489741: PUSH ECX
// 00489742: MOV EBX,dword ptr [ESP + 0x24]
//   XREF to: Stack[0x8] (READ)
// 00489746: PUSH EBX
// 00489747: MOV ESI,dword ptr [ESP + 0x24]
//   XREF to: Stack[0x4] (READ)
// 0048974b: PUSH ESI
// 0048974c: CALL cockpit_drawsurf.cpp_CDrawSurface_drawTextWithAlignment_FUN_00489120
//   XREF to: 00489120 (UNCONDITIONAL_CALL)
// 00489751: ADD ESP,0x1c
// 00489754: POP ESI
// 00489755: POP EBX
// 00489756: RET
