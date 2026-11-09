// Name: core_fire.cpp_FUN_0049df60
// Address: 0049df60
// Address Range: [[0049df60, 0049e169]]
// Convention: unknown
// Signature: void core_fire_cpp_FUN_0049df60(float *param_1)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void core_fire_cpp_FUN_0049df60(float *param_1)

{
  CFlameCan *this_ptr;
  float fVar1;
  float fVar2;
  float fVar3;
  int iVar4;
  int iVar5;
  byte bVar6;
  uint auStackY_103c [996];
  uint uVar7;
  SDamageInfo aSStack_90 [4];
  float local_8c;
  uint local_74;
  uint local_70;
  uint local_6c;
  uint local_68;
  uint local_60;
  uint local_54;
  uint local_50 [9];
  int local_2c;
  int local_28;
  int local_24;
  float local_18;
  
  bVar6 = 0;
  local_28 = 0;
  if (0 < _DAT_01c74b68) {
    local_2c = 0;
    do {
      local_24 = *(int *)(&DAT_01c74b6c + local_2c);
      fVar1 = *(float *)(local_24 + 0x20) - *param_1;
      fVar3 = *(float *)(local_24 + 0x24) - param_1[1];
      fVar2 = *(float *)(local_24 + 0x28) - param_1[2];
      if (fVar2 * fVar2 + fVar3 * fVar3 + fVar1 * fVar1 <= _DAT_005c0858) {
        core_skeleton_cpp_CDeformableModelInstance_getModelPtr_FUN_0054ea40
                  ((CDeformableModelInstance *)(local_24 + 0x158));
        core_actor_cpp_FUN_00408bf0(local_24,param_1);
        iVar5 = local_24;
        local_54 = local_50[2];
        local_50[(uint)bVar6 * -2] = local_50[(uint)bVar6 * -2 + 3];
        uVar7 = g_CHeroClassInfo.name_hash;
        local_50[(uint)bVar6 * -2 + (uint)bVar6 * -2 + 1] =
             local_50[(uint)bVar6 * -2 + (uint)bVar6 * -2 + 4];
        iVar5 = core_actor_cpp_castToClassHash_FUN_0040c840(iVar5,uVar7);
        if (((iVar5 != 0) && (param_1[8] == 2.8026e-45)) ||
           ((iVar5 = core_actor_cpp_castToClassHash_FUN_0040c840
                               (local_24,g_CHeroClassInfo.name_hash), iVar5 == 0 &&
            (param_1[8] == 1.4013e-45)))) {
          core_charactr_cpp_SDamageInfo_ctor_FUN_0042abb0(aSStack_90);
          local_18 = (float)core_actor_cpp_FUN_0040ce40(0x41200000,0x41a00000);
          iVar5 = local_24;
          local_8c = (local_18 * param_1[3]) / _DAT_005df900;
          if (&local_74 != &local_54) {
            local_74 = local_54;
            local_70 = local_50[0];
            local_6c = local_50[1];
          }
          local_68 = 10;
          local_60 = 0x6e;
          (**(code **)(*(int *)(local_24 + 0x154) + 0x108))(local_24,aSStack_90);
          core_charactr_cpp_FUN_0042fbd0(iVar5,&local_54,0,0,0x3f800000,1,0x40a00000);
        }
      }
      local_2c = local_2c + 4;
      local_28 = local_28 + 1;
    } while (local_28 < _DAT_01c74b68);
  }
  iVar5 = 0;
  if (0 < _DAT_01c74c34) {
    iVar4 = 0;
    do {
      this_ptr = *(CFlameCan **)(&DAT_01c74c38 + iVar4);
      fVar1 = *(float *)&this_ptr->field_0x20 - *param_1;
      fVar3 = *(float *)&this_ptr->field_0x24 - param_1[1];
      fVar2 = *(float *)&this_ptr->field_0x28 - param_1[2];
      if (fVar2 * fVar2 + fVar3 * fVar3 + fVar1 * fVar1 <= (float)_DAT_005c0860) {
        core_flamecan_cpp_CFlameCan_ignite_FUN_004a7110(this_ptr);
      }
      iVar5 = iVar5 + 1;
      iVar4 = iVar4 + 4;
    } while (iVar5 < _DAT_01c74c34);
  }
  return;
}
