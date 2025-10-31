// Name: cockpit_drawsurf.cpp_CDrawSurface_drawTextCenteredInAreaWithWidth_FUN_004899c0
// Address: 004899c0
// Address Range: [[004899c0, 004899f0]]
// Convention: __cdecl
// Signature: void cockpit_drawsurf.cpp_CDrawSurface_drawTextCenteredInAreaWithWidth_FUN_004899c0(CDrawSurface * this_ptr, int x, int y, int width, int height, char * text)
// Cross-references:
//   cockpit_drawsurf.cpp_CDrawSurface_drawTextCenteredFullSurface_FUN_00489c20 (00489c20) at 00489c37 [UNCONDITIONAL_CALL]
//   cockpit_drawsurf.cpp_CDrawSurface_drawTextCenteredInAreaWithWidthPrintf_FUN_00489a30 (00489a30) at 00489a9b [UNCONDITIONAL_CALL]
//   cockpit_drawsurf.cpp_CDrawSurface_drawTextCenteredInAreaWithWidthWrapper_FUN_00489a00 (00489a00) at 00489a22 [UNCONDITIONAL_CALL]
// Function calls:
//   cockpit_drawsurf.cpp_CDrawSurface_drawTextWithAlignment_FUN_00489120

#include "nocturne.h"

void __cdecl
cockpit_drawsurf_cpp_CDrawSurface_drawTextCenteredInAreaWithWidth_FUN_004899c0
          (CDrawSurface *this_ptr,int x,int y,int width,int height,char *text)

{
  cockpit_drawsurf_cpp_CDrawSurface_drawTextWithAlignment_FUN_00489120
            (this_ptr,x,y,width,height,text,7);
  return;
}


// Assembly code:
// 004899c0: PUSH EBX
//   Label: cockpit_drawsurf.cpp_CDrawSurface_drawTextCenteredInAreaWithWidth_FUN_004899c0
// 004899c1: PUSH ESI
// 004899c2: PUSH EDI
// 004899c3: PUSH EBP
// 004899c4: PUSH 0x7
// 004899c6: MOV EDX,dword ptr [ESP + 0x2c]
//   XREF to: Stack[0x18] (READ)
// 004899ca: PUSH EDX
// 004899cb: MOV ECX,dword ptr [ESP + 0x2c]
//   XREF to: Stack[0x14] (READ)
// 004899cf: PUSH ECX
// 004899d0: MOV EBX,dword ptr [ESP + 0x2c]
//   XREF to: Stack[0x10] (READ)
// 004899d4: PUSH EBX
// 004899d5: MOV ESI,dword ptr [ESP + 0x2c]
//   XREF to: Stack[0xc] (READ)
// 004899d9: PUSH ESI
// 004899da: MOV EDI,dword ptr [ESP + 0x2c]
//   XREF to: Stack[0x8] (READ)
// 004899de: PUSH EDI
// 004899df: MOV EBP,dword ptr [ESP + 0x2c]
//   XREF to: Stack[0x4] (READ)
// 004899e3: PUSH EBP
// 004899e4: CALL cockpit_drawsurf.cpp_CDrawSurface_drawTextWithAlignment_FUN_00489120
//   XREF to: 00489120 (UNCONDITIONAL_CALL)
// 004899e9: ADD ESP,0x1c
// 004899ec: POP EBP
// 004899ed: POP EDI
// 004899ee: POP ESI
// 004899ef: POP EBX
// 004899f0: RET
