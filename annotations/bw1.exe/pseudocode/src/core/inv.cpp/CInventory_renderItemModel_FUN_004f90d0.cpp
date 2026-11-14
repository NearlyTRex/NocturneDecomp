// Name: core_inv.cpp_CInventory_renderItemModel_FUN_004f90d0
// Address: 004f90d0
// Address Range: [[004f90d0, 004f95a8]]
// Convention: __cdecl
// Signature: void __cdecl core_inv_cpp_CInventory_renderItemModel_FUN_004f90d0(CInventory *this_ptr,CDemonActor *item,int viewport_x,int viewport_y,int viewport_size,float rotation_y,int alpha)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl core_inv_cpp_CInventory_renderItemModel_FUN_004f90d0(CInventory *this_ptr,CDemonActor *item,int viewport_x,int viewport_y,int viewport_size,float rotation_y,int alpha)

{
  int *piVar1;
  CDemonRenderer *this_ptr_00;
  CDemonSet *pCVar2;
  int iVar3;
  int iVar4;
  CKeyFramedModel *pCVar5;
  CDemonActor *pCVar6;
  CBoundingBox3D *pCVar7;
  float *pfVar8;
  byte bVar9;
  float afStackY_1084 [1007];
  char *class_name;
  float local_b4;
  float local_b0;
  float local_ac;
  float local_a8;
  float local_a4;
  float local_a0;
  float local_9c;
  float local_98;
  float local_94;
  CVector3f local_90;
  CVector3f local_84;
  float local_78;
  float local_74 [4];
  float local_64;
  float local_60;
  float local_5c;
  float local_58;
  float local_54;
  float local_50;
  float local_4c;
  float local_48;
  float local_44;
  float local_40;
  CVector3f local_3c;
  float local_30;
  float local_2c [4];
  float local_1c;
  CKeyFramedModelInstance *local_18;
  float local_14;
  
  pCVar2 = g_CDemonSetPtr;
  bVar9 = 0;
  if (item != (CDemonActor *)0x0) {
    if (0x280 < DAT_0061b498) {
      viewport_x = (viewport_x * 0x280) / DAT_0061b498;
      viewport_y = (viewport_y * 0x1e0) / DAT_0061b49c;
      viewport_size = (viewport_size * 0x280) / DAT_0061b498;
    }
    g_CDemonSetPtr->rendering_mode = 1;
    (pCVar2->light_direction).x = -0x482b;
    (pCVar2->light_direction).y = -0x482b;
    (pCVar2->light_direction).z = 0x482b;
    pCVar2->ambient_base_quick = 32000;
    _DAT_01d1bc60 =
         _DAT_01d1bc60 +
         ((int)((_DAT_01c43530 + (_DAT_01c43530 >> 0x1f) * -4) -
               (uint)((_DAT_01c43530 >> 0x1f) << 1 < 0)) >> 2);
    iVar3 = engine_matrix_c_FUN_00507350(_DAT_01d1bc60);
    iVar4 = engine_matrix_c_FUN_00507390(_DAT_01d1bc60);
    (g_CDemonSetPtr->light_direction).x =
         (uint)((longlong)iVar3 * 0x482b) >> 0x10 |
         (int)((ulonglong)((longlong)iVar3 * 0x482b) >> 0x20) << 0x10;
    this_ptr_00 = DAT_00612560;
    (g_CDemonSetPtr->light_direction).z =
         (uint)((longlong)iVar4 * 0x482b) >> 0x10 |
         (int)((ulonglong)((longlong)iVar4 * 0x482b) >> 0x20) << 0x10;
    engine_drender_cpp_CDemonRenderer_pushViewport_FUN_00483c10
              (this_ptr_00,viewport_x,viewport_y,viewport_size,viewport_size);
    local_18 = (CKeyFramedModelInstance *)core_inv_cpp_FUN_004f60c0(item);
    pCVar5 = core_dmodel_cpp_CKeyFramedModelInstance_getModelPtr_FUN_00468900(local_18);
    pCVar7 = pCVar5->frame_bounds;
    pfVar8 = &stack0xffffff4c;
    for (iVar3 = 6; iVar3 != 0; iVar3 = iVar3 + -1) {
      *pfVar8 = (pCVar7->min).x;
      pCVar7 = (CBoundingBox3D *)((int)pCVar7 + (uint)bVar9 * -8 + 4);
      pfVar8 = pfVar8 + (uint)bVar9 * -2 + 1;
    }
    local_9c = local_a8 - local_b4;
    local_98 = local_a4 - local_b0;
    local_94 = local_a0 - local_ac;
    local_74[2] = local_a8 - local_b4;
    local_74[(uint)bVar9 * -2 + 3] = *(float *)((int)&stack0xffffff68 + (uint)bVar9 * -8);
    local_74[(uint)bVar9 * -2 + (uint)bVar9 * -2 + 4] =
         *(float *)((int)&stack0xffffff6c + (uint)bVar9 * -8 + (uint)bVar9 * -8);
    local_30 = local_74[2] * _DAT_005e65c0;
    local_2c[0] = local_74[3] * _DAT_005e65c0;
    local_2c[1] = local_64 * _DAT_005e65c0;
    local_60 = local_74[2] * _DAT_005e65c0;
    local_74[(uint)bVar9 * -2 + 6] = local_2c[(uint)bVar9 * -2];
    local_74[(uint)bVar9 * -2 + (uint)bVar9 * -2 + 7] =
         local_2c[(uint)bVar9 * -2 + (uint)bVar9 * -2 + 1];
    if (((local_60 <= local_5c) || (local_14 = local_60, local_60 <= local_58)) &&
       (local_14 = local_58, local_58 < local_5c)) {
      local_14 = local_5c;
    }
    iVar3 = core_actor_cpp_isOfClass_FUN_0040c550(item,"CGun");
    if ((iVar3 != 0) ||
       (iVar3 = core_actor_cpp_isOfClass_FUN_0040c550(item,"CKeyActor"), iVar3 != 0)) {
      local_14 = local_14 * (float)_DAT_005e65c8;
    }
    local_84.z = -local_14 * (float)_DAT_005e65c8;
    local_84.x = 0.0;
    local_84.y = 0.0;
    local_1c = local_84.z;
    engine_drender_cpp_CDemonRenderer_setCameraOriginFromScaledPoint_FUN_004834b0
              (DAT_00612560,&local_84);
    engine_drender_cpp_CDemonRenderer_setProjectionScale_FUN_004839b0(DAT_00612560,36.0);
    engine_drender_cpp_CDemonRenderer_setupSceneRendering_FUN_00483530
              (DAT_00612560,(CVector3f *)&DAT_02c8af28);
    engine_drender_cpp_CDemonRenderer_processCameraRelativeVertex_FUN_004837b0
              (DAT_00612560,(CVector3f *)&DAT_02c8af28);
    local_48 = local_b4 + local_a8;
    local_44 = local_b0 + local_a4;
    local_40 = local_ac + local_a0;
    local_54 = local_b4 + local_a8;
    local_74[(uint)bVar9 * -2 + 9] = local_74[(uint)bVar9 * -2 + 0xc];
    local_74[(uint)bVar9 * -2 + (uint)bVar9 * -2 + 10] =
         local_74[(uint)bVar9 * -2 + (uint)bVar9 * -2 + 0xd];
    class_name = "CBoxActor";
    _DAT_01c51cac = 0;
    local_78 = local_54 * _DAT_005e65d0;
    local_74[0] = local_50 * _DAT_005e65d0;
    local_74[1] = local_4c * _DAT_005e65d0;
    local_90.x = local_54 * _DAT_005e65d0;
    *(float *)((int)&local_90 + (uint)bVar9 * -8 + 4) = local_74[(uint)bVar9 * -2];
    pCVar6 = item;
    *(float *)((int)&local_90 + (uint)bVar9 * -8 + (uint)bVar9 * -8 + 8) =
         local_74[(uint)bVar9 * -2 + (uint)bVar9 * -2 + 1];
    iVar3 = core_actor_cpp_isOfClass_FUN_0040c550(pCVar6,class_name);
    if (iVar3 == 0) {
      local_3c.y = rotation_y;
      local_3c.x = 0.0;
      local_3c.z = 0.0;
    }
    else {
      pCVar6 = (CBoxActor *)core_actor_cpp_castToClassHash_FUN_0040c600(item,g_CBoxActorClassInfo.name_hash);
      piVar1 = &pCVar6[4].scale.y;
      if (&local_3c != (CVector3f *)piVar1) {
        local_3c.x = (float)*piVar1;
        local_3c.y = (float)pCVar6[4].scale.z;
        local_3c.z = (float)pCVar6[4].blood_effect_timer;
      }
    }
    iVar3 = core_actor_cpp_isOfClass_FUN_0040c550(item,"CKeyActor");
    if (iVar3 != 0) {
      local_3c.x = local_3c.x + _DAT_005e65d4;
    }
    pCVar6 = (CMelee *)core_actor_cpp_castToClassHash_FUN_0040c600(item,g_CMeleeClassInfo.name_hash);
    if (pCVar6 != (CDemonActor *)0x0) {
      iVar3 = _stricmp(pCVar6[1].create_event,"axe1.kfm");
      if (iVar3 == 0) {
        local_3c.x = local_3c.x + _DAT_005e65d8;
        local_3c.z = local_3c.z + _DAT_005e65d8;
      }
      iVar3 = _stricmp(pCVar6[1].create_event,"ax.kfm");
      if (iVar3 == 0) {
        local_3c.x = local_3c.x + _DAT_005e65d8;
        local_3c.z = local_3c.z + _DAT_005e65d8;
      }
    }
    engine_drender_cpp_CDemonRenderer_applyScaledTransform_FUN_00483850
              (DAT_00612560,&local_3c,(CVector3f *)0x0);
    engine_drender_cpp_CDemonRenderer_applyScaledTransform_FUN_00483850
              (DAT_00612560,(CVector3f *)&DAT_02c8af28,&local_90);
    if (alpha < 65000) {
      engine_drender_cpp_CDemonRenderer_setRenderAlpha_FUN_00483de0(DAT_00612560,alpha);
      engine_drender_cpp_CDemonRenderer_setTextureCaptureMode_FUN_00484a40(DAT_00612560,1);
      core_dmodel_cpp_CKeyFramedModelInstance_prepareForRendering_FUN_004688a0(local_18,0.0,0x2e7);
      engine_drender_cpp_CDemonRenderer_processCapturedFaces_FUN_00484e00(DAT_00612560);
    }
    else {
      core_dmodel_cpp_CKeyFramedModelInstance_prepareForRendering_FUN_004688a0(local_18,0.0,-1);
    }
    engine_drender_cpp_pop_FUN_004839a0();
    engine_drender_cpp_pop_FUN_004839a0();
    engine_drender_cpp_popViewport_FUN_00483c40();
    g_CDemonSetPtr->rendering_mode = 0;
  }
  return;
}
