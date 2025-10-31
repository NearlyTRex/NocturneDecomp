// Name: cockpit_drawsurf.cpp_CDrawSurface_drawAnimatedFullSurface_FUN_00488990
// Address: 00488990
// Address Range: [[00488990, 004889aa]]
// Convention: __cdecl
// Signature: void cockpit_drawsurf.cpp_CDrawSurface_drawAnimatedFullSurface_FUN_00488990(CDrawSurface * this_ptr)
// Cross-references:
//   cockpit_drawsurf.cpp_testDrawingSurface_FUN_00489d30 (00489d30) at 0048a67e [UNCONDITIONAL_CALL]
// Function calls:
//   cockpit_drawsurf.cpp_CDrawSurface_drawAnimatedDashedLine_FUN_004887a0

#include "nocturne.h"

void __cdecl
cockpit_drawsurf_cpp_CDrawSurface_drawAnimatedFullSurface_FUN_00488990(CDrawSurface *this_ptr)

{
  cockpit_drawsurf_cpp_CDrawSurface_drawAnimatedDashedLine_FUN_004887a0
            (this_ptr,0,0,this_ptr->width + -1,this_ptr->height + -1);
  return;
}


// Assembly code:
// 00488990: MOV EDX,dword ptr [ESP + 0x4]
//   Label: cockpit_drawsurf.cpp_CDrawSurface_drawAnimatedFullSurface_FUN_00488990
//   XREF to: Stack[0x4] (READ)
// 00488994: MOV EAX,dword ptr [EDX + 0x4]
// 00488997: DEC EAX
// 00488998: PUSH EAX
// 00488999: MOV EAX,dword ptr [EDX]
// 0048899b: DEC EAX
// 0048899c: PUSH EAX
// 0048899d: PUSH 0x0
// 0048899f: PUSH 0x0
// 004889a1: PUSH EDX
// 004889a2: CALL cockpit_drawsurf.cpp_CDrawSurface_drawAnimatedDashedLine_FUN_004887a0
//   XREF to: 004887a0 (UNCONDITIONAL_CALL)
// 004889a7: ADD ESP,0x14
// 004889aa: RET
