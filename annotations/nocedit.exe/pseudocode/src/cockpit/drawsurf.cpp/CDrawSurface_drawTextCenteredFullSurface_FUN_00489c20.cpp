// Name: cockpit_drawsurf.cpp_CDrawSurface_drawTextCenteredFullSurface_FUN_00489c20
// Address: 00489c20
// Address Range: [[00489c20, 00489c3f]]
// Convention: __cdecl
// Signature: void cockpit_drawsurf.cpp_CDrawSurface_drawTextCenteredFullSurface_FUN_00489c20(CDrawSurface * this_ptr, char * text)
// Cross-references:
//   cockpit_drawsurf.cpp_CDrawSurface_drawTextCenteredFullSurfacePrintf_FUN_00489c40 (00489c40) at 00489c86 [UNCONDITIONAL_CALL]
//   core_script.cpp_CScript_RelatedToSubtitles_FUN_00559d80 (00559d80) at 00559f6d [UNCONDITIONAL_CALL]
// Function calls:
//   cockpit_drawsurf.cpp_CDrawSurface_drawTextCenteredInAreaWithWidth_FUN_004899c0

#include "nocturne.h"

void __cdecl
cockpit_drawsurf_cpp_CDrawSurface_drawTextCenteredFullSurface_FUN_00489c20
          (CDrawSurface *this_ptr,char *text)

{
  cockpit_drawsurf_cpp_CDrawSurface_drawTextCenteredInAreaWithWidth_FUN_004899c0
            (this_ptr,(int)text,0,this_ptr->width + -1,0,(char *)(this_ptr->height + -1));
  return;
}


// Assembly code:
// 00489c20: MOV EDX,dword ptr [ESP + 0x4]
//   Label: cockpit_drawsurf.cpp_CDrawSurface_drawTextCenteredFullSurface_FUN_00489c20
//   XREF to: Stack[0x4] (READ)
// 00489c24: MOV EAX,dword ptr [EDX + 0x4]
// 00489c27: DEC EAX
// 00489c28: PUSH EAX
// 00489c29: MOV EAX,dword ptr [EDX]
// 00489c2b: PUSH 0x0
// 00489c2d: DEC EAX
// 00489c2e: PUSH EAX
// 00489c2f: PUSH 0x0
// 00489c31: MOV ECX,dword ptr [ESP + 0x18]
//   XREF to: Stack[0x8] (READ)
// 00489c35: PUSH ECX
// 00489c36: PUSH EDX
// 00489c37: CALL cockpit_drawsurf.cpp_CDrawSurface_drawTextCenteredInAreaWithWidth_FUN_004899c0
//   XREF to: 004899c0 (UNCONDITIONAL_CALL)
// 00489c3c: ADD ESP,0x18
// 00489c3f: RET
