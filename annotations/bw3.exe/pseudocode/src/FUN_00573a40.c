// Name: FUN_00573a40
// Address: 00573a40
// Address Range: [[00573a40, 00573a9c]]
// Convention: unknown
// Signature: undefined4 * FUN_00573a40(undefined4 *param_1,byte param_2)

#include "nocturne.h"

uint * FUN_00573a40(uint *param_1,byte param_2)

{
  uint *puVar1;
  uint uVar2;
  
  if ((param_2 & 4) != 0) {
    uVar2 = FUN_005a308f(param_1,&DAT_005daf90);
    FUN_005a30b6(uVar2);
    return param_1;
  }
  *param_1 = &PTR_FUN_005e5a84;
  FUN_00573db0(param_1);
  puVar1 = (uint *)FUN_00572540(param_1,1);
  if ((param_2 & 2) == 0) {
    return puVar1;
  }
  FUN_005a30c4(puVar1);
  return puVar1;
}
