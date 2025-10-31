// Name: cockpit_drawsurf.cpp_CDrawSurface_drawCircleFromTopLeft_FUN_00487820
// Address: 00487820
// Address Range: [[00487820, 00487840]]
// Convention: __cdecl
// Signature: void cockpit_drawsurf.cpp_CDrawSurface_drawCircleFromTopLeft_FUN_00487820(CDrawSurface * this_ptr, int x, int y, int radius)
// Cross-references:
//   cockpit_drawsurf.cpp_testDrawingSurface_FUN_00489d30 (00489d30) at 00489e4f [UNCONDITIONAL_CALL]
// Function calls:
//   cockpit_drawsurf.cpp_CDrawSurface_drawCircle_FUN_00487730

#include "nocturne.h"

void __cdecl
cockpit_drawsurf_cpp_CDrawSurface_drawCircleFromTopLeft_FUN_00487820
          (CDrawSurface *this_ptr,int x,int y,int radius)

{
  cockpit_drawsurf_cpp_CDrawSurface_drawCircle_FUN_00487730(this_ptr,x + radius,y + radius,radius);
  return;
}


// Assembly code:
// 00487820: MOV EDX,dword ptr [ESP + 0x10]
//   Label: cockpit_drawsurf.cpp_CDrawSurface_drawCircleFromTopLeft_FUN_00487820
//   XREF to: Stack[0x10] (READ)
// 00487824: MOV EAX,dword ptr [ESP + 0xc]
//   XREF to: Stack[0xc] (READ)
// 00487828: PUSH EDX
// 00487829: ADD EAX,EDX
// 0048782b: PUSH EAX
// 0048782c: MOV EAX,dword ptr [ESP + 0x10]
//   XREF to: Stack[0x8] (READ)
// 00487830: ADD EAX,EDX
// 00487832: PUSH EAX
// 00487833: MOV EDX,dword ptr [ESP + 0x10]
//   XREF to: Stack[0x4] (READ)
// 00487837: PUSH EDX
// 00487838: CALL cockpit_drawsurf.cpp_CDrawSurface_drawCircle_FUN_00487730
//   XREF to: 00487730 (UNCONDITIONAL_CALL)
// 0048783d: ADD ESP,0x10
// 00487840: RET
