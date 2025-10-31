// Name: cockpit_drawsurf.cpp_CDrawSurface_drawFullSurface_FUN_004886a0
// Address: 004886a0
// Address Range: [[004886a0, 004886ba]]
// Convention: __cdecl
// Signature: void cockpit_drawsurf.cpp_CDrawSurface_drawFullSurface_FUN_004886a0(CDrawSurface * this_ptr)
// Function calls:
//   cockpit_drawsurf.cpp_CDrawSurface_drawSolidRectangle_FUN_00488630

#include "nocturne.h"

void __cdecl cockpit_drawsurf_cpp_CDrawSurface_drawFullSurface_FUN_004886a0(CDrawSurface *this_ptr)

{
  cockpit_drawsurf_cpp_CDrawSurface_drawSolidRectangle_FUN_00488630
            (this_ptr,0,0,this_ptr->width + -1,this_ptr->height + -1);
  return;
}


// Assembly code:
// 004886a0: MOV EDX,dword ptr [ESP + 0x4]
//   Label: cockpit_drawsurf.cpp_CDrawSurface_drawFullSurface_FUN_004886a0
//   XREF to: Stack[0x4] (READ)
// 004886a4: MOV EAX,dword ptr [EDX + 0x4]
// 004886a7: DEC EAX
// 004886a8: PUSH EAX
// 004886a9: MOV EAX,dword ptr [EDX]
// 004886ab: DEC EAX
// 004886ac: PUSH EAX
// 004886ad: PUSH 0x0
// 004886af: PUSH 0x0
// 004886b1: PUSH EDX
// 004886b2: CALL cockpit_drawsurf.cpp_CDrawSurface_drawSolidRectangle_FUN_00488630
//   XREF to: 00488630 (UNCONDITIONAL_CALL)
// 004886b7: ADD ESP,0x14
// 004886ba: RET
