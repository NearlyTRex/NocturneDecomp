// Name: core_actor.cpp_FUN_004091b0
// Address: 004091b0
// Address Range: [[004091b0, 004096ba]]
// Convention: unknown
// Signature: float core_actor_cpp_FUN_004091b0(int param_1,float *param_2,float *param_3,float *param_4,int param_5,uint param_6,CBoundingBox3D *param_7)

#include "nocturne.h"

/* WARNING: Type propagation algorithm not settling */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

float core_actor_cpp_FUN_004091b0(int param_1,float *param_2,float *param_3,float *param_4,int param_5,uint param_6,CBoundingBox3D *param_7)

{
  CKeyFramedModel *pCVar1;
  CDeformableModel *this_ptr;
  float fVar2;
  int iVar3;
  uint *puVar4;
  CBoundingBox3D *pCVar5;
  uint *puVar6;
  byte bVar7;
  float afStackY_1084 [976];
  CVector3f *point;
  float triangle_index;
  float local_118;
  CBoundingBox3D local_fc;
  byte local_e4 [8];
  float local_dc;
  float local_d8;
  float local_d4;
  float local_d0;
  uint local_cc [6];
  uint local_b4 [6];
  float local_9c;
  float local_98 [4];
  float fStack_88;
  float fStack_84;
  uint local_78;
  float fStack_6c;
  uint uStack_68;
  uint uStack_64;
  uint local_60;
  uint local_54;
  float local_48;
  uint uStack_44;
  uint uStack_40;
  uint local_3c;
  float afStack_38 [5];
  float local_24;
  float afStack_20 [4];
  
  bVar7 = 0;
  if (param_6 == 0) {
    return 2.0;
  }
  core_actor_cpp_FUN_00408f00();
  puVar4 = (uint *)&stack0xfffffeec;
  pCVar5 = &local_fc;
  for (iVar3 = 6; iVar3 != 0; iVar3 = iVar3 + -1) {
    *(uint *)pCVar5 = *puVar4;
    puVar4 = puVar4 + (uint)bVar7 * -2 + 1;
    pCVar5 = (CBoundingBox3D *)((int)pCVar5 + ((uint)bVar7 * -2 + 1) * 4);
  }
  if (param_7 == (CBoundingBox3D *)0x0) {
    if ((float *)local_e4 != param_2) {
      local_e4._0_4_ = *param_2;
      local_e4._4_4_ = param_2[1];
      local_dc = param_2[2];
    }
    if (&local_d8 != param_2) {
      local_d8 = *param_2;
      local_d4 = param_2[1];
      local_d0 = param_2[2];
    }
    local_9c = *param_2 + *param_3;
    point = (CVector3f *)&local_24;
    local_98[0] = param_2[1] + param_3[1];
    pCVar5 = (CBoundingBox3D *)local_e4;
    local_98[1] = param_2[2] + param_3[2];
    local_24 = *param_2 + *param_3;
    afStack_20[(uint)bVar7 * -2] = local_98[(uint)bVar7 * -2];
    afStack_20[(uint)bVar7 * -2 + (uint)bVar7 * -2 + 1] =
         local_98[(uint)bVar7 * -2 + (uint)bVar7 * -2 + 1];
    core_box_cpp_CBoundingBox3D_expand_FUN_0041d840(pCVar5,point);
    iVar3 = core_box_cpp_FUN_0041e910((CBoundingBox3D *)local_e4,&local_fc);
  }
  else {
    iVar3 = core_box_cpp_FUN_0041e910(param_7,&local_fc);
  }
  if (iVar3 == 0) {
    return 2.0;
  }
  core_actor_cpp_FUN_00408bf0();
  local_78 = local_54;
  local_98[(uint)bVar7 * -2 + 9] = local_98[(uint)bVar7 * -2 + 0x12];
  local_98[(uint)bVar7 * -2 + (uint)bVar7 * -2 + 10] =
       local_98[(uint)bVar7 * -2 + (uint)bVar7 * -2 + 0x13];
  core_actor_cpp_FUN_00408b40();
  local_3c = local_60;
  afStack_38[(uint)bVar7 * -2] = local_98[(uint)bVar7 * -2 + 0xf];
  afStack_38[(uint)bVar7 * -2 + (uint)bVar7 * -2 + 1] =
       local_98[(uint)bVar7 * -2 + (uint)bVar7 * -2 + 0x10];
  param_4[3] = -NAN;
  param_4[4] = -NAN;
  param_4[5] = -NAN;
  param_4[6] = -NAN;
  if (param_6 < 2) {
    if (param_6 == 1) {
      (**(code **)(*(int *)(param_1 + 0x154) + 0x1c))(param_1);
      puVar4 = local_b4;
      puVar6 = local_cc;
      for (iVar3 = 6; iVar3 != 0; iVar3 = iVar3 + -1) {
        *puVar6 = *puVar4;
        puVar4 = puVar4 + (uint)bVar7 * -2 + 1;
        puVar6 = puVar6 + (uint)bVar7 * -2 + 1;
      }
      local_118 = (float)core_box_cpp_FUN_0041e220(local_cc);
      afStack_20[3] = local_118;
      goto LAB_004093ad;
    }
  }
  else {
    if (param_6 < 3) {
      local_118 = (float)core_actor_cpp_FUN_00408100(param_5);
      afStack_20[3] = local_118;
      goto LAB_004093ad;
    }
    if (param_6 == 3) {
      local_118 = (float)(**(code **)(*(int *)(param_1 + 0x154) + 0xb8))(param_1);
      afStack_20[3] = local_118;
      core_actor_cpp_FUN_00408b40();
      fStack_6c = afStack_38[2];
      local_98[(uint)bVar7 * -2 + 0xc] = afStack_38[(uint)bVar7 * -2 + 3];
      local_98[(uint)bVar7 * -2 + (uint)bVar7 * -2 + 0xd] =
           afStack_38[(uint)bVar7 * -2 + (uint)bVar7 * -2 + 4];
      if (local_98 + 0x14 != local_98 + 0xb) {
        local_48 = fStack_6c;
        uStack_44 = uStack_68;
        uStack_40 = uStack_64;
      }
      goto LAB_004093ad;
    }
  }
  _DAT_01d71de0 = "..\\core\\actor.cpp";
  _DAT_01d71de4 = 0x4ac;
  core_main_c_FUN_004e4330();
LAB_004093ad:
  if ((local_118 < 0.0) || (1.0 < local_118)) {
    return 2.0;
  }
  if (*(int *)&g_CDemonSetPtr->field_0x15f6f4 == 0) {
    iVar3 = *(int *)(param_5 + 0x20);
    if (iVar3 == 0) {
      if (*(int *)(param_5 + 0x24) != 0) {
        pCVar1 = core_dmodel_cpp_CKeyFramedModelInstance_getModelPtr_FUN_004625a0
                           (*(CKeyFramedModelInstance **)(param_5 + 0x24));
        local_118 = (float)core_dmodel_cpp_FUN_004618a0(pCVar1,iVar3);
        if (local_118 < 0.0) {
          return 2.0;
        }
        afStack_20[3] = local_118;
        if (1.0 < local_118) {
          return 2.0;
        }
      }
    }
    else {
      local_118 = (float)core_skeleton_cpp_FUN_0054f400();
      if (local_118 < 0.0) {
        return 2.0;
      }
      if (1.0 < local_118) {
        return 2.0;
      }
      param_4[3] = _DAT_0272af44;
      param_4[4] = _DAT_0272af54;
      triangle_index = _DAT_0272af58;
      fVar2 = _DAT_0272af54;
      param_4[5] = _DAT_0272af58;
      afStack_20[3] = local_118;
      this_ptr = core_skeleton_cpp_CDeformableModelInstance_getModelPtr_FUN_0054ea40
                           (*(CDeformableModelInstance **)(param_5 + 0x20));
      fVar2 = (float)core_skeleton_cpp_CDeformableModel_findMaxWeightBone_FUN_0054bde0
                               (this_ptr,(int)fVar2,(int)triangle_index);
      param_4[6] = fVar2;
      if (&stack0x00000000 != &g_DeformableModelPool[0].field_0x34) {
        local_48 = (float)_DAT_0272af48;
        uStack_44 = _DAT_0272af4c;
        uStack_40 = _DAT_0272af50;
      }
    }
  }
  core_actor_cpp_FUN_00408b00();
  local_98[2] = fStack_84;
  local_98[(uint)bVar7 * -2 + 3] = local_98[(uint)bVar7 * -2 + 6];
  local_98[(uint)bVar7 * -2 + (uint)bVar7 * -2 + 4] =
       local_98[(uint)bVar7 * -2 + (uint)bVar7 * -2 + 7];
  if (param_4 != local_98 + 2) {
    *param_4 = local_98[2];
    param_4[1] = local_98[3];
    param_4[2] = fStack_88;
  }
  return local_118;
}
