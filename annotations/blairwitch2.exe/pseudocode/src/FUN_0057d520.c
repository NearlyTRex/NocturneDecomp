// Name: FUN_0057d520
// Address: 0057d520
// Address Range: [[0057d520, 0057d56a]]
// Convention: unknown
// Signature: undefined4 * FUN_0057d520(undefined4 param_1,undefined4 param_2,undefined4 param_3)

#include "nocturne.h"

uint * FUN_0057d520(uint param_1,uint param_2,uint param_3)

{
  uint *puVar1;
  
  puVar1 = (uint *)FUN_0057b9c0(param_1);
  *puVar1 = &PTR_FUN_005fd424;
  puVar1[1] = 0;
  puVar1[2] = 0;
  puVar1[3] = 0;
  puVar1[4] = 0;
  FUN_0057d800(puVar1,param_2,param_3);
  return puVar1;
}
