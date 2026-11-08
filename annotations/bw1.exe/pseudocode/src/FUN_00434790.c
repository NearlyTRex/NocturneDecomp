// Name: FUN_00434790
// Address: 00434790
// Address Range: [[00434790, 00434a7f]]
// Convention: unknown
// Signature: void FUN_00434790(int param_1,float param_2)

#include "nocturne.h"

/* WARNING: Type propagation algorithm not settling */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00434790(int param_1,float param_2)

{
  float fVar1;
  uint uVar2;
  int iVar3;
  byte bVar4;
  int aiStackY_108c [1010];
  uint *puVar5;
  uint uVar6;
  uint local_b0;
  uint local_ac;
  uint local_a8;
  uint local_a4;
  uint local_98;
  uint local_8c;
  uint local_80;
  uint local_74;
  uint local_68;
  uint local_5c;
  uint local_50;
  uint local_44;
  uint local_40;
  uint local_3c;
  int local_38;
  uint local_34;
  uint local_30;
  uint local_2c;
  uint local_20;
  
  bVar4 = 0;
  if ((*(int *)(param_1 + 0x27bc) != 0) &&
     ((*(int *)(param_1 + 0x27a8) != 0 || (*(int *)(param_1 + 0x27bc) != 0)))) {
    if (*(int *)(param_1 + 0x27a8) == 0) {
      if ((*(float *)(0x01E82168 + 0x15ac84) < (float)_DAT_005d5f1f) ||
         ((iVar3 = FUN_0040c550(param_1,"?CZombieDog" + 1), iVar3 != 0 &&
          (*(int *)(param_1 + 0x27a8) == 0)))) {
        if ((*(int *)(param_1 + 0x2e64) == 0) &&
           (fVar1 = *(float *)(param_1 + 0x2e5c) - param_2, *(float *)(param_1 + 0x2e5c) = fVar1,
           fVar1 < 0.0)) {
          *(float *)(param_1 + 0x2e5c) = *(float *)(param_1 + 0x2e5c) + _DAT_005d5f27;
          local_34 = 0xbf000000;
          local_30 = 0x3f800000;
          local_38 = *(int *)(param_1 + 0x2e64);
          FUN_00408ac0(param_1,&stack0xffffffc8);
          iVar3 = param_1 + 0x158;
          local_50 = local_80;
          *(uint *)((int)&stack0xffffffb4 + (uint)bVar4 * 0xfffffffe * 4) =
               *(uint *)(&stack0xffffff84 + (uint)bVar4 * -8);
          *(uint *)(&stack0xffffffb8 + (uint)bVar4 * -8 + (uint)bVar4 * -8) =
               *(uint *)(&stack0xffffff88 + (uint)bVar4 * -8 + (uint)bVar4 * -8);
          uVar2 = FUN_00569f30(iVar3);
          iVar3 = FUN_005634f0(uVar2,"Bip01 head",0);
          if (iVar3 != -1) {
            local_b0 = 0;
            local_a8 = 0x3f000000;
            local_ac = 0x3e4ccccd;
            FUN_005b5080(&stack0xffffff50,param_1 + 0xfd8 + iVar3 * 0x30);
            puVar5 = &stack0xffffff68;
            local_98 = local_74;
            *(uint *)((int)&stack0xffffff6c + (uint)bVar4 * 0xfffffffe * 4) =
                 *(uint *)(&stack0xffffff90 + (uint)bVar4 * -8);
            *(uint *)(&stack0xffffff70 + (uint)bVar4 * -8 + (uint)bVar4 * -8) =
                 *(uint *)(&stack0xffffff94 + (uint)bVar4 * -8 + (uint)bVar4 * -8);
            FUN_00408b40(param_1,puVar5);
            uVar6 = 0x8000;
            puVar5 = &stack0xffffffb0;
            uVar2 = 0x3f000000;
            local_2c = local_5c;
            *(uint *)((int)&stack0xffffffd8 + (uint)bVar4 * 0xfffffffe * 4) =
                 *(uint *)(&stack0xffffffa8 + (uint)bVar4 * -8);
            *(uint *)(&stack0xffffffdc + (uint)bVar4 * -8 + (uint)bVar4 * -8) =
                 *(uint *)(&stack0xffffffac + (uint)bVar4 * -8 + (uint)bVar4 * -8);
            FUN_004b5b30(0x01C57074,&stack0xffffffd4,uVar2,puVar5,uVar6);
          }
        }
        param_2 = *(float *)(param_1 + 0x2e60) - param_2;
        *(float *)(param_1 + 0x2e60) = param_2;
        if (param_2 < 0.0) {
          *(float *)(param_1 + 0x2e60) = *(float *)(param_1 + 0x2e60) + _DAT_005d5f2b;
          uVar2 = FUN_00569f30(param_1 + 0x158);
          iVar3 = FUN_005634f0(uVar2,"Bip01 head",0);
          if (iVar3 != -1) {
            local_44 = 0;
            local_40 = 0x3e4ccccd;
            local_3c = 0x3f000000;
            FUN_005b5080(&stack0xffffffbc,param_1 + 0xfd8 + iVar3 * 0x30);
            puVar5 = &stack0xffffffe0;
            local_20 = local_a4;
            *(uint *)((int)&stack0xffffffe4 + (uint)bVar4 * 0xfffffffe * 4) =
                 *(uint *)((int)&stack0xffffff60 + (uint)bVar4 * 0xfffffffe * 4);
            *(uint *)(&stack0xffffffe8 + (uint)bVar4 * -8 + (uint)bVar4 * -8) =
                 *(uint *)(&stack0xffffff64 + (uint)bVar4 * -8 + (uint)bVar4 * -8);
            FUN_00408b40(param_1,puVar5);
            puVar5 = &stack0xffffff98;
            local_68 = local_8c;
            *(uint *)((int)&stack0xffffff9c + (uint)bVar4 * 0xfffffffe * 4) =
                 *(uint *)(&stack0xffffff78 + (uint)bVar4 * -8);
            iVar3 = 0x01E82168;
            *(uint *)(&stack0xffffffa0 + (uint)bVar4 * -8 + (uint)bVar4 * -8) =
                 *(uint *)(&stack0xffffff7c + (uint)bVar4 * -8 + (uint)bVar4 * -8);
            iVar3 = FUN_005595a0(iVar3,puVar5);
            if (iVar3 == 0) {
              *(uint *)(param_1 + 0x2e64) = (uint)(*(int *)(param_1 + 0x2e64) == 0);
              return;
            }
          }
        }
      }
    }
    else {
      param_2 = *(float *)(param_1 + 0x2e60) - param_2;
      *(float *)(param_1 + 0x2e60) = param_2;
      if (param_2 < 0.0) {
        if (*(int *)(param_1 + 0x2e64) == 0) {
          fVar1 = (float)FUN_0040cc00(0x40a00000,0x41000000);
          fVar1 = fVar1 + *(float *)(param_1 + 0x2e60);
        }
        else {
          fVar1 = *(float *)(param_1 + 0x2e60) + 1.0;
        }
        *(float *)(param_1 + 0x2e60) = fVar1;
        _DAT_007c6340 = 0;
        *(uint *)(param_1 + 0x2e64) = (uint)(*(int *)(param_1 + 0x2e64) == 0);
      }
    }
  }
  return;
}
