// Name: cockpit_drawsurf.cpp_CDrawSurface_drawTextRightAlignedVCenteredWrapper_FUN_00489690
// Address: 00489690
// Address Range: [[00489690, 004896b0]]
// Convention: __cdecl
// Signature: void cockpit_drawsurf.cpp_CDrawSurface_drawTextRightAlignedVCenteredWrapper_FUN_00489690(CDrawSurface * this_ptr, int x, int y, int height, char * text)
// Function calls:
//   cockpit_drawsurf.cpp_CDrawSurface_drawTextRightAlignedVCentered_FUN_00489660

#include "nocturne.h"

void __cdecl
cockpit_drawsurf_cpp_CDrawSurface_drawTextRightAlignedVCenteredWrapper_FUN_00489690
          (CDrawSurface *this_ptr,int x,int y,int height,char *text)

{
  char *unaff_ESI;
  
  cockpit_drawsurf_cpp_CDrawSurface_drawTextRightAlignedVCentered_FUN_00489660
            (this_ptr,height,x,y,unaff_ESI);
  return;
}


// Assembly code:
// 00489690: PUSH EBX
//   Label: cockpit_drawsurf.cpp_CDrawSurface_drawTextRightAlignedVCenteredWrapper_FUN_00489690
// 00489691: PUSH ESI
// 00489692: MOV EDX,dword ptr [ESP + 0x14]
//   XREF to: Stack[0xc] (READ)
// 00489696: PUSH EDX
// 00489697: MOV ECX,dword ptr [ESP + 0x14]
//   XREF to: Stack[0x8] (READ)
// 0048969b: PUSH ECX
// 0048969c: MOV EBX,dword ptr [ESP + 0x20]
//   XREF to: Stack[0x10] (READ)
// 004896a0: PUSH EBX
// 004896a1: MOV ESI,dword ptr [ESP + 0x18]
//   XREF to: Stack[0x4] (READ)
// 004896a5: PUSH ESI
// 004896a6: CALL cockpit_drawsurf.cpp_CDrawSurface_drawTextRightAlignedVCentered_FUN_00489660
//   XREF to: 00489660 (UNCONDITIONAL_CALL)
// 004896ab: ADD ESP,0x10
// 004896ae: POP ESI
// 004896af: POP EBX
// 004896b0: RET
