// Name: FUN_00568d60
// Address: 00568d60
// Address Range: [[00568d60, 00568e2b]]
// Convention: unknown
// Signature: void FUN_00568d60(int param_1,undefined4 param_2,float param_3,undefined4 param_4,code *param_5)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00568d60(int param_1,uint param_2,float param_3,uint param_4,code *param_5)

{
  int iVar1;
  int iVar2;
  int iVar3;
  uint *puVar4;
  uint *puVar5;
  byte bVar6;
  int aiStackY_1808 [1522];
  uint uStack_2c;
  int local_1c;
  int local_18;
  uint uStack_14;
  
  bVar6 = 0;
  if ((float)_DAT_005f2521 < param_3) {
    iVar2 = 0;
    local_1c = FUN_00569f30(param_1);
    if (0 < *(int *)(local_1c + 0x1de78)) {
      local_18 = param_1;
      iVar3 = param_1 + 0x6b0;
      do {
        iVar1 = FUN_00563630(local_1c,iVar2,param_4);
        if (-1 < iVar1) {
          uStack_14 = (*param_5)(iVar2,param_4,param_3,iVar1,param_1);
          FUN_005b7940(iVar3,param_2,uStack_14);
          puVar4 = (uint *)(local_18 + 0x6b4 + (uint)bVar6 * -8);
          *(uint *)(local_18 + 0x6b0) = uStack_2c;
          puVar5 = puVar4 + (uint)bVar6 * -2 + 1;
          *puVar4 = *(uint *)(&stack0xffffffd8 + (uint)bVar6 * -8);
          *puVar5 = *(uint *)(&stack0xffffffdc + (uint)bVar6 * -8 + (uint)bVar6 * -8);
          puVar5[(uint)bVar6 * -2 + 1] =
               *(uint *)
                ((int)(&stack0xffffffdc + (uint)bVar6 * -8 + (uint)bVar6 * -8) +
                ((uint)bVar6 * -2 + 1) * 4);
        }
        iVar3 = iVar3 + 0x10;
        iVar2 = iVar2 + 1;
        local_18 = local_18 + 0x10;
      } while (iVar2 < *(int *)(local_1c + 0x1de78));
    }
  }
  return;
}
