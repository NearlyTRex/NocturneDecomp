// Name: FUN_00433c60
// Address: 00433c60
// Address Range: [[00433c60, 00433fa2]]
// Convention: unknown
// Signature: void FUN_00433c60(int param_1,float param_2)

#include "nocturne.h"

/* WARNING: Type propagation algorithm not settling */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00433c60(int param_1,float param_2)

{
  float fVar1;
  uint uVar2;
  int iVar3;
  uint uVar4;
  byte bVar5;
  int aiStackY_108c [1010];
  uint *puVar6;
  uint uVar7;
  uint *puVar8;
  uint uVar9;
  uint local_b0;
  uint local_ac;
  uint local_a8;
  uint local_a4;
  uint local_98;
  uint local_8c;
  uint local_88;
  uint local_84;
  uint local_80;
  uint local_74;
  uint local_68;
  uint local_5c;
  uint local_50;
  uint local_44;
  uint local_38;
  int local_2c;
  uint local_28;
  uint local_24;
  uint local_20;
  
  bVar5 = 0;
  if ((*(int *)(param_1 + 0x27bc) != 0) &&
     ((*(int *)(param_1 + 0x27a8) != 0 ||
      (iVar3 = (**(code **)(*(int *)(param_1 + 0x154) + 0x10c))(param_1), iVar3 == 0)))) {
    if (*(int *)(param_1 + 0x27a8) == 0) {
      if (((float)_DAT_005b8866 <= *(float *)(0x01ED78C8 + 0x15ac84)) &&
         (iVar3 = FUN_0040c790(param_1,"?CZombieDog" + 1), iVar3 == 0)) {
        return;
      }
      if ((*(int *)(param_1 + 0x30cc) == 0) &&
         (fVar1 = *(float *)(param_1 + 0x30c4) - param_2, *(float *)(param_1 + 0x30c4) = fVar1,
         fVar1 < 0.0)) {
        *(float *)(param_1 + 0x30c4) = *(float *)(param_1 + 0x30c4) + _DAT_005b886e;
        local_28 = 0xbf000000;
        local_24 = 0x3f800000;
        local_2c = *(int *)(param_1 + 0x30cc);
        FUN_00408b00(param_1,&stack0xffffffd4);
        iVar3 = param_1 + 0x158;
        local_80 = local_20;
        *(uint *)((int)&stack0xffffff84 + (uint)bVar5 * 0xfffffffe * 4) =
             *(uint *)((int)&stack0xffffffe4 + (uint)bVar5 * 0xfffffffe * 4);
        *(uint *)(&stack0xffffff88 + (uint)bVar5 * -8 + (uint)bVar5 * -8) =
             *(uint *)(&stack0xffffffe8 + (uint)bVar5 * -8 + (uint)bVar5 * -8);
        uVar2 = FUN_0054eac0(iVar3);
        iVar3 = FUN_00548090(uVar2,"Bip01 head",0);
        if (iVar3 != -1) {
          local_ac = 0x3e4ccccd;
          local_a8 = 0x3f000000;
          local_b0 = 0;
          FUN_00583260(&stack0xffffff50,param_1 + 0xfd8 + iVar3 * 0x30);
          puVar8 = &stack0xffffff68;
          local_98 = local_74;
          *(uint *)((int)&stack0xffffff6c + (uint)bVar5 * 0xfffffffe * 4) =
               *(uint *)(&stack0xffffff90 + (uint)bVar5 * -8);
          *(uint *)(&stack0xffffff70 + (uint)bVar5 * -8 + (uint)bVar5 * -8) =
               *(uint *)(&stack0xffffff94 + (uint)bVar5 * -8 + (uint)bVar5 * -8);
          FUN_00408b80(param_1,puVar8);
          uVar9 = 0x411a;
          puVar8 = &stack0xffffff80;
          uVar7 = 0x3f000000;
          puVar6 = &stack0xffffffb0;
          local_50 = local_5c;
          *(uint *)((int)&stack0xffffffb4 + (uint)bVar5 * 0xfffffffe * 4) =
               *(uint *)(&stack0xffffffa8 + (uint)bVar5 * -8);
          uVar2 = 0x01C73654;
          *(uint *)(&stack0xffffffb8 + (uint)bVar5 * -8 + (uint)bVar5 * -8) =
               *(uint *)(&stack0xffffffac + (uint)bVar5 * -8 + (uint)bVar5 * -8);
          FUN_004a2560(uVar2,puVar6,uVar7,puVar8,uVar9);
        }
      }
      param_2 = *(float *)(param_1 + 0x30c8) - param_2;
      *(float *)(param_1 + 0x30c8) = param_2;
      if (param_2 < 0.0) {
        *(uint *)(param_1 + 0x30c8) = 0x3fc00000;
        uVar2 = FUN_0054eac0(param_1 + 0x158);
        iVar3 = FUN_00548090(uVar2,"Bip01 head",0);
        if (iVar3 != -1) {
          local_8c = 0;
          local_84 = 0x3f000000;
          local_88 = 0x3e4ccccd;
          FUN_00583260(&stack0xffffff74,iVar3 * 0x30 + param_1 + 0xfd8);
          puVar8 = &stack0xffffff98;
          local_68 = local_44;
          *(uint *)((int)&stack0xffffff9c + (uint)bVar5 * 0xfffffffe * 4) =
               *(uint *)(&stack0xffffffc0 + (uint)bVar5 * -8);
          *(uint *)(&stack0xffffffa0 + (uint)bVar5 * -8 + (uint)bVar5 * -8) =
               *(uint *)(&stack0xffffffc4 + (uint)bVar5 * -8 + (uint)bVar5 * -8);
          FUN_00408b80(param_1,puVar8);
          puVar8 = &stack0xffffffc8;
          local_38 = local_a4;
          *(uint *)((int)&stack0xffffffcc + (uint)bVar5 * 0xfffffffe * 4) =
               *(uint *)((int)&stack0xffffff60 + (uint)bVar5 * 0xfffffffe * 4);
          iVar3 = 0x01ED78C8;
          *(uint *)(&stack0xffffffd0 + (uint)bVar5 * -8 + (uint)bVar5 * -8) =
               *(uint *)(&stack0xffffff64 + (uint)bVar5 * -8 + (uint)bVar5 * -8);
          iVar3 = FUN_0053ef60(iVar3,puVar8);
          if (iVar3 == 0) {
            uVar4 = (uint)(*(int *)(param_1 + 0x30cc) == 0);
            *(uint *)(param_1 + 0x30cc) = uVar4;
            if (uVar4 == 0) {
              fVar1 = (float)FUN_0040ce40(0x3f800000,0x3fc00000);
              *(float *)(param_1 + 0x30c8) = fVar1 + *(float *)(param_1 + 0x30c8);
              return;
            }
            fVar1 = (float)FUN_0040ce40(0x3fc00000,0x40400000);
            *(float *)(param_1 + 0x30c8) = fVar1 + *(float *)(param_1 + 0x30c8);
            return;
          }
        }
      }
    }
    else {
      param_2 = *(float *)(param_1 + 0x30c8) - param_2;
      *(float *)(param_1 + 0x30c8) = param_2;
      if (param_2 < 0.0) {
        if (*(int *)(param_1 + 0x30cc) == 0) {
          fVar1 = (float)FUN_0040ce40(0x40a00000,0x41000000);
          fVar1 = fVar1 + *(float *)(param_1 + 0x30c8);
        }
        else {
          fVar1 = *(float *)(param_1 + 0x30c8) + 1.0;
        }
        *(float *)(param_1 + 0x30c8) = fVar1;
        *(uint *)(param_1 + 0x30cc) = (uint)(*(int *)(param_1 + 0x30cc) == 0);
        _DAT_007e2cb0 = 0;
      }
    }
  }
  return;
}
