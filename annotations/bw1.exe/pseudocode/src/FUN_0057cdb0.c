// Name: FUN_0057cdb0
// Address: 0057cdb0
// Address Range: [[0057cdb0, 0057cdfb]]
// Convention: unknown
// Signature: void FUN_0057cdb0(void)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0057cdb0(void)

{
  uint *puVar1;
  int iVar2;
  
  iVar2 = 0;
  _DAT_02c832a4 = 0;
  do {
    puVar1 = (uint *)(iVar2 + 0x2c832c0);
    iVar2 = iVar2 + 0x10;
    FUN_00573a80(*puVar1);
  } while (iVar2 != 0xa0);
  FUN_00573a80(_DAT_02c83368);
  FUN_00573a80(_DAT_02c8336c);
  FUN_005750e0();
  return;
}
