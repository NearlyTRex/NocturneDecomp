// Name: core_actor.cpp_FUN_004091b0
// Address: 004091b0
// Address Range: [[004091b0, 004096ba]]
// Convention: unknown
// Signature: float core_actor_cpp_FUN_004091b0(int param_1,CBoundingBox3D *param_2,float *param_3,float *param_4,int param_5,uint param_6,CBoundingBox3D *param_7)

#include "nocturne.h"

/* WARNING: Type propagation algorithm not settling */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

float core_actor_cpp_FUN_004091b0(int param_1,CBoundingBox3D *param_2,float *param_3,float *param_4,int param_5,uint param_6,CBoundingBox3D *param_7)

{
  CKeyFramedModel *pCVar1;
  CDeformableModel *this_ptr;
  float fVar2;
  int iVar3;
  float *pfVar4;
  uint *puVar5;
  CBoundingBox3D *pCVar6;
  uint *puVar7;
  byte bVar8;
  float afStackY_1084 [976];
  CVector3f *point;
  float triangle_index;
  float local_118;
  CBoundingBox3D local_fc;
  CBoundingBox3D local_e4;
  uint local_cc [6];
  uint local_b4 [6];
  float local_9c;
  float local_98 [4];
  float fStack_88;
  float fStack_84;
  CVector3f local_78;
  float fStack_6c;
  float afStack_68 [5];
  float local_54;
  float local_48;
  float fStack_44;
  uint uStack_40;
  CVector3f local_3c;
  float fStack_30;
  float afStack_2c [2];
  CVector3f local_24;
  float local_14;
  
  bVar8 = 0;
  if (param_6 == 0) {
    return 2.0;
  }
  core_actor_cpp_FUN_00408f00();
  pfVar4 = (float *)&stack0xfffffeec;
  pCVar6 = &local_fc;
  for (iVar3 = 6; iVar3 != 0; iVar3 = iVar3 + -1) {
    (pCVar6->min).x = *pfVar4;
    pfVar4 = pfVar4 + (uint)bVar8 * -2 + 1;
    pCVar6 = (CBoundingBox3D *)((int)pCVar6 + ((uint)bVar8 * -2 + 1) * 4);
  }
  if (param_7 == (CBoundingBox3D *)0x0) {
    if (&local_e4 != param_2) {
      local_e4.min.x = (param_2->min).x;
      local_e4.min.y = (param_2->min).y;
      local_e4.min.z = (param_2->min).z;
    }
    if ((CBoundingBox3D *)&local_e4.max != param_2) {
      local_e4.max.x = (param_2->min).x;
      local_e4.max.y = (param_2->min).y;
      local_e4.max.z = (param_2->min).z;
    }
    local_9c = (param_2->min).x + *param_3;
    point = &local_24;
    local_98[0] = (param_2->min).y + param_3[1];
    pCVar6 = &local_e4;
    local_98[1] = (param_2->min).z + param_3[2];
    local_24.x = local_9c;
    *(float *)((int)&local_24 + (uint)bVar8 * -8 + 4) = local_98[(uint)bVar8 * -2];
    *(float *)((int)&local_24 + (uint)bVar8 * -8 + (uint)bVar8 * -8 + 8) =
         local_98[(uint)bVar8 * -2 + (uint)bVar8 * -2 + 1];
    core_box_cpp_CBoundingBox3D_expand_FUN_0041d840(pCVar6,point);
    iVar3 = core_box_cpp_FUN_0041e910(&local_e4,&local_fc);
  }
  else {
    iVar3 = core_box_cpp_FUN_0041e910(param_7,&local_fc);
  }
  if (iVar3 == 0) {
    return 2.0;
  }
  core_actor_cpp_FUN_00408bf0();
  local_78.x = local_54;
  *(float *)((int)&local_78 + (uint)bVar8 * -8 + 4) = afStack_68[(uint)bVar8 * -2 + 6];
  *(float *)((int)&local_78 + (uint)bVar8 * -8 + (uint)bVar8 * -8 + 8) =
       afStack_68[(uint)bVar8 * -2 + (uint)bVar8 * -2 + 7];
  core_actor_cpp_FUN_00408b40();
  local_3c.x = afStack_68[2];
  *(float *)((int)&local_3c + (uint)bVar8 * -8 + 4) = afStack_68[(uint)bVar8 * -2 + 3];
  *(float *)((int)&local_3c + (uint)bVar8 * -8 + (uint)bVar8 * -8 + 8) =
       afStack_68[(uint)bVar8 * -2 + (uint)bVar8 * -2 + 4];
  param_4[3] = -NAN;
  param_4[4] = -NAN;
  param_4[5] = -NAN;
  param_4[6] = -NAN;
  if (param_6 < 2) {
    if (param_6 == 1) {
      (**(code **)(*(int *)(param_1 + 0x154) + 0x1c))(param_1);
      puVar5 = local_b4;
      puVar7 = local_cc;
      for (iVar3 = 6; iVar3 != 0; iVar3 = iVar3 + -1) {
        *puVar7 = *puVar5;
        puVar5 = puVar5 + (uint)bVar8 * -2 + 1;
        puVar7 = puVar7 + (uint)bVar8 * -2 + 1;
      }
      local_118 = (float)core_box_cpp_FUN_0041e220(local_cc);
      local_14 = local_118;
      goto LAB_004093ad;
    }
  }
  else {
    if (param_6 < 3) {
      local_118 = (float)core_actor_cpp_FUN_00408100(param_5);
      local_14 = local_118;
      goto LAB_004093ad;
    }
    if (param_6 == 3) {
      local_118 = (float)(**(code **)(*(int *)(param_1 + 0x154) + 0xb8))(param_1);
      local_14 = local_118;
      core_actor_cpp_FUN_00408b40();
      fStack_6c = fStack_30;
      afStack_68[(uint)bVar8 * -2] = afStack_2c[(uint)bVar8 * -2];
      afStack_68[(uint)bVar8 * -2 + (uint)bVar8 * -2 + 1] =
           afStack_2c[(uint)bVar8 * -2 + (uint)bVar8 * -2 + 1];
      if (afStack_68 + 8 != &fStack_6c) {
        local_48 = fStack_6c;
        fStack_44 = afStack_68[0];
        uStack_40 = afStack_68[1];
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
  if (g_CDemonSetPtr->skip_exact_collisions == 0) {
    iVar3 = *(int *)(param_5 + 0x20);
    if (iVar3 == 0) {
      if (*(int *)(param_5 + 0x24) != 0) {
        pCVar1 = core_dmodel_cpp_CKeyFramedModelInstance_getModelPtr_FUN_004625a0
                           (*(CKeyFramedModelInstance **)(param_5 + 0x24));
        local_118 = (float)core_dmodel_cpp_FUN_004618a0(pCVar1,iVar3);
        if (local_118 < 0.0) {
          return 2.0;
        }
        local_14 = local_118;
        if (1.0 < local_118) {
          return 2.0;
        }
      }
    }
    else {
      local_118 = core_skeleton_cpp_CDeformableModelInstance_rayIntersect_FUN_0054f400
                            (*(CDeformableModelInstance **)(param_5 + 0x20),&local_78,&local_3c);
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
      local_14 = local_118;
      this_ptr = core_skeleton_cpp_CDeformableModelInstance_getModelPtr_FUN_0054ea40
                           (*(CDeformableModelInstance **)(param_5 + 0x20));
      fVar2 = (float)core_skeleton_cpp_CDeformableModel_findMaxWeightBone_FUN_0054bde0
                               (this_ptr,(int)fVar2,(int)triangle_index);
      param_4[6] = fVar2;
      if ((int *)&stack0x00000000 != g_DeformableModelPool[0].vertex_count + 2) {
        local_48 = _DAT_0272af48;
        fStack_44 = _DAT_0272af4c;
        uStack_40 = _DAT_0272af50;
      }
    }
  }
  core_actor_cpp_FUN_00408b00();
  local_98[2] = fStack_84;
  local_98[(uint)bVar8 * -2 + 3] = local_98[(uint)bVar8 * -2 + 6];
  local_98[(uint)bVar8 * -2 + (uint)bVar8 * -2 + 4] =
       local_98[(uint)bVar8 * -2 + (uint)bVar8 * -2 + 7];
  if (param_4 != local_98 + 2) {
    *param_4 = local_98[2];
    param_4[1] = local_98[3];
    param_4[2] = fStack_88;
  }
  return local_118;
}
