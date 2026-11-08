// Name: FUN_005a1860
// Address: 005a1860
// Address Range: [[005a1860, 005a18bc]]
// Convention: unknown
// Signature: undefined4 * FUN_005a1860(undefined4 *param_1,byte param_2)

#include "nocturne.h"

uint * FUN_005a1860(uint *param_1,byte param_2)

{
  uint *puVar1;
  uint uVar2;
  
  if ((param_2 & 4) != 0) {
    uVar2 = FUN_005c030f(param_1,&DAT_005fb2f0);
    FUN_005c0336(uVar2);
    return param_1;
  }
  *param_1 = &PTR_FUN_00607424;
  FUN_005a19b0(param_1);
  puVar1 = (uint *)FUN_005a14b0(param_1,1);
  if ((param_2 & 2) == 0) {
    return puVar1;
  }
  FUN_005c0344(puVar1);
  return puVar1;
}
