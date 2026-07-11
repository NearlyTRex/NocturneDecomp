// Name: FUN_00532680
// Address: 00532680
// Address Range: [[00532680, 005327b5]]
// Convention: unknown
// Signature: undefined4 FUN_00532680(int param_1,int *param_2,int param_3,undefined4 param_4)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint FUN_00532680(int param_1,int *param_2,int param_3,uint param_4)

{
  int iVar1;
  uint uVar2;
  int iVar3;
  int local_20;
  int local_1c;
  int local_18;
  int local_14;
  
  if (_DAT_01c02594 == 0) {
    return 0;
  }
  _DAT_01e52ef8 = _DAT_01e52ef8 + param_3;
  if (_DAT_02dc9db0 != (code *)0x0) {
    uVar2 = (*_DAT_02dc9db0)(param_1,param_2,param_3,param_4);
    return uVar2;
  }
  iVar3 = 0;
  if (0 < param_3) {
    do {
      iVar1 = *param_2;
      local_20 = param_1 + *(int *)(iVar1 + 0x18) * 0x30;
      local_1c = param_1 + *(int *)(iVar1 + 0x24) * 0x30;
      local_18 = param_1 + *(int *)(iVar1 + 0x30) * 0x30;
      if (*(int *)(iVar1 + 4) == 4) {
        local_14 = param_1 + *(int *)(iVar1 + 0x3c) * 0x30;
      }
      *(uint *)(local_20 + 0x18) = *(uint *)(iVar1 + 0x1c);
      *(uint *)(local_20 + 0x1c) = *(uint *)(iVar1 + 0x20);
      *(uint *)(local_1c + 0x18) = *(uint *)(iVar1 + 0x28);
      *(uint *)(local_1c + 0x1c) = *(uint *)(iVar1 + 0x2c);
      *(uint *)(local_18 + 0x18) = *(uint *)(iVar1 + 0x34);
      *(uint *)(local_18 + 0x1c) = *(uint *)(iVar1 + 0x38);
      if (*(int *)(iVar1 + 4) == 4) {
        *(uint *)(local_14 + 0x18) = *(uint *)(iVar1 + 0x40);
        *(uint *)(local_14 + 0x1c) = *(uint *)(iVar1 + 0x44);
      }
      param_2 = param_2 + 1;
      iVar3 = iVar3 + 1;
      (*_DAT_02dc9dac)(&local_20,*(uint *)(iVar1 + 4),param_4);
    } while (iVar3 < param_3);
  }
  return 1;
}
