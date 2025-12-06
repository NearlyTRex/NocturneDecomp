// Name: cockpit_drawsurf.cpp_getCurrentCharWidth_FUN_00489ca0
// Address: 00489ca0
// Address Range: [[00489ca0, 00489cd7]]
// Convention: __cdecl
// Signature: int cockpit_drawsurf.cpp_getCurrentCharWidth_FUN_00489ca0(char character)

#include "nocturne.h"

int __cdecl cockpit_drawsurf_cpp_getCurrentCharWidth_FUN_00489ca0(char character)

{
  int iVar1;
  BADSPACEBASE *in_ESP;
  int in_stack_00000008;
  char local_4 [4];
  
  if (g_CurrentFont != (CBitFont *)0x0) {
    iVar1 = engine_font_cpp_CBitFont_getCharWidth_FUN_004d01a0(g_CurrentFont,in_stack_00000008);
    return iVar1;
  }
  local_4[0] = (char)in_stack_00000008;
  local_4[1] = 0;
  iVar1 = engine_2d_c_getStringWidth_FUN_004018a0(local_4);
  return iVar1 + -1;
}
