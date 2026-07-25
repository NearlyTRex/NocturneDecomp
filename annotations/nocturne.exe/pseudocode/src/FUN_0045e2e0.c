// Name: FUN_0045e2e0
// Address: 0045e2e0
// Address Range: [[0045e2e0, 0045e317]]
// Convention: unknown
// Signature: int FUN_0045e2e0(void)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int FUN_0045e2e0(void)

{
  int iVar1;
  byte local_4;
  byte local_3;
  
  if (_DAT_01b4d718 != 0) {
    iVar1 = engine_font_cpp_CBitFont_getCharWidth_FUN_004930b0(_DAT_01b4d718);
    return iVar1;
  }
  local_3 = 0;
  iVar1 = engine_2d_c_getStringWidth_FUN_00401ed0(&local_4);
  return iVar1 + -1;
}
