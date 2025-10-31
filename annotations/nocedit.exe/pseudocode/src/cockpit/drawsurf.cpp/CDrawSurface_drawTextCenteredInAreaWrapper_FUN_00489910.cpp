// Name: cockpit_drawsurf.cpp_CDrawSurface_drawTextCenteredInAreaWrapper_FUN_00489910
// Address: 00489910
// Address Range: [[00489910, 00489937]]
// Convention: __cdecl
// Signature: void cockpit_drawsurf.cpp_CDrawSurface_drawTextCenteredInAreaWrapper_FUN_00489910(CDrawSurface * this_ptr, int x, int y, int height, char * text)
// Function calls:
//   cockpit_drawsurf.cpp_CDrawSurface_drawTextCenteredInArea_FUN_004898e0

#include "nocturne.h"

void __cdecl
cockpit_drawsurf_cpp_CDrawSurface_drawTextCenteredInAreaWrapper_FUN_00489910
          (CDrawSurface *this_ptr,int x,int y,int height,char *text)

{
  cockpit_drawsurf_cpp_CDrawSurface_drawTextCenteredInArea_FUN_004898e0
            (this_ptr,(int)text,x,y,(char *)height);
  return;
}


// Assembly code:
// 00489910: PUSH EBX
//   Label: cockpit_drawsurf.cpp_CDrawSurface_drawTextCenteredInAreaWrapper_FUN_00489910
// 00489911: PUSH ESI
// 00489912: PUSH EDI
// 00489913: MOV EDX,dword ptr [ESP + 0x1c]
//   XREF to: Stack[0x10] (READ)
// 00489917: PUSH EDX
// 00489918: MOV ECX,dword ptr [ESP + 0x1c]
//   XREF to: Stack[0xc] (READ)
// 0048991c: PUSH ECX
// 0048991d: MOV EBX,dword ptr [ESP + 0x1c]
//   XREF to: Stack[0x8] (READ)
// 00489921: PUSH EBX
// 00489922: MOV ESI,dword ptr [ESP + 0x2c]
//   XREF to: Stack[0x14] (READ)
// 00489926: PUSH ESI
// 00489927: MOV EDI,dword ptr [ESP + 0x20]
//   XREF to: Stack[0x4] (READ)
// 0048992b: PUSH EDI
// 0048992c: CALL cockpit_drawsurf.cpp_CDrawSurface_drawTextCenteredInArea_FUN_004898e0
//   XREF to: 004898e0 (UNCONDITIONAL_CALL)
// 00489931: ADD ESP,0x14
// 00489934: POP EDI
// 00489935: POP ESI
// 00489936: POP EBX
// 00489937: RET
