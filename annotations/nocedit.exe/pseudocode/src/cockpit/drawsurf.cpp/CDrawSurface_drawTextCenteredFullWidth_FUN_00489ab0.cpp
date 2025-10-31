// Name: cockpit_drawsurf.cpp_CDrawSurface_drawTextCenteredFullWidth_FUN_00489ab0
// Address: 00489ab0
// Address Range: [[00489ab0, 00489acf]]
// Convention: __cdecl
// Signature: void cockpit_drawsurf.cpp_CDrawSurface_drawTextCenteredFullWidth_FUN_00489ab0(CDrawSurface * this_ptr, int y, int height, char * text)
// Cross-references:
//   cockpit_drawsurf.cpp_CDrawSurface_drawTextCenteredFullWidthPrintf_FUN_00489af0 (00489af0) at 00489b41 [UNCONDITIONAL_CALL]
//   cockpit_drawsurf.cpp_CDrawSurface_drawTextCenteredFullWidthWrapper_FUN_00489ad0 (00489ad0) at 00489ae0 [UNCONDITIONAL_CALL]
// Function calls:
//   cockpit_drawsurf.cpp_CDrawSurface_drawTextCenteredInBounds_FUN_00489800

#include "nocturne.h"

void __cdecl
cockpit_drawsurf_cpp_CDrawSurface_drawTextCenteredFullWidth_FUN_00489ab0
          (CDrawSurface *this_ptr,int y,int height,char *text)

{
  char *unaff_EBX;
  
  cockpit_drawsurf_cpp_CDrawSurface_drawTextCenteredInBounds_FUN_00489800
            (this_ptr,y,0,this_ptr->width + -1,height,unaff_EBX);
  return;
}


// Assembly code:
// 00489ab0: PUSH EBX
//   Label: cockpit_drawsurf.cpp_CDrawSurface_drawTextCenteredFullWidth_FUN_00489ab0
// 00489ab1: MOV EDX,dword ptr [ESP + 0x8]
//   XREF to: Stack[0x4] (READ)
// 00489ab5: MOV ECX,dword ptr [ESP + 0x10]
//   XREF to: Stack[0xc] (READ)
// 00489ab9: MOV EAX,dword ptr [EDX]
// 00489abb: PUSH ECX
// 00489abc: DEC EAX
// 00489abd: PUSH EAX
// 00489abe: PUSH 0x0
// 00489ac0: MOV EBX,dword ptr [ESP + 0x18]
//   XREF to: Stack[0x8] (READ)
// 00489ac4: PUSH EBX
// 00489ac5: PUSH EDX
// 00489ac6: CALL cockpit_drawsurf.cpp_CDrawSurface_drawTextCenteredInBounds_FUN_00489800
//   XREF to: 00489800 (UNCONDITIONAL_CALL)
// 00489acb: ADD ESP,0x14
// 00489ace: POP EBX
// 00489acf: RET
