// Name: cockpit_drawsurf.cpp_CDrawSurface_drawCircleFromBottomRight_FUN_004878b0
// Address: 004878b0
// Address Range: [[004878b0, 004878d0]]
// Convention: __cdecl
// Signature: void cockpit_drawsurf.cpp_CDrawSurface_drawCircleFromBottomRight_FUN_004878b0(CDrawSurface * this_ptr, int bottom_right_x, int bottom_right_y, int radius)
// Cross-references:
//   cockpit_drawsurf.cpp_testDrawingSurface_FUN_00489d30 (00489d30) at 00489e8e [UNCONDITIONAL_CALL]
// Function calls:
//   cockpit_drawsurf.cpp_CDrawSurface_drawCircle_FUN_00487730

#include "nocturne.h"

void __cdecl
cockpit_drawsurf_cpp_CDrawSurface_drawCircleFromBottomRight_FUN_004878b0
          (CDrawSurface *this_ptr,int bottom_right_x,int bottom_right_y,int radius)

{
  cockpit_drawsurf_cpp_CDrawSurface_drawCircle_FUN_00487730
            (this_ptr,bottom_right_x - radius,bottom_right_y - radius,radius);
  return;
}


// Assembly code:
// 004878b0: MOV EDX,dword ptr [ESP + 0x10]
//   Label: cockpit_drawsurf.cpp_CDrawSurface_drawCircleFromBottomRight_FUN_004878b0
//   XREF to: Stack[0x10] (READ)
// 004878b4: MOV EAX,dword ptr [ESP + 0xc]
//   XREF to: Stack[0xc] (READ)
// 004878b8: PUSH EDX
// 004878b9: SUB EAX,EDX
// 004878bb: PUSH EAX
// 004878bc: MOV EAX,dword ptr [ESP + 0x10]
//   XREF to: Stack[0x8] (READ)
// 004878c0: SUB EAX,EDX
// 004878c2: PUSH EAX
// 004878c3: MOV EDX,dword ptr [ESP + 0x10]
//   XREF to: Stack[0x4] (READ)
// 004878c7: PUSH EDX
// 004878c8: CALL cockpit_drawsurf.cpp_CDrawSurface_drawCircle_FUN_00487730
//   XREF to: 00487730 (UNCONDITIONAL_CALL)
// 004878cd: ADD ESP,0x10
// 004878d0: RET
