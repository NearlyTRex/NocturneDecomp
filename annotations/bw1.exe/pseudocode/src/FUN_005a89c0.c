// Name: FUN_005a89c0
// Address: 005a89c0
// Address Range: [[005a89c0, 005a8a07]]
// Convention: unknown
// Signature: undefined4 FUN_005a89c0(int param_1,undefined4 param_2)

#include "nocturne.h"

uint FUN_005a89c0(int param_1,uint param_2)

{
  uint uVar1;
  
  FUN_00572ac0();
  FUN_005727e0(param_1 + 0x20);
  FUN_00572880(param_1 + 0x1060);
  uVar1 = FUN_0057d8d0(0x02C82A60,param_1,param_2,param_1 + 0x20);
  FUN_00572b40();
  return uVar1;
}
