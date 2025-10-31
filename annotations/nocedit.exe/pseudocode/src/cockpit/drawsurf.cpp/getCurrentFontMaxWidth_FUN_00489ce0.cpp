// Name: cockpit_drawsurf.cpp_getCurrentFontMaxWidth_FUN_00489ce0
// Address: 00489ce0
// Address Range: [[00489ce0, 00489cf6]]
// Convention: __cdecl
// Signature: int cockpit_drawsurf.cpp_getCurrentFontMaxWidth_FUN_00489ce0(void)
// Cross-references:
//   core_script.cpp_CScript_RelatedToSubtitles_FUN_00559d80 (00559d80) at 00559df7 [UNCONDITIONAL_CALL]
// Globals:
//   CBitFont* g_CurrentFont

#include "nocturne.h"

int __cdecl cockpit_drawsurf_cpp_getCurrentFontMaxWidth_FUN_00489ce0(void)

{
  if (g_CurrentFont != (CBitFont *)0x0) {
    return g_CurrentFont->current_max_width;
  }
  return 0xb;
}


// Assembly code:
// 00489ce0: MOV EDX,dword ptr [0x02c6d558]
//   Label: cockpit_drawsurf.cpp_getCurrentFontMaxWidth_FUN_00489ce0
//   XREF to: 02c6d558 (READ)
// 00489ce6: TEST EDX,EDX
// 00489ce8: JZ 0x00489cf1
//   XREF to: 00489cf1 (CONDITIONAL_JUMP)
// 00489cea: MOV EAX,dword ptr [EDX + 0x3170]
// 00489cf0: RET
// 00489cf1: MOV EAX,0xb
//   Label: LAB_00489cf1
// 00489cf6: RET
