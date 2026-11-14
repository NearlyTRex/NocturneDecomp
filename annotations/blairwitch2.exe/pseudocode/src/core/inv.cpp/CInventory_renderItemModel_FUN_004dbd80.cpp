// Name: core_inv.cpp_CInventory_renderItemModel_FUN_004dbd80
// Address: 004dbd80
// Address Range: [[004dbd80, 004dc2b3]]
// Convention: __cdecl
// Signature: void __cdecl core_inv_cpp_CInventory_renderItemModel_FUN_004dbd80(CInventory *this_ptr,CDemonActor *item,int viewport_x,int viewport_y,int viewport_size,float rotation_y,int alpha)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl core_inv_cpp_CInventory_renderItemModel_FUN_004dbd80(CInventory *this_ptr,CDemonActor *item,int viewport_x,int viewport_y,int viewport_size,float rotation_y,int alpha)

{
  void **ppvVar1;
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
  float local_90;
  float local_8c;
  float local_88;
  float local_84;
  float local_80;
  float local_7c;
  float local_78;
  float local_74;
  float local_70;
  float local_6c;
  float local_68;
  float local_64;
  float local_60;
  float local_5c;
  float local_58;
  CVector3f local_54;
  CVector3f local_48;
  CVector3f local_3c;
  float local_30;
  float local_2c [4];
  CKeyFramedModelInstance *local_1c;
  float local_18;
  float local_14;
  
  pCVar2 = g_CDemonSetPtr;
  bVar9 = 0;
  if (item != (CDemonActor *)0x0) {
    if (0x280 < DAT_006141b8) {
      viewport_x = (viewport_x * 0x280) / DAT_006141b8;
      viewport_y = (viewport_y * 0x1e0) / DAT_006141bc;
      viewport_size = (viewport_size * 0x280) / DAT_006141b8;
    }
    g_CDemonSetPtr->rendering_mode = 1;
    (pCVar2->light_direction).x = -0x482b;
    (pCVar2->light_direction).y = -0x482b;
    (pCVar2->light_direction).z = 0x482b;
    pCVar2->ambient_base_quick = 32000;
    _DAT_01d02f44 =
         _DAT_01d02f44 +
         ((int)((_DAT_01c2a370 + (_DAT_01c2a370 >> 0x1f) * -4) -
               (uint)((_DAT_01c2a370 >> 0x1f) << 1 < 0)) >> 2);
    iVar3 = engine_matrix_c_FUN_004e86b0(_DAT_01d02f44);
    iVar4 = engine_matrix_c_FUN_004e86f0(_DAT_01d02f44);
    (g_CDemonSetPtr->light_direction).x =
         (uint)((longlong)iVar3 * 0x482b) >> 0x10 |
         (int)((ulonglong)((longlong)iVar3 * 0x482b) >> 0x20) << 0x10;
    (g_CDemonSetPtr->light_direction).z =
         (uint)((longlong)iVar4 * 0x482b) >> 0x10 |
         (int)((ulonglong)((longlong)iVar4 * 0x482b) >> 0x20) << 0x10;
    engine_drender_cpp_CDemonRenderer_pushViewport_FUN_0046b710
              (DAT_0060b280,viewport_x,viewport_y,viewport_size,viewport_size);
    local_1c = core_inv_cpp_getItemModel_FUN_004d9db0(item);
    pCVar5 = core_dmodel_cpp_CKeyFramedModelInstance_getModelPtr_FUN_0044fd20(local_1c);
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
    local_6c = local_a8 - local_b4;
    *(uint *)((int)&stack0xffffff98 + (uint)bVar9 * -8) =
         *(uint *)((int)&stack0xffffff68 + (uint)bVar9 * -8);
    *(uint *)((int)&stack0xffffff9c + (uint)bVar9 * -8 + (uint)bVar9 * -8) =
         *(uint *)((int)&stack0xffffff6c + (uint)bVar9 * -8 + (uint)bVar9 * -8);
    local_78 = local_6c * _DAT_005db79a;
    local_74 = local_68 * _DAT_005db79a;
    local_70 = local_64 * _DAT_005db79a;
    local_84 = local_6c * _DAT_005db79a;
    *(uint *)((int)&stack0xffffff80 + (uint)bVar9 * -8) =
         *(uint *)((int)&stack0xffffff8c + (uint)bVar9 * -8);
    *(uint *)((int)&stack0xffffff84 + (uint)bVar9 * -8 + (uint)bVar9 * -8) =
         *(uint *)((int)&stack0xffffff90 + (uint)bVar9 * -8 + (uint)bVar9 * -8);
    if (((local_84 <= local_80) || (local_14 = local_84, local_84 <= local_7c)) &&
       (local_14 = local_7c, local_7c < local_80)) {
      local_14 = local_80;
    }
    iVar3 = core_actor_cpp_isOfClass_FUN_0040c840(item,&DAT_005db750);
    if ((iVar3 != 0) ||
       (iVar3 = core_actor_cpp_isOfClass_FUN_0040c840(item,"CKeyActor"), iVar3 != 0)) {
      local_14 = local_14 * (float)_DAT_005db7a2;
    }
    local_54.z = -local_14 * (float)_DAT_005db7a2;
    local_54.x = 0.0;
    local_54.y = 0.0;
    local_18 = local_54.z;
    engine_drender_cpp_CDemonRenderer_setCameraOriginFromScaledPoint_FUN_0046afb0
              (DAT_0060b280,&local_54);
    engine_drender_cpp_CDemonRenderer_setProjectionScale_FUN_0046b4b0(DAT_0060b280,36.0);
    engine_drender_cpp_CDemonRenderer_setupSceneRendering_FUN_0046b030
              (DAT_0060b280,(CVector3f *)&DAT_0265370c);
    engine_drender_cpp_CDemonRenderer_processCameraRelativeVertex_FUN_0046b2b0
              (DAT_0060b280,(CVector3f *)&DAT_0265370c);
    local_60 = local_b4 + local_a8;
    local_5c = local_b0 + local_a4;
    local_58 = local_ac + local_a0;
    local_90 = local_b4 + local_a8;
    *(uint *)((int)&stack0xffffff74 + (uint)bVar9 * -8) =
         *(uint *)((int)&stack0xffffffa4 + (uint)bVar9 * -8);
    *(uint *)((int)&stack0xffffff78 + (uint)bVar9 * -8 + (uint)bVar9 * -8) =
         *(uint *)((int)&stack0xffffffa8 + (uint)bVar9 * -8 + (uint)bVar9 * -8);
    class_name = "CBoxActor";
    _DAT_01c38aec = 0;
    local_30 = local_90 * _DAT_005db7aa;
    local_2c[0] = local_8c * _DAT_005db7aa;
    local_2c[1] = local_88 * _DAT_005db7aa;
    local_3c.x = local_90 * _DAT_005db7aa;
    *(float *)((int)&local_3c + (uint)bVar9 * -8 + 4) = local_2c[(uint)bVar9 * -2];
    pCVar6 = item;
    *(float *)((int)&local_3c + (uint)bVar9 * -8 + (uint)bVar9 * -8 + 8) =
         local_2c[(uint)bVar9 * -2 + (uint)bVar9 * -2 + 1];
    iVar3 = core_actor_cpp_isOfClass_FUN_0040c840(pCVar6,class_name);
    if (iVar3 == 0) {
      local_48.y = rotation_y;
      local_48.x = 0.0;
      local_48.z = 0.0;
    }
    else {
      pCVar6 = (CBoxActor *)core_actor_cpp_castToClassHash_FUN_0040c8f0(item,g_CBoxActorClassInfo.name_hash);
      ppvVar1 = &pCVar6[2].particle_systems[3].vtable;
      if (&local_48 != (CVector3f *)ppvVar1) {
        local_48.x = (float)*ppvVar1;
        local_48.y = pCVar6[2].particle_systems[4].position.x;
        local_48.z = pCVar6[2].particle_systems[4].position.y;
      }
    }
    iVar3 = core_actor_cpp_isOfClass_FUN_0040c840(item,"CKeyActor");
    if (iVar3 != 0) {
      local_48.x = local_48.x + _DAT_005db7ae;
    }
    pCVar6 = (CMelee *)core_actor_cpp_castToClassHash_FUN_0040c8f0(item,g_CMeleeClassInfo.name_hash);
    if (pCVar6 != (CDemonActor *)0x0) {
      iVar3 = _stricmp(pCVar6[1].create_event,"axe1.kfm");
      if (iVar3 == 0) {
        local_48.x = local_48.x + _DAT_005db7b6;
        local_48.z = local_48.z + _DAT_005db7b2;
      }
      iVar3 = _stricmp(pCVar6[1].create_event,"ax2.kfm");
      if (iVar3 == 0) {
        local_48.x = local_48.x + _DAT_005db7ba;
        local_48.z = local_48.z + _DAT_005db7b6;
      }
      iVar3 = _stricmp(pCVar6[1].create_event,"melee.kfm");
      if (iVar3 == 0) {
        local_48.x = local_48.x + _DAT_005db7ba;
        local_48.z = local_48.z + _DAT_005db7b2;
      }
      iVar3 = _stricmp(pCVar6[1].create_event,"cross1.kfm");
      if (iVar3 == 0) {
        local_48.y = 3.1415927;
      }
    }
    engine_drender_cpp_CDemonRenderer_applyScaledTransform_FUN_0046b350
              (DAT_0060b280,&local_48,(CVector3f *)0x0);
    engine_drender_cpp_CDemonRenderer_applyScaledTransform_FUN_0046b350
              (DAT_0060b280,(CVector3f *)&DAT_0265370c,&local_3c);
    if (alpha < 65000) {
      engine_drender_cpp_CDemonRenderer_setRenderAlpha_FUN_0046b8e0(DAT_0060b280,alpha);
      engine_drender_cpp_CDemonRenderer_setTextureCaptureMode_FUN_0046c540(DAT_0060b280,1);
      core_dmodel_cpp_CKeyFramedModelInstance_prepareForRendering_FUN_0044fcc0(local_1c,0.0,0x2e7);
      engine_drender_cpp_CDemonRenderer_processCapturedFaces_FUN_0046c900(DAT_0060b280);
    }
    else {
      core_dmodel_cpp_CKeyFramedModelInstance_prepareForRendering_FUN_0044fcc0(local_1c,0.0,-1);
    }
    engine_drender_cpp_pop_FUN_0046b4a0();
    engine_drender_cpp_pop_FUN_0046b4a0();
    engine_drender_cpp_popViewport_FUN_0046b740();
    g_CDemonSetPtr->rendering_mode = 0;
  }
  return;
}
