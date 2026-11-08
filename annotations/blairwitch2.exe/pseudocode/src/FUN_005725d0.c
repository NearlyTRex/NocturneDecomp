// Name: FUN_005725d0
// Address: 005725d0
// Address Range: [[005725d0, 0057262f]]
// Convention: unknown
// Signature: int FUN_005725d0(undefined4 param_1)

#include "nocturne.h"

int FUN_005725d0(uint param_1)

{
  int iVar1;
  
  iVar1 = FUN_00487db0(param_1);
  *(uint *)(iVar1 + 0x2b0) = 0x5fcc84;
  FUN_005478b0(iVar1 + 0x2b4,"tentacle.dfm");
  *(uint *)(iVar1 + 0x3438) = 0x42480000;
  *(uint *)(iVar1 + 0x343c) = 0x42c80000;
  *(uint *)(iVar1 + 0x10af8) = 0;
  *(uint *)(iVar1 + 0x10afc) = 0;
  *(uint *)(iVar1 + 0x10b00) = 0;
  return iVar1;
}
