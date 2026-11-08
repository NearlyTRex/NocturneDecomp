// Name: FUN_004fef30
// Address: 004fef30
// Address Range: [[004fef30, 004ff2f6]]
// Convention: unknown
// Signature: void FUN_004fef30(int param_1,float param_2)

#include "nocturne.h"

/* WARNING: Type propagation algorithm not settling */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_004fef30(int param_1,float param_2)

{
  float fVar1;
  int iVar2;
  byte bVar3;
  float afStackY_188c [1519];
  uint uVar4;
  uint uVar5;
  uint *puVar6;
  byte *puVar7;
  float local_b8;
  float local_b4;
  uint local_b0;
  uint local_a0;
  uint local_90;
  float local_80;
  float local_7c;
  float local_78;
  float local_74;
  float local_70;
  uint local_68;
  float local_5c;
  float local_58;
  float local_54;
  float local_50;
  float local_4c;
  float local_48;
  uint local_44;
  float local_38;
  float local_2c;
  float local_20;
  float local_1c;
  float local_18;
  
  bVar3 = 0;
  if (*(int *)(param_1 + 0x2698) == 0) {
    *(uint *)(param_1 + 0x10bc8) = 0;
  }
  else {
    if (*(int *)(param_1 + 0x10a78) != 0) {
      iVar2 = FUN_00488320(param_1,*(int *)(param_1 + 0x10a78));
      if ((iVar2 == 0) && (*(int *)(param_1 + 0x10b24) == 0)) {
        *(uint *)(param_1 + 0x10bc8) = 0;
        return;
      }
      iVar2 = FUN_0040c8f0(*(uint *)(param_1 + 0x2698),_DAT_02661f38);
      if (iVar2 == 0) {
        _DAT_01d046a0 = "..\\core\\mobster.cpp";
        _DAT_01d046a4 = 0x323;
        FUN_004e4500("CMobster::aimTommyGun - I'm not carrying one!");
      }
      local_b4 = 0.7853982;
      if (*(int *)(param_1 + 0x10b1c) != 0) {
        local_b4 = 1.5707964;
      }
      FUN_00591530(&DAT_0265370c,param_1 + 0x1134 + _DAT_01d1c718 * 0x30);
      puVar6 = &stack0xffffff98;
      local_68 = local_44;
      *(uint *)((int)&stack0xffffff9c + (uint)bVar3 * 0xfffffffe * 4) =
           *(uint *)(&stack0xffffffc0 + (uint)bVar3 * -8);
      *(uint *)(&stack0xffffffa0 + (uint)bVar3 * -8 + (uint)bVar3 * -8) =
           *(uint *)(&stack0xffffffc4 + (uint)bVar3 * -8 + (uint)bVar3 * -8);
      FUN_00408d70(param_1,puVar6);
      local_80 = local_2c;
      *(uint *)((int)&stack0xffffff84 + (uint)bVar3 * -8) =
           *(uint *)(&stack0xffffffd8 + (uint)bVar3 * -8);
      *(uint *)((int)&stack0xffffff88 + (uint)bVar3 * -8 + (uint)bVar3 * -8) =
           *(uint *)(&stack0xffffffdc + (uint)bVar3 * -8 + (uint)bVar3 * -8);
      iVar2 = *(int *)(param_1 + 0x10a78);
      local_50 = *(float *)(iVar2 + 0x20) - local_80;
      local_4c = *(float *)(iVar2 + 0x24) - local_7c;
      local_48 = *(float *)(iVar2 + 0x28) - local_78;
      local_5c = local_50;
      (&stack0xffffffa8)[(uint)bVar3 * 0xfffffffe] =
           (float)*(uint *)((int)&stack0xffffffb4 + (uint)bVar3 * -8);
      *(uint *)((int)&stack0xffffffac + (uint)bVar3 * -8 + (uint)bVar3 * -8) =
           *(uint *)((int)&stack0xffffffb8 + (uint)bVar3 * -8 + (uint)bVar3 * -8);
      iVar2 = FUN_0040c8f0(*(uint *)(param_1 + 0x10a78),_DAT_01cedf50);
      fVar1 = _DAT_005dee11;
      if (iVar2 != 0) {
        fVar1 = _DAT_005dee15;
      }
      local_58 = local_58 + fVar1;
      FUN_005838f0(&stack0xffffffa4);
      local_74 = local_38;
      *(uint *)((int)&stack0xffffff90 + (uint)bVar3 * -8) =
           *(uint *)(&stack0xffffffcc + (uint)bVar3 * -8);
      *(uint *)(&stack0xffffff94 + (uint)bVar3 * -8 + (uint)bVar3 * -8) =
           *(uint *)(&stack0xffffffd0 + (uint)bVar3 * -8 + (uint)bVar3 * -8);
      local_18 = (float)FUN_0040d0c0(local_70 - *(float *)(param_1 + 0x34));
      local_b8 = SQRT(local_54 * local_54 + local_5c * local_5c + local_58 * local_58);
      if ((local_b4 <= ABS(local_18)) || (local_b8 <= (float)_DAT_005dee1d)) {
        param_2 = *(float *)(param_1 + 0x10bc8) - param_2;
        *(float *)(param_1 + 0x10bc8) = param_2;
        if (param_2 < 0.0) {
          *(uint *)(param_1 + 0x10bc8) = 0;
        }
      }
      else {
        param_2 = *(float *)(param_1 + 0x10bc8) + param_2;
        *(float *)(param_1 + 0x10bc8) = param_2;
        if (1.0 < param_2) {
          *(uint *)(param_1 + 0x10bc8) = 0x3f800000;
        }
      }
      local_1c = -local_b4;
      if (local_74 < local_1c) {
        local_74 = local_1c;
      }
      if (local_b4 < local_74) {
        local_74 = local_b4;
      }
      local_20 = -local_b4;
      local_70 = local_18;
      if (local_18 < local_20) {
        local_70 = local_20;
      }
      if (local_b4 < local_70) {
        local_70 = local_b4;
      }
      if (*(int *)(param_1 + 0x2620) == 0) {
        uVar5 = *(uint *)(param_1 + 0x10bc8);
        uVar4 = 2;
      }
      else {
        uVar5 = *(uint *)(param_1 + 0x10bc8);
        uVar4 = 6;
      }
      FUN_00545a60(param_1 + 0x2b4,uVar4,0x40c00000,uVar5,_DAT_01d1c738,&LAB_00544cc0);
      FUN_00593fa0(local_74);
      local_b0 = local_a0;
      *(uint *)((int)&stack0xffffff54 + (uint)bVar3 * 0xfffffffe * 4) =
           *(uint *)(&stack0xffffff64 + (uint)bVar3 * -8);
      *(uint *)(&stack0xffffff58 + (uint)bVar3 * -8 + (uint)bVar3 * -8) =
           *(uint *)(&stack0xffffff68 + (uint)bVar3 * -8 + (uint)bVar3 * -8);
      *(uint *)
       ((int)(&stack0xffffff58 + (uint)bVar3 * -8 + (uint)bVar3 * -8) + ((uint)bVar3 * -2 + 1) * 4)
           = *(uint *)
              ((int)(&stack0xffffff68 + (uint)bVar3 * -8 + (uint)bVar3 * -8) +
              ((uint)bVar3 * -2 + 1) * 4);
      local_18 = (float)(param_1 + 0x2b4);
      FUN_00546f40(local_18,&stack0xffffff50,*(uint *)(param_1 + 0x10bc8),_DAT_01d1c738,
                   &LAB_00544cc0);
      FUN_00593fe0(local_70);
      puVar7 = &LAB_00544cc0;
      local_b0 = local_90;
      *(uint *)((int)&stack0xffffff54 + (uint)bVar3 * 0xfffffffe * 4) =
           *(uint *)(&stack0xffffff74 + (uint)bVar3 * -8);
      uVar5 = _DAT_01d1c738;
      *(uint *)(&stack0xffffff58 + (uint)bVar3 * -8 + (uint)bVar3 * -8) =
           *(uint *)(&stack0xffffff78 + (uint)bVar3 * -8 + (uint)bVar3 * -8);
      *(uint *)
       ((int)(&stack0xffffff58 + (uint)bVar3 * -8 + (uint)bVar3 * -8) + ((uint)bVar3 * -2 + 1) * 4)
           = *(uint *)
              ((int)(&stack0xffffff78 + (uint)bVar3 * -8 + (uint)bVar3 * -8) +
              ((uint)bVar3 * -2 + 1) * 4);
      FUN_00546f40(local_18,&stack0xffffff50,*(uint *)(param_1 + 0x10bc8),uVar5,puVar7);
      return;
    }
    *(uint *)(param_1 + 0x10bc8) = 0;
  }
  return;
}
