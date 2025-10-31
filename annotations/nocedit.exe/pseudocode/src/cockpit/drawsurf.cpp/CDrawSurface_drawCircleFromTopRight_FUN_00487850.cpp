// Name: cockpit_drawsurf.cpp_CDrawSurface_drawCircleFromTopRight_FUN_00487850
// Address: 00487850
// Address Range: [[00487850, 00487870]]
// Convention: __cdecl
// Signature: void cockpit_drawsurf.cpp_CDrawSurface_drawCircleFromTopRight_FUN_00487850(CDrawSurface * this_ptr, int top_right_x, int top_right_y, int radius)
// Cross-references:
//   cockpit_drawsurf.cpp_testDrawingSurface_FUN_00489d30 (00489d30) at 00489e65 [UNCONDITIONAL_CALL]
// Function calls:
//   cockpit_drawsurf.cpp_CDrawSurface_drawCircle_FUN_00487730

#include "nocturne.h"

void __cdecl
cockpit_drawsurf_cpp_CDrawSurface_drawCircleFromTopRight_FUN_00487850
          (CDrawSurface *this_ptr,int top_right_x,int top_right_y,int radius)

{
  cockpit_drawsurf_cpp_CDrawSurface_drawCircle_FUN_00487730
            (this_ptr,top_right_x - radius,top_right_y + radius,radius);
  return;
}


// Assembly code:
// 00487850: MOV EDX,dword ptr [ESP + 0x10]
//   Label: cockpit_drawsurf.cpp_CDrawSurface_drawCircleFromTopRight_FUN_00487850
//   XREF to: Stack[0x10] (READ)
// 00487854: MOV EAX,dword ptr [ESP + 0xc]
//   XREF to: Stack[0xc] (READ)
// 00487858: PUSH EDX
// 00487859: ADD EAX,EDX
// 0048785b: PUSH EAX
// 0048785c: MOV EAX,dword ptr [ESP + 0x10]
//   XREF to: Stack[0x8] (READ)
// 00487860: SUB EAX,EDX
// 00487862: PUSH EAX
// 00487863: MOV EDX,dword ptr [ESP + 0x10]
//   XREF to: Stack[0x4] (READ)
// 00487867: PUSH EDX
// 00487868: CALL cockpit_drawsurf.cpp_CDrawSurface_drawCircle_FUN_00487730
//   XREF to: 00487730 (UNCONDITIONAL_CALL)
// 0048786d: ADD ESP,0x10
// 00487870: RET
