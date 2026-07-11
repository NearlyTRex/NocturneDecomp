// Name: FUN_005327c0
// Address: 005327c0
// Address Range: [[005327c0, 005328fc]]
// Convention: unknown
// Signature: undefined4 FUN_005327c0(int param_1,undefined4 *param_2,int param_3,undefined4 param_4)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint FUN_005327c0(int param_1,uint *param_2,int param_3,uint param_4)

{
  ushort *puVar1;
  uint uVar2;
  int iVar3;
  int local_1c;
  int local_18;
  int local_14;
  
  if (_DAT_01c02594 == 0) {
    return 0;
  }
  _DAT_01e52ef8 = _DAT_01e52ef8 + param_3;
  if (_DAT_02dc9db4 != (code *)0x0) {
    uVar2 = (*_DAT_02dc9db4)(param_1,param_2,param_3,param_4);
    return uVar2;
  }
  if (0 < param_3) {
    iVar3 = 0;
    do {
      puVar1 = (ushort *)*param_2;
      local_1c = param_1 + (uint)*puVar1 * 0x30;
      local_18 = param_1 + (uint)puVar1[1] * 0x30;
      local_14 = param_1 + (uint)puVar1[2] * 0x30;
      *(uint *)(local_1c + 0x18) = (uint)puVar1[3] << 8;
      *(uint *)(local_1c + 0x1c) = (uint)puVar1[6] << 8;
      *(uint *)(local_18 + 0x18) = (uint)puVar1[4] << 8;
      *(uint *)(local_18 + 0x1c) = (uint)puVar1[7] << 8;
      *(uint *)(local_14 + 0x18) = (uint)puVar1[5] << 8;
      *(uint *)(local_14 + 0x1c) = (uint)puVar1[8] << 8;
      (*_DAT_02dc9dac)(&local_1c,3,param_4);
      iVar3 = iVar3 + 1;
      param_2 = param_2 + 1;
    } while (iVar3 < param_3);
  }
  return 1;
}
