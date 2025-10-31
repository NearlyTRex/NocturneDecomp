// Name: cockpit_drawsurf.cpp_CDrawSurface_fillFullSurface_FUN_00488c70
// Address: 00488c70
// Address Range: [[00488c70, 00488c8a]]
// Convention: __cdecl
// Signature: void cockpit_drawsurf.cpp_CDrawSurface_fillFullSurface_FUN_00488c70(CDrawSurface * this_ptr)
// Cross-references:
//   cockpit_drawsurf.cpp_testDrawingSurface_FUN_00489d30 (00489d30) at 00489de7 [UNCONDITIONAL_CALL]
//   core_script.cpp_CScript_RelatedToSubtitles_FUN_00559d80 (00559d80) at 00559dd5 [UNCONDITIONAL_CALL]
// Function calls:
//   cockpit_drawsurf.cpp_CDrawSurface_fillRectangle_FUN_00488ad0

#include "nocturne.h"

void __cdecl cockpit_drawsurf_cpp_CDrawSurface_fillFullSurface_FUN_00488c70(CDrawSurface *this_ptr)

{
  cockpit_drawsurf_cpp_CDrawSurface_fillRectangle_FUN_00488ad0
            (this_ptr,0,0,this_ptr->width + -1,this_ptr->height + -1);
  return;
}


// Assembly code:
// 00488c70: MOV EDX,dword ptr [ESP + 0x4]
//   Label: cockpit_drawsurf.cpp_CDrawSurface_fillFullSurface_FUN_00488c70
//   XREF to: Stack[0x4] (READ)
// 00488c74: MOV EAX,dword ptr [EDX + 0x4]
// 00488c77: DEC EAX
// 00488c78: PUSH EAX
// 00488c79: MOV EAX,dword ptr [EDX]
// 00488c7b: DEC EAX
// 00488c7c: PUSH EAX
// 00488c7d: PUSH 0x0
// 00488c7f: PUSH 0x0
// 00488c81: PUSH EDX
// 00488c82: CALL cockpit_drawsurf.cpp_CDrawSurface_fillRectangle_FUN_00488ad0
//   XREF to: 00488ad0 (UNCONDITIONAL_CALL)
// 00488c87: ADD ESP,0x14
// 00488c8a: RET
