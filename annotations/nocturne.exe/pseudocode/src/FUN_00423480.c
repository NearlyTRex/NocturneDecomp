// Name: FUN_00423480
// Address: 00423480
// Address Range: [[00423480, 0042367c]]
// Convention: unknown
// Signature: void FUN_00423480(int param_1,int param_2)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00423480(int param_1,int param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int *piVar4;
  int iVar5;
  int iVar6;
  int *piVar7;
  byte bVar8;
  int aiStackY_1030 [1008];
  int local_48;
  int local_44;
  int local_40;
  int local_3c;
  int local_38;
  int local_34;
  int local_30;
  int local_2c;
  int local_28;
  int *local_24;
  int local_20;
  int local_1c;
  uint local_18;
  
  bVar8 = 0;
  local_2c = *(int *)(param_2 + 0x2c);
  *(uint *)(param_2 + 0x34) = 0;
  *(uint *)(param_2 + 0x2c) = *(uint *)(param_2 + 0x30);
  local_30 = param_1 + 0x129a0;
  local_20 = 0;
  do {
    piVar4 = (int *)(local_30 + *(int *)(param_2 + 0x2c) * 0x28);
    local_28 = *(int *)(*(int *)(*(int *)(param_1 + 0x12964) + 0x2234) + 4 +
                       *(int *)(param_2 + 0x2c) * 0xc);
    iVar6 = 0;
    iVar5 = 0;
    local_24 = piVar4;
    if (0 < *piVar4) {
      iVar2 = 0;
      do {
        iVar1 = piVar4[2];
        local_1c = *(int *)(*(int *)(*(int *)(param_1 + 0x12964) + 0x2234) + iVar1 * 0xc + 4);
        local_18 = 1;
        if ((local_20 != 0) ||
           ((iVar3 = iVar2, iVar1 != local_2c &&
            ((*(int *)(param_2 + 0x3c) < 1 || (local_28 <= local_1c)))))) {
          iVar3 = iVar2 + 4;
          iVar6 = iVar6 + 1;
          *(int *)(&stack0xffffff98 + iVar2) = iVar1;
        }
        iVar5 = iVar5 + 1;
        piVar4 = piVar4 + 1;
        iVar2 = iVar3;
      } while (iVar5 < *local_24);
    }
  } while ((iVar6 < 1) && (local_20 = local_20 + 1, local_20 < 2));
  if (0 < *(int *)(param_2 + 0x3c)) {
    *(int *)(param_2 + 0x3c) = *(int *)(param_2 + 0x3c) + -1;
  }
  if (iVar6 < 1) {
    *(int *)(param_2 + 0x30) = local_2c;
    if (local_2c < 0) {
      *(uint *)(param_2 + 0x30) = *(uint *)(param_2 + 0x2c);
    }
  }
  else {
    iVar5 = core_actor_cpp_getRandomInt_FUN_0040de00(0,iVar6 + -1);
    *(uint *)(param_2 + 0x30) = *(uint *)(&stack0xffffff98 + iVar5 * 4);
  }
  iVar5 = *(int *)(*(int *)(param_1 + 0x12964) + 0x2234);
  piVar4 = (int *)(iVar5 + *(int *)(param_2 + 0x2c) * 0xc);
  piVar7 = piVar4 + (uint)bVar8 * -2 + 1;
  local_3c = *piVar4;
  *(int *)((int)&stack0xffffffc8 + (uint)bVar8 * -8) = *piVar7;
  *(int *)((int)&stack0xffffffcc + (uint)bVar8 * -8 + (uint)bVar8 * -8) =
       piVar7[(uint)bVar8 * -2 + 1];
  piVar4 = (int *)(iVar5 + *(int *)(param_2 + 0x30) * 0xc);
  piVar7 = piVar4 + (uint)bVar8 * -2 + 1;
  local_48 = *piVar4;
  *(int *)((int)&stack0xffffffbc + (uint)bVar8 * -8) = *piVar7;
  *(int *)((int)&stack0xffffffc0 + (uint)bVar8 * -8 + (uint)bVar8 * -8) =
       piVar7[(uint)bVar8 * -2 + 1];
  *(float *)(param_2 + 0x38) =
       SQRT((float)((local_34 - local_40) * (local_34 - local_40) +
                   (local_3c - local_48) * (local_3c - local_48) +
                   (local_38 - local_44) * (local_38 - local_44))) * (float)_DAT_00579d7d;
  return;
}
