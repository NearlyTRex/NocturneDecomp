// Name: FUN_00572630
// Address: 00572630
// Address Range: [[00572630, 005726b1]]
// Convention: unknown
// Signature: void FUN_00572630(int param_1)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00572630(int param_1)

{
  uint uVar1;
  
  FUN_00547480(param_1 + 0x2b4);
  FUN_00487eb0(param_1);
  uVar1 = FUN_00547890(param_1 + 0x2b4);
  _DAT_0264c0b0 = FUN_00540e80(uVar1,"bipp02",1);
  _DAT_0264c0b4 = FUN_00540e80(uVar1,"bipp05",1);
  _DAT_0264c0b8 = FUN_00540e80(uVar1,"bipp06",1);
  _DAT_0264c0bc = FUN_00540e80(uVar1,"bipp09",1);
  return;
}
