// Name: FUN_00552f60
// Address: 00552f60
// Address Range: [[00552f60, 00552f6e]]
// Convention: unknown
// Signature: undefined4 FUN_00552f60(void)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint FUN_00552f60(void)

{
  int iVar1;
  uint uVar2;
  
  iVar1 = FUN_00552f50();
  uVar2 = 0;
  if (iVar1 != 0) {
    uVar2 = _DAT_0264986c;
  }
  return uVar2;
}
