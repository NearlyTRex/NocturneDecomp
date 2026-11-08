// Name: FUN_00538180
// Address: 00538180
// Address Range: [[00538180, 005382c3]]
// Convention: unknown
// Signature: undefined4 FUN_00538180(int param_1,int param_2)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint FUN_00538180(int param_1,int param_2)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  uint *puVar4;
  uint *puVar5;
  byte bVar6;
  float afStackY_1014 [1004];
  float local_44;
  float fStack_40;
  float fStack_3c;
  float fStack_38;
  float fStack_34;
  float fStack_30;
  float local_2c;
  float fStack_28;
  float fStack_24;
  float local_20;
  int local_14;
  
  bVar6 = 0;
  if (((*(uint *)(0x02653790 + 4) & 0x7fffffff) == 0) ||
     (*(float *)(0x02653790 + 4) <= *(float *)(param_2 + 4))) {
    local_14 = 0;
    iVar2 = param_1;
    if (0 < *(int *)(param_1 + 0x14d164)) {
      do {
        iVar1 = FUN_0040c8f0(*(uint *)(iVar2 + 0x14d168),_DAT_0265fb60);
        if (iVar1 != 0) {
          FUN_00408de0(iVar1,param_2);
          local_2c = local_20;
          *(uint *)((int)&stack0xffffffd8 + (uint)bVar6 * -8) =
               *(uint *)(&stack0xffffffe4 + (uint)bVar6 * -8);
          *(uint *)((int)&stack0xffffffdc + (uint)bVar6 * -8 + (uint)bVar6 * -8) =
               *(uint *)(&stack0xffffffe8 + (uint)bVar6 * -8 + (uint)bVar6 * -8);
          (**(code **)(*(int *)(iVar1 + 0x2b0) + 0x24))(iVar1);
          puVar4 = (uint *)&stack0xffffffa4;
          puVar5 = &stack0xffffffbc;
          for (iVar1 = 6; iVar1 != 0; iVar1 = iVar1 + -1) {
            *puVar5 = *puVar4;
            puVar4 = puVar4 + (uint)bVar6 * -2 + 1;
            puVar5 = puVar5 + (uint)bVar6 * -2 + 1;
          }
          fStack_40 = fStack_40 + _DAT_005e5f59;
          if ((((local_44 <= local_2c) && (fStack_40 <= fStack_28)) && (fStack_3c <= fStack_24)) &&
             (((local_2c <= fStack_38 && (fStack_28 <= fStack_34)) && (fStack_24 <= fStack_30)))) {
            return 1;
          }
        }
        local_14 = local_14 + 1;
        iVar2 = iVar2 + 4;
      } while (local_14 < *(int *)(param_1 + 0x14d164));
    }
    uVar3 = 0;
  }
  else {
    uVar3 = 1;
  }
  return uVar3;
}
