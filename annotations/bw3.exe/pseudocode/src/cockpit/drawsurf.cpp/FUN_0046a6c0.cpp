// Name: cockpit_drawsurf.cpp_FUN_0046a6c0
// Address: 0046a6c0
// Address Range: [[0046a6c0, 0046a6f7]]
// Convention: unknown
// Signature: int cockpit_drawsurf_cpp_FUN_0046a6c0(void)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int cockpit_drawsurf_cpp_FUN_0046a6c0(void)

{
  int iVar1;
  int in_stack_00000008;
  char acStack_4 [4];
  
  if (_DAT_01bdd7c4 != (CBitFont *)0x0) {
    iVar1 = engine_font_cpp_CBitFont_getCharWidth_FUN_004b30c0(_DAT_01bdd7c4,in_stack_00000008);
    return iVar1;
  }
  acStack_4[0] = (char)in_stack_00000008;
  acStack_4[1] = 0;
  iVar1 = engine_2d_c_getStringWidth_FUN_004018b0(acStack_4);
  return iVar1 + -1;
}
