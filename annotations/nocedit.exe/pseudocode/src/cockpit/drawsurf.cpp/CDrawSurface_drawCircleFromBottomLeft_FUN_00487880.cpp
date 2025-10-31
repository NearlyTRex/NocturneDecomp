// Name: cockpit_drawsurf.cpp_CDrawSurface_drawCircleFromBottomLeft_FUN_00487880
// Address: 00487880
// Address Range: [[00487880, 004878a0]]
// Convention: __cdecl
// Signature: void cockpit_drawsurf.cpp_CDrawSurface_drawCircleFromBottomLeft_FUN_00487880(CDrawSurface * this_ptr, int bottom_left_x, int bottom_left_y, int radius)
// Cross-references:
//   cockpit_drawsurf.cpp_testDrawingSurface_FUN_00489d30 (00489d30) at 00489e78 [UNCONDITIONAL_CALL]
// Function calls:
//   cockpit_drawsurf.cpp_CDrawSurface_drawCircle_FUN_00487730

#include "nocturne.h"

void __cdecl
cockpit_drawsurf_cpp_CDrawSurface_drawCircleFromBottomLeft_FUN_00487880
          (CDrawSurface *this_ptr,int bottom_left_x,int bottom_left_y,int radius)

{
  cockpit_drawsurf_cpp_CDrawSurface_drawCircle_FUN_00487730
            (this_ptr,bottom_left_x + radius,bottom_left_y - radius,radius);
  return;
}


// Assembly code:
// 00487880: MOV EDX,dword ptr [ESP + 0x10]
//   Label: cockpit_drawsurf.cpp_CDrawSurface_drawCircleFromBottomLeft_FUN_00487880
//   XREF to: Stack[0x10] (READ)
// 00487884: MOV EAX,dword ptr [ESP + 0xc]
//   XREF to: Stack[0xc] (READ)
// 00487888: PUSH EDX
// 00487889: SUB EAX,EDX
// 0048788b: PUSH EAX
// 0048788c: MOV EAX,dword ptr [ESP + 0x10]
//   XREF to: Stack[0x8] (READ)
// 00487890: ADD EAX,EDX
// 00487892: PUSH EAX
// 00487893: MOV EDX,dword ptr [ESP + 0x10]
//   XREF to: Stack[0x4] (READ)
// 00487897: PUSH EDX
// 00487898: CALL cockpit_drawsurf.cpp_CDrawSurface_drawCircle_FUN_00487730
//   XREF to: 00487730 (UNCONDITIONAL_CALL)
// 0048789d: ADD ESP,0x10
// 004878a0: RET
