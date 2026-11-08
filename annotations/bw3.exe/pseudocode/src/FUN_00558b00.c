// Name: FUN_00558b00
// Address: 00558b00
// Address Range: [[00558b00, 00558b0e]]
// Convention: unknown
// Signature: undefined4 FUN_00558b00(void)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint FUN_00558b00(void)

{
  int iVar1;
  uint uVar2;
  
  iVar1 = FUN_00558af0();
  uVar2 = 0;
  if (iVar1 != 0) {
    uVar2 = _DAT_02cf3c6c;
  }
  return uVar2;
}
