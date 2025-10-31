// Name: cockpit_drawsurf.cpp_CDrawSurface_drawSurfaceBorder_FUN_00488530
// Address: 00488530
// Address Range: [[00488530, 0048854a]]
// Convention: __cdecl
// Signature: void cockpit_drawsurf.cpp_CDrawSurface_drawSurfaceBorder_FUN_00488530(CDrawSurface * this_ptr)
// Cross-references:
//   cockpit_drawsurf.cpp_testDrawingSurface_FUN_00489d30 (00489d30) at 00489dfe [UNCONDITIONAL_CALL]
//   core_script.cpp_CScript_RelatedToSubtitles_FUN_00559d80 (00559d80) at 00559f19 [UNCONDITIONAL_CALL]
// Function calls:
//   cockpit_drawsurf.cpp_CDrawSurface_drawRectangleOutline_FUN_004884d0

#include "nocturne.h"

void __cdecl
cockpit_drawsurf_cpp_CDrawSurface_drawSurfaceBorder_FUN_00488530(CDrawSurface *this_ptr)

{
  cockpit_drawsurf_cpp_CDrawSurface_drawRectangleOutline_FUN_004884d0
            (this_ptr,0,0,this_ptr->width + -1,this_ptr->height + -1);
  return;
}


// Assembly code:
// 00488530: MOV EDX,dword ptr [ESP + 0x4]
//   Label: cockpit_drawsurf.cpp_CDrawSurface_drawSurfaceBorder_FUN_00488530
//   XREF to: Stack[0x4] (READ)
// 00488534: MOV EAX,dword ptr [EDX + 0x4]
// 00488537: DEC EAX
// 00488538: PUSH EAX
// 00488539: MOV EAX,dword ptr [EDX]
// 0048853b: DEC EAX
// 0048853c: PUSH EAX
// 0048853d: PUSH 0x0
// 0048853f: PUSH 0x0
// 00488541: PUSH EDX
// 00488542: CALL cockpit_drawsurf.cpp_CDrawSurface_drawRectangleOutline_FUN_004884d0
//   XREF to: 004884d0 (UNCONDITIONAL_CALL)
// 00488547: ADD ESP,0x14
// 0048854a: RET
