// Name: cockpit_drawsurf.cpp_CDrawSurface_drawTextCenteredInAreaWithWidthWrapper_FUN_00489a00
// Address: 00489a00
// Address Range: [[00489a00, 00489a2e]]
// Convention: __cdecl
// Signature: void cockpit_drawsurf.cpp_CDrawSurface_drawTextCenteredInAreaWithWidthWrapper_FUN_00489a00(CDrawSurface * this_ptr, int x, int y, int width, int height, char * text)
// Function calls:
//   cockpit_drawsurf.cpp_CDrawSurface_drawTextCenteredInAreaWithWidth_FUN_004899c0

#include "nocturne.h"

void __cdecl
cockpit_drawsurf_cpp_CDrawSurface_drawTextCenteredInAreaWithWidthWrapper_FUN_00489a00
          (CDrawSurface *this_ptr,int x,int y,int width,int height,char *text)

{
  cockpit_drawsurf_cpp_CDrawSurface_drawTextCenteredInAreaWithWidth_FUN_004899c0
            (this_ptr,(int)text,x,y,width,(char *)height);
  return;
}


// Assembly code:
// 00489a00: PUSH EBX
//   Label: cockpit_drawsurf.cpp_CDrawSurface_drawTextCenteredInAreaWithWidthWrapper_FUN_00489a00
// 00489a01: PUSH ESI
// 00489a02: PUSH EDI
// 00489a03: PUSH EBP
// 00489a04: MOV EDX,dword ptr [ESP + 0x24]
//   XREF to: Stack[0x14] (READ)
// 00489a08: PUSH EDX
// 00489a09: MOV ECX,dword ptr [ESP + 0x24]
//   XREF to: Stack[0x10] (READ)
// 00489a0d: PUSH ECX
// 00489a0e: MOV EBX,dword ptr [ESP + 0x24]
//   XREF to: Stack[0xc] (READ)
// 00489a12: PUSH EBX
// 00489a13: MOV ESI,dword ptr [ESP + 0x24]
//   XREF to: Stack[0x8] (READ)
// 00489a17: PUSH ESI
// 00489a18: MOV EDI,dword ptr [ESP + 0x38]
//   XREF to: Stack[0x18] (READ)
// 00489a1c: PUSH EDI
// 00489a1d: MOV EBP,dword ptr [ESP + 0x28]
//   XREF to: Stack[0x4] (READ)
// 00489a21: PUSH EBP
// 00489a22: CALL cockpit_drawsurf.cpp_CDrawSurface_drawTextCenteredInAreaWithWidth_FUN_004899c0
//   XREF to: 004899c0 (UNCONDITIONAL_CALL)
// 00489a27: ADD ESP,0x18
// 00489a2a: POP EBP
// 00489a2b: POP EDI
// 00489a2c: POP ESI
// 00489a2d: POP EBX
// 00489a2e: RET
