// Name: FUN_00574850
// Address: 00574850
// Address Range: [[00574850, 005748ac]]
// Convention: unknown
// Signature: undefined4 * FUN_00574850(undefined4 *param_1,byte param_2)

#include "nocturne.h"

uint * FUN_00574850(uint *param_1,byte param_2)

{
  uint *puVar1;
  uint uVar2;
  
  if ((param_2 & 4) != 0) {
    uVar2 = FUN_005a308f(param_1,&DAT_005dafb0);
    FUN_005a30b6(uVar2);
    return param_1;
  }
  *param_1 = &PTR_FUN_005e5b24;
  FUN_005749a0(param_1);
  puVar1 = (uint *)FUN_005744a0(param_1,1);
  if ((param_2 & 2) == 0) {
    return puVar1;
  }
  FUN_005a30c4(puVar1);
  return puVar1;
}
