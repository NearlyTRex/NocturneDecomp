// Name: cockpit_drawsurf.cpp_CDrawSurface_drawTextCenteredFullHeight_FUN_00489b60
// Address: 00489b60
// Address Range: [[00489b60, 00489b80]]
// Convention: __cdecl
// Signature: void cockpit_drawsurf.cpp_CDrawSurface_drawTextCenteredFullHeight_FUN_00489b60(CDrawSurface * this_ptr, int x, int y, char * text)
// Cross-references:
//   cockpit_drawsurf.cpp_CDrawSurface_drawTextCenteredFullHeightPrintf_FUN_00489bb0 (00489bb0) at 00489c01 [UNCONDITIONAL_CALL]
//   cockpit_drawsurf.cpp_CDrawSurface_drawTextCenteredFullHeightWrapper_FUN_00489b90 (00489b90) at 00489ba0 [UNCONDITIONAL_CALL]
// Function calls:
//   cockpit_drawsurf.cpp_CDrawSurface_drawTextCenteredInArea_FUN_004898e0

#include "nocturne.h"

void __cdecl
cockpit_drawsurf_cpp_CDrawSurface_drawTextCenteredFullHeight_FUN_00489b60
          (CDrawSurface *this_ptr,int x,int y,char *text)

{
  cockpit_drawsurf_cpp_CDrawSurface_drawTextCenteredInArea_FUN_004898e0
            (this_ptr,x,y,0,(char *)(this_ptr->height + -1));
  return;
}


// Assembly code:
// 00489b60: PUSH EBX
//   Label: cockpit_drawsurf.cpp_CDrawSurface_drawTextCenteredFullHeight_FUN_00489b60
// 00489b61: MOV EDX,dword ptr [ESP + 0x8]
//   XREF to: Stack[0x4] (READ)
// 00489b65: MOV EAX,dword ptr [EDX + 0x4]
// 00489b68: DEC EAX
// 00489b69: PUSH EAX
// 00489b6a: PUSH 0x0
// 00489b6c: MOV ECX,dword ptr [ESP + 0x18]
//   XREF to: Stack[0xc] (READ)
// 00489b70: PUSH ECX
// 00489b71: MOV EBX,dword ptr [ESP + 0x18]
//   XREF to: Stack[0x8] (READ)
// 00489b75: PUSH EBX
// 00489b76: PUSH EDX
// 00489b77: CALL cockpit_drawsurf.cpp_CDrawSurface_drawTextCenteredInArea_FUN_004898e0
//   XREF to: 004898e0 (UNCONDITIONAL_CALL)
// 00489b7c: ADD ESP,0x14
// 00489b7f: POP EBX
// 00489b80: RET
