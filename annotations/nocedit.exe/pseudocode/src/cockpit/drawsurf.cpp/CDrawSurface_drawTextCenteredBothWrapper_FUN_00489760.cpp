// Name: cockpit_drawsurf.cpp_CDrawSurface_drawTextCenteredBothWrapper_FUN_00489760
// Address: 00489760
// Address Range: [[00489760, 00489780]]
// Convention: __cdecl
// Signature: void cockpit_drawsurf.cpp_CDrawSurface_drawTextCenteredBothWrapper_FUN_00489760(CDrawSurface * this_ptr, int x, int y, int height, char * text)
// Function calls:
//   cockpit_drawsurf.cpp_CDrawSurface_drawTextCenteredBoth_FUN_00489730

#include "nocturne.h"

void __cdecl
cockpit_drawsurf_cpp_CDrawSurface_drawTextCenteredBothWrapper_FUN_00489760
          (CDrawSurface *this_ptr,int x,int y,int height,char *text)

{
  char *unaff_ESI;
  
  cockpit_drawsurf_cpp_CDrawSurface_drawTextCenteredBoth_FUN_00489730(this_ptr,height,x,y,unaff_ESI)
  ;
  return;
}


// Assembly code:
// 00489760: PUSH EBX
//   Label: cockpit_drawsurf.cpp_CDrawSurface_drawTextCenteredBothWrapper_FUN_00489760
// 00489761: PUSH ESI
// 00489762: MOV EDX,dword ptr [ESP + 0x14]
//   XREF to: Stack[0xc] (READ)
// 00489766: PUSH EDX
// 00489767: MOV ECX,dword ptr [ESP + 0x14]
//   XREF to: Stack[0x8] (READ)
// 0048976b: PUSH ECX
// 0048976c: MOV EBX,dword ptr [ESP + 0x20]
//   XREF to: Stack[0x10] (READ)
// 00489770: PUSH EBX
// 00489771: MOV ESI,dword ptr [ESP + 0x18]
//   XREF to: Stack[0x4] (READ)
// 00489775: PUSH ESI
// 00489776: CALL cockpit_drawsurf.cpp_CDrawSurface_drawTextCenteredBoth_FUN_00489730
//   XREF to: 00489730 (UNCONDITIONAL_CALL)
// 0048977b: ADD ESP,0x10
// 0048977e: POP ESI
// 0048977f: POP EBX
// 00489780: RET
