// Name: FUN_00597970
// Address: 00597970
// Address Range: [[00597970, 005979c1]]
// Convention: unknown
// Signature: void FUN_00597970(void)

#include "nocturne.h"

/* WARNING: Removing unreachable block (ram,0x0059798a) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00597970(void)

{
  int iVar1;
  
  iVar1 = FUN_005c0f32(0x1800c);
  if (iVar1 == 0) {
    _DAT_02c8a680 = 0;
  }
  else {
    _DAT_02c8a680 = FUN_00596560(iVar1);
    if (_DAT_02c8a680 != 0) {
      return;
    }
  }
  _DAT_01d1d400 = "..\\engine\\texture.cpp";
  _DAT_01d1d404 = 0x3c2;
  FUN_005030e0("initTexture - out of memory!");
  return;
}
