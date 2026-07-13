// Name: FUN_00543bc0
// Address: 00543bc0
// Address Range: [[00543bc0, 00543c41]]
// Convention: unknown
// Signature: void FUN_00543bc0(int param_1)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00543bc0(int param_1)

{
  uint uVar1;
  
  FUN_0051dcd0(param_1 + 0x150);
  FUN_004796b0(param_1);
  uVar1 = FUN_0051e0a0(param_1 + 0x150);
  _DAT_02dca1d0 = FUN_005179d0(uVar1,"bipp02",1);
  _DAT_02dca1d4 = FUN_005179d0(uVar1,"bipp05",1);
  _DAT_02dca1d8 = FUN_005179d0(uVar1,"bipp06",1);
  _DAT_02dca1dc = FUN_005179d0(uVar1,"bipp09",1);
  return;
}
