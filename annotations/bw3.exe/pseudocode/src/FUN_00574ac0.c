// Name: FUN_00574ac0
// Address: 00574ac0
// Address Range: [[00574ac0, 00574b11]]
// Convention: unknown
// Signature: undefined4 * FUN_00574ac0(undefined4 param_1,undefined4 param_2,undefined4 param_3)

#include "nocturne.h"

uint * FUN_00574ac0(uint param_1,uint param_2,uint param_3)

{
  uint *puVar1;
  
  puVar1 = (uint *)FUN_005744a0(param_1);
  *puVar1 = &PTR_FUN_005e5b54;
  puVar1[1] = 0;
  puVar1[2] = 0;
  puVar1[3] = 0;
  puVar1[4] = 0;
  puVar1[5] = 1;
  FUN_00574d50(puVar1,param_2,param_3);
  return puVar1;
}
