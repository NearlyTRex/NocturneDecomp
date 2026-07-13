// Name: FUN_00558000
// Address: 00558000
// Address Range: [[00558000, 0055805c]]
// Convention: unknown
// Signature: undefined4 * FUN_00558000(undefined4 *param_1,byte param_2)

#include "nocturne.h"

uint * FUN_00558000(uint *param_1,byte param_2)

{
  uint *puVar1;
  uint uVar2;
  
  if ((param_2 & 4) != 0) {
    uVar2 = FUN_0056445f(param_1,&DAT_005a44a0);
    FUN_00564486(uVar2);
    return param_1;
  }
  *param_1 = &PTR_FUN_005a4484;
  FUN_005586a0(param_1);
  puVar1 = (uint *)FUN_004eefc0(param_1,1);
  if ((param_2 & 2) == 0) {
    return puVar1;
  }
  FUN_00564494(puVar1);
  return puVar1;
}
