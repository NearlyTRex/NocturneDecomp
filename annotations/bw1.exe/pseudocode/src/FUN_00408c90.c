// Name: FUN_00408c90
// Address: 00408c90
// Address Range: [[00408c90, 00408cc0]]
// Convention: unknown
// Signature: undefined4 FUN_00408c90(int param_1,undefined4 param_2,undefined4 param_3)

#include "nocturne.h"

uint FUN_00408c90(int param_1,uint param_2,uint param_3)

{
  uint uVar1;
  
  uVar1 = FUN_0057d980(0x02C82A60,param_1,param_2,param_1 + 0x20,param_3);
  return uVar1;
}
