// Name: FUN_0057dba0
// Address: 0057dba0
// Address Range: [[0057dba0, 0057dbd5]]
// Convention: unknown
// Signature: undefined4 * FUN_0057dba0(undefined4 param_1,undefined4 param_2,undefined4 param_3)

#include "nocturne.h"

uint * FUN_0057dba0(uint param_1,uint param_2,uint param_3)

{
  uint *puVar1;
  
  puVar1 = (uint *)FUN_0057d860(param_1);
  *puVar1 = &PTR_FUN_005fd484;
  puVar1[1] = 0;
  FUN_0057dd90(puVar1,param_2,param_3);
  return puVar1;
}
