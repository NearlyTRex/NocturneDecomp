// Name: core_actor.cpp_FUN_004093a0
// Address: 004093a0
// Address Range: [[004093a0, 0040982a]]
// Convention: unknown
// Signature: float core_actor_cpp_FUN_004093a0(int param_1,float *param_2,float *param_3,undefined4 *param_4,int param_5,uint param_6,CBoundingBox3D *param_7)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

float core_actor_cpp_FUN_004093a0(int param_1,float *param_2,float *param_3,uint *param_4,int param_5,uint param_6,CBoundingBox3D *param_7)

{
  CDemonSet *pCVar1;
  CKeyFramedModel *pCVar2;
  CDeformableModel *this_ptr;
  int iVar3;
  uint *puVar4;
  CBoundingBox3D *pCVar5;
  uint *puVar6;
  byte bVar7;
  float afStackY_106c [976];
  int lod_level;
  CVector3f *point;
  float local_100;
  byte local_fc [8];
  float local_f4;
  float local_f0;
  float local_ec;
  float local_e8;
  uint local_e4 [6];
  uint local_cc [6];
  uint local_b4 [6];
  CBoundingBox3D local_9c;
  CVector3f local_84;
  float local_78;
  float afStack_74 [4];
  float local_64;
  uint local_60;
  uint uStack_5c;
  uint uStack_58;
  CVector3f local_54;
  CVector3f local_48;
  uint uStack_3c;
  float afStack_38 [2];
  CVector3f local_30;
  uint uStack_24;
  float afStack_20 [4];
  
  bVar7 = 0;
  if (param_6 == 0) {
    return 2.0;
  }
  core_actor_cpp_FUN_004090f0();
  puVar4 = local_e4;
  pCVar5 = &local_9c;
  for (iVar3 = 6; iVar3 != 0; iVar3 = iVar3 + -1) {
    *(uint *)pCVar5 = *puVar4;
    puVar4 = puVar4 + (uint)bVar7 * -2 + 1;
    pCVar5 = (CBoundingBox3D *)((int)pCVar5 + ((uint)bVar7 * -2 + 1) * 4);
  }
  if (param_7 == (CBoundingBox3D *)0x0) {
    if ((float *)local_fc != param_2) {
      local_fc._0_4_ = *param_2;
      local_fc._4_4_ = param_2[1];
      local_f4 = param_2[2];
    }
    if (&local_f0 != param_2) {
      local_f0 = *param_2;
      local_ec = param_2[1];
      local_e8 = param_2[2];
    }
    afStack_74[2] = *param_2 + *param_3;
    point = (CVector3f *)&local_78;
    afStack_74[3] = param_2[1] + param_3[1];
    pCVar5 = (CBoundingBox3D *)local_fc;
    local_64 = param_2[2] + param_3[2];
    local_78 = *param_2 + *param_3;
    afStack_74[(uint)bVar7 * -2] = afStack_74[(uint)bVar7 * -2 + 3];
    afStack_74[(uint)bVar7 * -2 + (uint)bVar7 * -2 + 1] =
         afStack_74[(uint)bVar7 * -2 + (uint)bVar7 * -2 + 4];
    core_box_cpp_CBoundingBox3D_expand_FUN_0041a590(pCVar5,point);
    iVar3 = core_box_cpp_FUN_0041b660((CBoundingBox3D *)local_fc,&local_9c);
  }
  else {
    iVar3 = core_box_cpp_FUN_0041b660(param_7,&local_9c);
  }
  if (iVar3 == 0) {
    return 2.0;
  }
  core_actor_cpp_FUN_00408de0();
  local_84._0_4_ = local_30._0_4_;
  *(uint *)((int)&local_84 + (uint)bVar7 * -8 + 4) =
       *(uint *)((int)&local_30 + (uint)bVar7 * -8 + 4);
  *(uint *)((int)&local_84 + (uint)bVar7 * -8 + (uint)bVar7 * -8 + 8) =
       *(uint *)((int)&local_30 + (uint)bVar7 * -8 + (uint)bVar7 * -8 + 8);
  core_actor_cpp_FUN_00408d30();
  local_48._0_4_ = local_54._0_4_;
  *(uint *)((int)&local_48 + (uint)bVar7 * -8 + 4) =
       *(uint *)((int)&local_54 + (uint)bVar7 * -8 + 4);
  *(uint *)((int)&local_48 + (uint)bVar7 * -8 + (uint)bVar7 * -8 + 8) =
       *(uint *)((int)&local_54 + (uint)bVar7 * -8 + (uint)bVar7 * -8 + 8);
  if (param_6 < 2) {
    if (param_6 == 1) {
      (**(code **)(*(int *)(param_1 + 0x2b0) + 0x24))(param_1);
      puVar4 = local_cc;
      puVar6 = local_b4;
      for (iVar3 = 6; iVar3 != 0; iVar3 = iVar3 + -1) {
        *puVar6 = *puVar4;
        puVar4 = puVar4 + (uint)bVar7 * -2 + 1;
        puVar6 = puVar6 + (uint)bVar7 * -2 + 1;
      }
      local_100 = (float)core_box_cpp_FUN_0041af70(local_b4);
      afStack_20[3] = local_100;
      goto LAB_0040957e;
    }
  }
  else {
    if (param_6 < 3) {
      local_100 = (float)core_actor_cpp_FUN_00408290(param_5);
      afStack_20[3] = local_100;
      goto LAB_0040957e;
    }
    if (param_6 == 3) {
      local_100 = (float)(**(code **)(*(int *)(param_1 + 0x2b0) + 0xc0))(param_1);
      afStack_20[3] = local_100;
      goto LAB_0040957e;
    }
  }
  _DAT_01d046a0 = "..\\core\\actor.cpp";
  _DAT_01d046a4 = 0x4ab;
  core_main_c_FUN_004e4500();
LAB_0040957e:
  if ((local_100 < 0.0) || (1.0 < local_100)) {
    return 2.0;
  }
  param_4[4] = 0xffffffff;
  param_4[5] = 0xffffffff;
  param_4[6] = 0xffffffff;
  pCVar1 = g_CDemonSetPtr;
  param_4[3] = 0xffffffff;
  if (*(int *)&pCVar1->field_0x15f6f0 == 0) {
    iVar3 = *(int *)(param_5 + 0x20);
    if (iVar3 == 0) {
      if (*(int *)(param_5 + 0x24) != 0) {
        pCVar2 = core_dmodel_cpp_CKeyFramedModelInstance_getModelPtr_FUN_0044fd20
                           (*(CKeyFramedModelInstance **)(param_5 + 0x24));
        local_100 = (float)core_dmodel_cpp_FUN_0044f020(pCVar2,iVar3);
        if (local_100 < 0.0) {
          return 2.0;
        }
        afStack_20[3] = local_100;
        if (1.0 < local_100) {
          return 2.0;
        }
      }
    }
    else {
      local_100 = core_skeleton_cpp_CDeformableModelInstance_rayIntersect_FUN_005481d0
                            (*(CDeformableModelInstance **)(param_5 + 0x20),&local_84,&local_48);
      if (local_100 < 0.0) {
        return 2.0;
      }
      if (1.0 < local_100) {
        return 2.0;
      }
      param_4[3] = _DAT_020ccfdc;
      param_4[4] = _DAT_020ccfec;
      iVar3 = _DAT_020ccff0;
      param_4[5] = _DAT_020ccff0;
      lod_level = _DAT_020ccfec;
      afStack_20[3] = local_100;
      this_ptr = core_skeleton_cpp_CDeformableModelInstance_getModelPtr_FUN_00547810
                           (*(CDeformableModelInstance **)(param_5 + 0x20));
      iVar3 = core_skeleton_cpp_CDeformableModel_findMaxWeightBone_FUN_00544bb0
                        (this_ptr,lod_level,iVar3);
      param_4[6] = iVar3;
      if (&stack0x00000000 != &g_DeformableModelPool[0].field_0x4c) {
        local_60 = _DAT_020ccfe0;
        uStack_5c = _DAT_020ccfe4;
        uStack_58 = _DAT_020ccfe8;
      }
    }
  }
  core_actor_cpp_FUN_00408cf0();
  uStack_3c = uStack_24;
  afStack_38[(uint)bVar7 * -2] = afStack_20[(uint)bVar7 * -2];
  afStack_38[(uint)bVar7 * -2 + (uint)bVar7 * -2 + 1] =
       afStack_20[(uint)bVar7 * -2 + (uint)bVar7 * -2 + 1];
  if (param_4 != &uStack_3c) {
    *param_4 = uStack_3c;
    param_4[1] = afStack_38[0];
    param_4[2] = afStack_38[1];
  }
  return local_100;
}
