// Name: FUN_005747e0
// Address: 005747e0
// Address Range: [[005747e0, 00574815]]
// Convention: unknown
// Signature: undefined4 * FUN_005747e0(undefined4 param_1,undefined4 param_2,undefined4 param_3)

#include "nocturne.h"

uint * FUN_005747e0(uint param_1,uint param_2,uint param_3)

{
  uint *puVar1;
  
  puVar1 = (uint *)FUN_005744a0(param_1);
  *puVar1 = &PTR_FUN_005e5b24;
  puVar1[1] = 0;
  FUN_005749d0(puVar1,param_2,param_3);
  return puVar1;
}
