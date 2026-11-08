// Name: FUN_0056a960
// Address: 0056a960
// Address Range: [[0056a960, 0056a9b1]]
// Convention: unknown
// Signature: void FUN_0056a960(void)

#include "nocturne.h"

/* WARNING: Removing unreachable block (ram,0x0056a97a) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0056a960(void)

{
  int iVar1;
  
  iVar1 = FUN_005a3cb2(0x1800c);
  if (iVar1 == 0) {
    _DAT_02cfd0d0 = 0;
  }
  else {
    _DAT_02cfd0d0 = FUN_00569550(iVar1);
    if (_DAT_02cfd0d0 != 0) {
      return;
    }
  }
  _DAT_01d71de0 = "..\\engine\\texture.cpp";
  _DAT_01d71de4 = 0x3c2;
  FUN_004e4330("initTexture - out of memory!");
  return;
}
