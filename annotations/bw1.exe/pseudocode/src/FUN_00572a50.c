// Name: FUN_00572a50
// Address: 00572a50
// Address Range: [[00572a50, 00572a80]]
// Convention: unknown
// Signature: void FUN_00572a50(undefined4 param_1,undefined4 param_2,undefined4 param_3)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00572a50(uint param_1,uint param_2,uint param_3)

{
  int iVar1;
  
  iVar1 = _DAT_02c78cec * 0x60;
  *(uint *)(iVar1 + 0x2c78d40) = param_1;
  *(uint *)(iVar1 + 0x2c78d44) = param_2;
  *(uint *)(iVar1 + 0x2c78d48) = param_3;
  return;
}
