// Name: FUN_00595260
// Address: 00595260
// Address Range: [[00595260, 005952e1]]
// Convention: unknown
// Signature: void FUN_00595260(int param_1)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00595260(int param_1)

{
  uint uVar1;
  
  FUN_00569b20(param_1 + 0x158);
  FUN_004a0510(param_1);
  uVar1 = FUN_00569f30(param_1 + 0x158);
  _DAT_02c83880 = FUN_005634f0(uVar1,"bipp02",1);
  _DAT_02c83884 = FUN_005634f0(uVar1,"bipp05",1);
  _DAT_02c83888 = FUN_005634f0(uVar1,"bipp06",1);
  _DAT_02c8388c = FUN_005634f0(uVar1,"bipp09",1);
  return;
}
