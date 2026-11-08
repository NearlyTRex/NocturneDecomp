// Name: FUN_0057e1e0
// Address: 0057e1e0
// Address Range: [[0057e1e0, 0057e233]]
// Convention: unknown
// Signature: undefined4 * FUN_0057e1e0(undefined4 *param_1,byte param_2)

#include "nocturne.h"

uint * FUN_0057e1e0(uint *param_1,byte param_2)

{
  uint *puVar1;
  uint uVar2;
  
  if ((param_2 & 4) != 0) {
    uVar2 = FUN_005b7fa7(param_1,&DAT_005fd4f0);
    FUN_005b7fce(uVar2);
    return param_1;
  }
  *param_1 = &PTR_FUN_005fd4d4;
  puVar1 = (uint *)FUN_0057d860(param_1,1);
  if ((param_2 & 2) == 0) {
    return puVar1;
  }
  FUN_005b7fdc(puVar1);
  return puVar1;
}
