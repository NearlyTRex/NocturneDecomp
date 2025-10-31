// Name: cockpit_drawsurf.cpp_CDrawSurface_drawTextRightAlignedVariant_FUN_004894c0
// Address: 004894c0
// Address Range: [[004894c0, 004894e6]]
// Convention: __cdecl
// Signature: void cockpit_drawsurf.cpp_CDrawSurface_drawTextRightAlignedVariant_FUN_004894c0(CDrawSurface * this_ptr, int x, int y, int height, char * text)
// Cross-references:
//   cockpit_drawsurf.cpp_CDrawSurface_drawTextRightAlignedVariantPrintf_FUN_00489520 (00489520) at 0048957a [UNCONDITIONAL_CALL]
//   cockpit_drawsurf.cpp_CDrawSurface_drawTextRightAlignedVariantWrapper_FUN_004894f0 (004894f0) at 00489506 [UNCONDITIONAL_CALL]
// Function calls:
//   cockpit_drawsurf.cpp_CDrawSurface_drawTextWithAlignment_FUN_00489120

#include "nocturne.h"

void __cdecl
cockpit_drawsurf_cpp_CDrawSurface_drawTextRightAlignedVariant_FUN_004894c0
          (CDrawSurface *this_ptr,int x,int y,int height,char *text)

{
  cockpit_drawsurf_cpp_CDrawSurface_drawTextWithAlignment_FUN_00489120
            (this_ptr,x,y,0,height,(char *)0x0,1);
  return;
}


// Assembly code:
// 004894c0: PUSH EBX
//   Label: cockpit_drawsurf.cpp_CDrawSurface_drawTextRightAlignedVariant_FUN_004894c0
// 004894c1: PUSH ESI
// 004894c2: PUSH 0x1
// 004894c4: PUSH 0x0
// 004894c6: MOV EDX,dword ptr [ESP + 0x20]
//   XREF to: Stack[0x10] (READ)
// 004894ca: PUSH EDX
// 004894cb: PUSH 0x0
// 004894cd: MOV ECX,dword ptr [ESP + 0x24]
//   XREF to: Stack[0xc] (READ)
// 004894d1: PUSH ECX
// 004894d2: MOV EBX,dword ptr [ESP + 0x24]
//   XREF to: Stack[0x8] (READ)
// 004894d6: PUSH EBX
// 004894d7: MOV ESI,dword ptr [ESP + 0x24]
//   XREF to: Stack[0x4] (READ)
// 004894db: PUSH ESI
// 004894dc: CALL cockpit_drawsurf.cpp_CDrawSurface_drawTextWithAlignment_FUN_00489120
//   XREF to: 00489120 (UNCONDITIONAL_CALL)
// 004894e1: ADD ESP,0x1c
// 004894e4: POP ESI
// 004894e5: POP EBX
// 004894e6: RET
