// Name: FUN_00434f40
// Address: 00434f40
// Address Range: [[00434f40, 00434f9c]]
// Convention: unknown
// Signature: undefined4 * FUN_00434f40(undefined4 *param_1,byte param_2)

#include "nocturne.h"

uint * FUN_00434f40(uint *param_1,byte param_2)

{
  uint *puVar1;
  uint uVar2;
  
  if ((param_2 & 4) != 0) {
    uVar2 = FUN_005b7fa7(param_1,&DAT_005f43d0);
    FUN_005b7fce(uVar2);
    return param_1;
  }
  *param_1 = &PTR_FUN_005f4344;
  FUN_004351e0(param_1);
  puVar1 = (uint *)FUN_0057b9d0(param_1,1);
  if ((param_2 & 2) == 0) {
    return puVar1;
  }
  FUN_005b7fdc(puVar1);
  return puVar1;
}
