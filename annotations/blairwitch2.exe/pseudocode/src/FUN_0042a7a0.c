// Name: FUN_0042a7a0
// Address: 0042a7a0
// Address Range: [[0042a7a0, 0042a9f6]]
// Convention: unknown
// Signature: void FUN_0042a7a0(int param_1,float param_2)

#include "nocturne.h"

/* WARNING: Type propagation algorithm not settling */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0042a7a0(int param_1,float param_2)

{
  float fVar1;
  uint uVar2;
  int iVar3;
  byte bVar4;
  int aiStackY_1094 [1013];
  uint *puVar5;
  uint uVar6;
  uint *puVar7;
  uint uVar8;
  uint local_ac;
  int local_a0;
  uint local_9c;
  uint local_98;
  uint local_94;
  uint local_88;
  uint local_7c;
  uint local_70;
  uint local_64;
  uint local_58;
  uint local_4c;
  uint local_48;
  uint local_44;
  uint local_40;
  uint local_34;
  uint local_30;
  uint local_2c;
  uint local_28;
  uint local_1c;
  
  bVar4 = 0;
  if (((*(int *)(param_1 + 0x2828) != 0) &&
      ((*(int *)(param_1 + 0x2814) != 0 || (*(int *)(param_1 + 0x2828) != 0)))) &&
     ((*(float *)(0x01E661B8 + 0x15ac84) < (float)_DAT_005cd266 ||
      (iVar3 = FUN_0040c840(param_1,"?CZombieDog" + 1), iVar3 != 0)))) {
    if ((*(int *)(param_1 + 0x2ed0) == 0) &&
       (fVar1 = *(float *)(param_1 + 0x2ec8) - param_2, *(float *)(param_1 + 0x2ec8) = fVar1,
       fVar1 < 0.0)) {
      *(float *)(param_1 + 0x2ec8) = *(float *)(param_1 + 0x2ec8) + _DAT_005cd26e;
      local_9c = 0xbf000000;
      local_98 = 0x3f800000;
      local_a0 = *(int *)(param_1 + 0x2ed0);
      FUN_00408cf0(param_1,&stack0xffffff60);
      iVar3 = param_1 + 0x2b4;
      local_64 = local_28;
      *(uint *)((int)&stack0xffffffa0 + (uint)bVar4 * 0xfffffffe * 4) =
           *(uint *)((int)&stack0xffffffdc + (uint)bVar4 * 0xfffffffe * 4);
      *(uint *)(&stack0xffffffa4 + (uint)bVar4 * -8 + (uint)bVar4 * -8) =
           *(uint *)(&stack0xffffffe0 + (uint)bVar4 * -8 + (uint)bVar4 * -8);
      uVar2 = FUN_00547890(iVar3);
      iVar3 = FUN_00540e80(uVar2,"Bip01 head",0);
      if (iVar3 != -1) {
        local_30 = 0x3e4ccccd;
        local_2c = 0x3f000000;
        local_34 = 0;
        FUN_00591530(&stack0xffffffcc,param_1 + 0x1134 + iVar3 * 0x30);
        puVar7 = &stack0xffffff6c;
        local_94 = local_1c;
        *(uint *)((int)&stack0xffffff70 + (uint)bVar4 * 0xfffffffe * 4) =
             *(uint *)(&stack0xffffffe8 + (uint)bVar4 * -8);
        *(uint *)(&stack0xffffff74 + (uint)bVar4 * -8 + (uint)bVar4 * -8) =
             *(uint *)(&stack0xffffffec + (uint)bVar4 * -8 + (uint)bVar4 * -8);
        FUN_00408d70(param_1,puVar7);
        uVar8 = 0x8000;
        puVar7 = &stack0xffffff9c;
        uVar6 = 0x3f000000;
        puVar5 = &stack0xffffffc0;
        local_40 = local_58;
        *(uint *)((int)&stack0xffffffc4 + (uint)bVar4 * 0xfffffffe * 4) =
             *(uint *)(&stack0xffffffac + (uint)bVar4 * -8);
        uVar2 = 0x01C3DEB4;
        *(uint *)(&stack0xffffffc8 + (uint)bVar4 * -8 + (uint)bVar4 * -8) =
             *(uint *)(&stack0xffffffb0 + (uint)bVar4 * -8 + (uint)bVar4 * -8);
        FUN_0049d230(uVar2,puVar5,uVar6,puVar7,uVar8);
      }
    }
    param_2 = *(float *)(param_1 + 0x2ecc) - param_2;
    *(float *)(param_1 + 0x2ecc) = param_2;
    if (param_2 < 0.0) {
      *(float *)(param_1 + 0x2ecc) = *(float *)(param_1 + 0x2ecc) + _DAT_005cd272;
      uVar2 = FUN_00547890(param_1 + 0x2b4);
      iVar3 = FUN_00540e80(uVar2,"Bip01 head",0);
      if (iVar3 != -1) {
        local_4c = 0;
        local_44 = 0x3f000000;
        local_48 = 0x3e4ccccd;
        FUN_00591530(&stack0xffffffb4,param_1 + 0x1134 + iVar3 * 0x30);
        puVar7 = &stack0xffffff54;
        local_ac = local_88;
        *(uint *)((int)&stack0xffffff58 + (uint)bVar4 * 0xfffffffe * 4) =
             *(uint *)(&stack0xffffff7c + (uint)bVar4 * -8);
        *(uint *)(&stack0xffffff5c + (uint)bVar4 * -8 + (uint)bVar4 * -8) =
             *(uint *)(&stack0xffffff80 + (uint)bVar4 * -8 + (uint)bVar4 * -8);
        FUN_00408d70(param_1,puVar7);
        puVar7 = &stack0xffffff84;
        local_7c = local_70;
        *(uint *)((int)&stack0xffffff88 + (uint)bVar4 * 0xfffffffe * 4) =
             *(uint *)(&stack0xffffff94 + (uint)bVar4 * -8);
        iVar3 = 0x01E661B8;
        *(uint *)(&stack0xffffff8c + (uint)bVar4 * -8 + (uint)bVar4 * -8) =
             *(uint *)(&stack0xffffff98 + (uint)bVar4 * -8 + (uint)bVar4 * -8);
        iVar3 = FUN_00538180(iVar3,puVar7);
        if (iVar3 == 0) {
          *(uint *)(param_1 + 0x2ed0) = (uint)(*(int *)(param_1 + 0x2ed0) == 0);
          return;
        }
      }
    }
  }
  return;
}
