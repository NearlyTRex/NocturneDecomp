// Name: cockpit_drawsurf.cpp_FUN_0046a6bc
// Address: 0046a6bc
// Address Range: [[0046a6bc, 0046a6f7]]
// Convention: unknown
// Signature: int cockpit_drawsurf_cpp_FUN_0046a6bc(undefined4 param_1,int param_2)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int cockpit_drawsurf_cpp_FUN_0046a6bc(uint param_1,int param_2)

{
  int iVar1;
  char acStack_4 [4];
  
  if (_DAT_01bdd7c4 != (CBitFont *)0x0) {
    iVar1 = engine_font_cpp_CBitFont_getCharWidth_FUN_004b30c0(_DAT_01bdd7c4,param_2);
    return iVar1;
  }
  acStack_4[0] = (char)param_2;
  acStack_4[1] = 0;
  iVar1 = engine_2d_c_getStringWidth_FUN_004018b0(acStack_4);
  return iVar1 + -1;
}
