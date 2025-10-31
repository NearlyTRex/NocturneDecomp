// Name: cockpit_drawsurf.cpp_setCurrentFont_FUN_004874c0
// Address: 004874c0
// Address Range: [[004874c0, 004874c9]]
// Convention: __cdecl
// Signature: void cockpit_drawsurf.cpp_setCurrentFont_FUN_004874c0(CBitFont * font_ptr)
// Cross-references:
//   cockpit_drawsurf.cpp_testDrawingSurface_FUN_00489d30 (00489d30) at 00489ea5 [UNCONDITIONAL_CALL]
//   core_script.cpp_CScript_RelatedToSubtitles_FUN_00559d80 (00559d80) at 00559ddf [UNCONDITIONAL_CALL]
// Globals:
//   CBitFont* g_CurrentFont

#include "nocturne.h"

void __cdecl cockpit_drawsurf_cpp_setCurrentFont_FUN_004874c0(CBitFont *font_ptr)

{
  g_CurrentFont = font_ptr;
  return;
}


// Assembly code:
// 004874c0: MOV EAX,dword ptr [ESP + 0x4]
//   Label: cockpit_drawsurf.cpp_setCurrentFont_FUN_004874c0
//   XREF to: Stack[0x4] (READ)
// 004874c4: MOV [0x02c6d558],EAX
//   XREF to: 02c6d558 (WRITE)
// 004874c9: RET
