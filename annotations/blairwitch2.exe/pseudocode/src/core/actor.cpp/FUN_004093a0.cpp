// Name: core_actor.cpp_FUN_004093a0
// Address: 004093a0
// Address Range: [[004093a0, 0040982a]]
// Convention: unknown
// Signature: float core_actor_cpp_FUN_004093a0(int param_1,CBoundingBox3D *param_2,float *param_3,undefined4 *param_4,int param_5,uint param_6,CBoundingBox3D *param_7)

#include "nocturne.h"

/* WARNING: Type propagation algorithm not settling */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

float core_actor_cpp_FUN_004093a0(int param_1,CBoundingBox3D *param_2,float *param_3,uint *param_4,int param_5,uint param_6,CBoundingBox3D *param_7)

{
  CDemonSet *pCVar1;
  CKeyFramedModel *pCVar2;
  CDeformableModel *this_ptr;
  int iVar3;
  float *pfVar4;
  uint *puVar5;
  CBoundingBox3D *pCVar6;
  uint *puVar7;
  byte bVar8;
  float afStackY_106c [976];
  int lod_level;
  CVector3f *point;
  float local_100;
  CBoundingBox3D local_fc;
  float local_e4 [6];
  uint local_cc [6];
  uint local_b4 [6];
  CBoundingBox3D local_9c;
  CVector3f local_84;
  CVector3f local_78;
  float local_6c;
  float local_68 [4];
  uint uStack_58;
  float local_54;
  float afStack_50 [2];
  CVector3f local_48;
  uint uStack_3c;
  float afStack_38 [5];
  uint uStack_24;
  float local_14;
  
  bVar8 = 0;
  if (param_6 == 0) {
    return 2.0;
  }
  core_actor_cpp_FUN_004090f0();
  pfVar4 = local_e4;
  pCVar6 = &local_9c;
  for (iVar3 = 6; iVar3 != 0; iVar3 = iVar3 + -1) {
    (pCVar6->min).x = *pfVar4;
    pfVar4 = pfVar4 + (uint)bVar8 * -2 + 1;
    pCVar6 = (CBoundingBox3D *)((int)pCVar6 + ((uint)bVar8 * -2 + 1) * 4);
  }
  if (param_7 == (CBoundingBox3D *)0x0) {
    if (&local_fc != param_2) {
      local_fc.min.x = (param_2->min).x;
      local_fc.min.y = (param_2->min).y;
      local_fc.min.z = (param_2->min).z;
    }
    if ((CBoundingBox3D *)&local_fc.max != param_2) {
      local_fc.max.x = (param_2->min).x;
      local_fc.max.y = (param_2->min).y;
      local_fc.max.z = (param_2->min).z;
    }
    local_6c = (param_2->min).x + *param_3;
    point = &local_78;
    local_68[0] = (param_2->min).y + param_3[1];
    pCVar6 = &local_fc;
    local_68[1] = (param_2->min).z + param_3[2];
    local_78.x = local_6c;
    *(float *)((int)&local_78 + (uint)bVar8 * -8 + 4) = local_68[(uint)bVar8 * -2];
    *(float *)((int)&local_78 + (uint)bVar8 * -8 + (uint)bVar8 * -8 + 8) =
         local_68[(uint)bVar8 * -2 + (uint)bVar8 * -2 + 1];
    core_box_cpp_CBoundingBox3D_expand_FUN_0041a590(pCVar6,point);
    iVar3 = core_box_cpp_FUN_0041b660(&local_fc,&local_9c);
  }
  else {
    iVar3 = core_box_cpp_FUN_0041b660(param_7,&local_9c);
  }
  if (iVar3 == 0) {
    return 2.0;
  }
  core_actor_cpp_FUN_00408de0();
  local_84.x = afStack_38[2];
  *(float *)((int)&local_84 + (uint)bVar8 * -8 + 4) = afStack_38[(uint)bVar8 * -2 + 3];
  *(float *)((int)&local_84 + (uint)bVar8 * -8 + (uint)bVar8 * -8 + 8) =
       afStack_38[(uint)bVar8 * -2 + (uint)bVar8 * -2 + 4];
  core_actor_cpp_FUN_00408d30();
  local_48.x = local_54;
  *(float *)((int)&local_48 + (uint)bVar8 * -8 + 4) = afStack_50[(uint)bVar8 * -2];
  *(float *)((int)&local_48 + (uint)bVar8 * -8 + (uint)bVar8 * -8 + 8) =
       afStack_50[(uint)bVar8 * -2 + (uint)bVar8 * -2 + 1];
  if (param_6 < 2) {
    if (param_6 == 1) {
      (**(code **)(*(int *)(param_1 + 0x2b0) + 0x24))(param_1);
      puVar5 = local_cc;
      puVar7 = local_b4;
      for (iVar3 = 6; iVar3 != 0; iVar3 = iVar3 + -1) {
        *puVar7 = *puVar5;
        puVar5 = puVar5 + (uint)bVar8 * -2 + 1;
        puVar7 = puVar7 + (uint)bVar8 * -2 + 1;
      }
      local_100 = (float)core_box_cpp_FUN_0041af70(local_b4);
      local_14 = local_100;
      goto LAB_0040957e;
    }
  }
  else {
    if (param_6 < 3) {
      local_100 = (float)core_actor_cpp_FUN_00408290(param_5);
      local_14 = local_100;
      goto LAB_0040957e;
    }
    if (param_6 == 3) {
      local_100 = (float)(**(code **)(*(int *)(param_1 + 0x2b0) + 0xc0))(param_1);
      local_14 = local_100;
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
  if (pCVar1->skip_exact_collisions == 0) {
    iVar3 = *(int *)(param_5 + 0x20);
    if (iVar3 == 0) {
      if (*(int *)(param_5 + 0x24) != 0) {
        pCVar2 = core_dmodel_cpp_CKeyFramedModelInstance_getModelPtr_FUN_0044fd20
                           (*(CKeyFramedModelInstance **)(param_5 + 0x24));
        local_100 = (float)core_dmodel_cpp_FUN_0044f020(pCVar2,iVar3);
        if (local_100 < 0.0) {
          return 2.0;
        }
        local_14 = local_100;
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
      local_14 = local_100;
      this_ptr = core_skeleton_cpp_CDeformableModelInstance_getModelPtr_FUN_00547810
                           (*(CDeformableModelInstance **)(param_5 + 0x20));
      iVar3 = core_skeleton_cpp_CDeformableModel_findMaxWeightBone_FUN_00544bb0
                        (this_ptr,lod_level,iVar3);
      param_4[6] = iVar3;
      if ((SVert **)&stack0x00000000 != g_DeformableModelPool[0].vertex_data_ptr + 3) {
        local_68[2] = (float)_DAT_020ccfe0;
        local_68[3] = (float)_DAT_020ccfe4;
        uStack_58 = _DAT_020ccfe8;
      }
    }
  }
  core_actor_cpp_FUN_00408cf0();
  uStack_3c = uStack_24;
  afStack_38[(uint)bVar8 * -2] = afStack_38[(uint)bVar8 * -2 + 6];
  afStack_38[(uint)bVar8 * -2 + (uint)bVar8 * -2 + 1] =
       afStack_38[(uint)bVar8 * -2 + (uint)bVar8 * -2 + 7];
  if (param_4 != &uStack_3c) {
    *param_4 = uStack_3c;
    param_4[1] = afStack_38[0];
    param_4[2] = afStack_38[1];
  }
  return local_100;
}
