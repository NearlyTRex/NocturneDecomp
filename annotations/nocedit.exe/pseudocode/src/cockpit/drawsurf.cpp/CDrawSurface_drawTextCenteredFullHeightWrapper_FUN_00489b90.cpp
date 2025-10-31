// Name: cockpit_drawsurf.cpp_CDrawSurface_drawTextCenteredFullHeightWrapper_FUN_00489b90
// Address: 00489b90
// Address Range: [[00489b90, 00489ba9]]
// Convention: __cdecl
// Signature: void cockpit_drawsurf.cpp_CDrawSurface_drawTextCenteredFullHeightWrapper_FUN_00489b90(CDrawSurface * this_ptr, int x, int y, char * text)
// Function calls:
//   cockpit_drawsurf.cpp_CDrawSurface_drawTextCenteredFullHeight_FUN_00489b60

#include "nocturne.h"

void __cdecl
cockpit_drawsurf_cpp_CDrawSurface_drawTextCenteredFullHeightWrapper_FUN_00489b90
          (CDrawSurface *this_ptr,int x,int y,char *text)

{
  char *unaff_EBX;
  
  cockpit_drawsurf_cpp_CDrawSurface_drawTextCenteredFullHeight_FUN_00489b60(this_ptr,y,x,unaff_EBX);
  return;
}


// Assembly code:
// 00489b90: PUSH EBX
//   Label: cockpit_drawsurf.cpp_CDrawSurface_drawTextCenteredFullHeightWrapper_FUN_00489b90
// 00489b91: MOV EDX,dword ptr [ESP + 0xc]
//   XREF to: Stack[0x8] (READ)
// 00489b95: PUSH EDX
// 00489b96: MOV ECX,dword ptr [ESP + 0x14]
//   XREF to: Stack[0xc] (READ)
// 00489b9a: PUSH ECX
// 00489b9b: MOV EBX,dword ptr [ESP + 0x10]
//   XREF to: Stack[0x4] (READ)
// 00489b9f: PUSH EBX
// 00489ba0: CALL cockpit_drawsurf.cpp_CDrawSurface_drawTextCenteredFullHeight_FUN_00489b60
//   XREF to: 00489b60 (UNCONDITIONAL_CALL)
// 00489ba5: ADD ESP,0xc
// 00489ba8: POP EBX
// 00489ba9: RET
