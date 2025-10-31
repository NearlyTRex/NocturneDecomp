// Name: cockpit_drawsurf.cpp_CDrawSurface_drawTextRightAlignedVariantWrapper_FUN_004894f0
// Address: 004894f0
// Address Range: [[004894f0, 00489510]]
// Convention: __cdecl
// Signature: void cockpit_drawsurf.cpp_CDrawSurface_drawTextRightAlignedVariantWrapper_FUN_004894f0(CDrawSurface * this_ptr, int x, int y, int height, char * text)
// Function calls:
//   cockpit_drawsurf.cpp_CDrawSurface_drawTextRightAlignedVariant_FUN_004894c0

#include "nocturne.h"

void __cdecl
cockpit_drawsurf_cpp_CDrawSurface_drawTextRightAlignedVariantWrapper_FUN_004894f0
          (CDrawSurface *this_ptr,int x,int y,int height,char *text)

{
  char *unaff_ESI;
  
  cockpit_drawsurf_cpp_CDrawSurface_drawTextRightAlignedVariant_FUN_004894c0
            (this_ptr,height,x,y,unaff_ESI);
  return;
}


// Assembly code:
// 004894f0: PUSH EBX
//   Label: cockpit_drawsurf.cpp_CDrawSurface_drawTextRightAlignedVariantWrapper_FUN_004894f0
// 004894f1: PUSH ESI
// 004894f2: MOV EDX,dword ptr [ESP + 0x14]
//   XREF to: Stack[0xc] (READ)
// 004894f6: PUSH EDX
// 004894f7: MOV ECX,dword ptr [ESP + 0x14]
//   XREF to: Stack[0x8] (READ)
// 004894fb: PUSH ECX
// 004894fc: MOV EBX,dword ptr [ESP + 0x20]
//   XREF to: Stack[0x10] (READ)
// 00489500: PUSH EBX
// 00489501: MOV ESI,dword ptr [ESP + 0x18]
//   XREF to: Stack[0x4] (READ)
// 00489505: PUSH ESI
// 00489506: CALL cockpit_drawsurf.cpp_CDrawSurface_drawTextRightAlignedVariant_FUN_004894c0
//   XREF to: 004894c0 (UNCONDITIONAL_CALL)
// 0048950b: ADD ESP,0x10
// 0048950e: POP ESI
// 0048950f: POP EBX
// 00489510: RET
