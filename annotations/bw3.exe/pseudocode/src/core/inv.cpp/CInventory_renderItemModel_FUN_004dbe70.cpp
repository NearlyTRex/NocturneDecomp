// Name: core_inv.cpp_CInventory_renderItemModel_FUN_004dbe70
// Address: 004dbe70
// Address Range: [[004dbe70, 004dc556]]
// Convention: __cdecl
// Signature: void __cdecl core_inv_cpp_CInventory_renderItemModel_FUN_004dbe70(CInventory *this_ptr,CDemonActor *item,int viewport_x,int viewport_y,int viewport_size,float rotation_y,int alpha)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl core_inv_cpp_CInventory_renderItemModel_FUN_004dbe70(CInventory *this_ptr,CDemonActor *item,int viewport_x,int viewport_y,int viewport_size,float rotation_y,int alpha)

{
  CDemonSet *pCVar1;
  int iVar2;
  int iVar3;
  CKeyFramedModel *pCVar4;
  CDemonActor *pCVar5;
  CBoundingBox3D *pCVar6;
  float *pfVar7;
  byte bVar8;
  float afStackY_1078 [1004];
  char *class_name;
  float local_b4;
  float local_b0;
  float local_ac;
  float local_a8;
  float local_a4;
  float local_a0;
  CVector3f local_9c;
  float local_90;
  float local_8c [4];
  float local_7c;
  float local_78;
  float local_74;
  float local_70;
  float local_6c;
  float local_68;
  float local_64;
  CVector3f local_60;
  float local_54;
  float local_50 [4];
  float local_40;
  float local_3c;
  float local_38;
  float local_34;
  CVector3f local_30;
  float local_1c;
  CKeyFramedModelInstance *local_18;
  float local_14;
  
  pCVar1 = g_CDemonSetPtr;
  bVar8 = 0;
  if (item != (CDemonActor *)0x0) {
    if (0x280 < DAT_005fba18) {
      viewport_x = (viewport_x * 0x280) / DAT_005fba18;
      viewport_y = (viewport_y * 0x1e0) / DAT_005fba1c;
      viewport_size = (viewport_size * 0x280) / DAT_005fba18;
    }
    g_CDemonSetPtr->rendering_mode = 1;
    (pCVar1->light_direction).x = -0x482b;
    (pCVar1->light_direction).y = -0x482b;
    (pCVar1->light_direction).z = 0x482b;
    pCVar1->ambient_base_quick = 32000;
    _DAT_01d70a38 =
         _DAT_01d70a38 +
         ((int)((_DAT_01c5fad0 + (_DAT_01c5fad0 >> 0x1f) * -4) -
               (uint)((_DAT_01c5fad0 >> 0x1f) << 1 < 0)) >> 2);
    iVar2 = engine_matrix_c_interpolatedSin_FUN_004e4d90(_DAT_01d70a38);
    iVar3 = engine_matrix_c_interpolatedCos_FUN_004e4dd0(_DAT_01d70a38);
    (g_CDemonSetPtr->light_direction).x =
         (uint)((longlong)iVar2 * 0x482b) >> 0x10 |
         (int)((ulonglong)((longlong)iVar2 * 0x482b) >> 0x20) << 0x10;
    (g_CDemonSetPtr->light_direction).z =
         (uint)((longlong)iVar3 * 0x482b) >> 0x10 |
         (int)((ulonglong)((longlong)iVar3 * 0x482b) >> 0x20) << 0x10;
    engine_drender_cpp_CDemonRenderer_pushViewport_FUN_0046d2f0
              (DAT_005f2afc,viewport_x,viewport_y,viewport_size,viewport_size);
    local_18 = core_inv_cpp_getItemModel_FUN_004d9d20(item);
    pCVar4 = core_dmodel_cpp_CKeyFramedModelInstance_getModelPtr_FUN_004625a0(local_18);
    pCVar6 = pCVar4->frame_bounds;
    pfVar7 = &stack0xffffff4c;
    for (iVar2 = 6; iVar2 != 0; iVar2 = iVar2 + -1) {
      *pfVar7 = (pCVar6->min).x;
      pCVar6 = (CBoundingBox3D *)((int)pCVar6 + (uint)bVar8 * -8 + 4);
      pfVar7 = pfVar7 + (uint)bVar8 * -2 + 1;
    }
    local_3c = local_a8 - local_b4;
    local_38 = local_a4 - local_b0;
    local_34 = local_a0 - local_ac;
    local_8c[2] = local_a8 - local_b4;
    local_8c[(uint)bVar8 * -2 + 3] = local_50[(uint)bVar8 * -2 + 6];
    local_8c[(uint)bVar8 * -2 + (uint)bVar8 * -2 + 4] =
         local_50[(uint)bVar8 * -2 + (uint)bVar8 * -2 + 7];
    local_50[2] = local_8c[2] * _DAT_005c63a7;
    local_50[3] = local_8c[3] * _DAT_005c63a7;
    local_40 = local_7c * _DAT_005c63a7;
    local_90 = local_8c[2] * _DAT_005c63a7;
    local_8c[(uint)bVar8 * -2] = local_50[(uint)bVar8 * -2 + 3];
    local_8c[(uint)bVar8 * -2 + (uint)bVar8 * -2 + 1] =
         local_50[(uint)bVar8 * -2 + (uint)bVar8 * -2 + 4];
    if (((local_90 <= local_8c[0]) || (local_14 = local_90, local_90 <= local_8c[1])) &&
       (local_14 = local_8c[1], local_8c[1] < local_8c[0])) {
      local_14 = local_8c[0];
    }
    iVar2 = core_actor_cpp_isOfClass_FUN_0040c790(item,"CLightstaff");
    if ((iVar2 != 0) ||
       (iVar2 = core_actor_cpp_isOfClass_FUN_0040c790(item,"CFirestaff"), iVar2 != 0)) {
      local_14 = local_14 * (float)_DAT_005c63af;
    }
    iVar2 = core_actor_cpp_isOfClass_FUN_0040c790(item,&DAT_005c62e2);
    if (((iVar2 != 0) ||
        (iVar2 = core_actor_cpp_isOfClass_FUN_0040c790(item,"CKeyActor"), iVar2 != 0)) ||
       ((iVar2 = core_actor_cpp_isOfClass_FUN_0040c790(item,"CExorcism"), iVar2 != 0 ||
        ((iVar2 = core_actor_cpp_isOfClass_FUN_0040c790(item,&DAT_005c62fb), iVar2 != 0 ||
         (iVar2 = core_actor_cpp_isOfClass_FUN_0040c790(item,"CBindEvil"), iVar2 != 0))))))
    {
      local_14 = local_14 * (float)_DAT_005c63b7;
    }
    local_9c.z = -local_14 * (float)_DAT_005c63b7;
    local_9c.x = 0.0;
    local_9c.y = 0.0;
    local_1c = local_9c.z;
    engine_drender_cpp_CDemonRenderer_setCameraOriginFromScaledPoint_FUN_0046cb90
              (DAT_005f2afc,&local_9c);
    engine_drender_cpp_CDemonRenderer_setProjectionScale_FUN_0046d090(DAT_005f2afc,36.0);
    engine_drender_cpp_CDemonRenderer_setupSceneRendering_FUN_0046cc10
              (DAT_005f2afc,(CVector3f *)&DAT_02cfd900);
    engine_drender_cpp_CDemonRenderer_processCameraRelativeVertex_FUN_0046ce90
              (DAT_005f2afc,(CVector3f *)&DAT_02cfd900);
    local_78 = local_b4 + local_a8;
    local_74 = local_b0 + local_a4;
    local_70 = local_ac + local_a0;
    local_54 = local_b4 + local_a8;
    local_50[(uint)bVar8 * -2] = local_8c[(uint)bVar8 * -2 + 6];
    local_50[(uint)bVar8 * -2 + (uint)bVar8 * -2 + 1] =
         local_8c[(uint)bVar8 * -2 + (uint)bVar8 * -2 + 7];
    class_name = "CLightstaff";
    _DAT_01c6e24c = 0;
    local_6c = local_54 * _DAT_005c63bf;
    local_68 = local_50[0] * _DAT_005c63bf;
    local_64 = local_50[1] * _DAT_005c63bf;
    local_60.x = local_54 * _DAT_005c63bf;
    *(float *)((int)&local_60 + (uint)bVar8 * -8 + 4) = local_8c[(uint)bVar8 * -2 + 9];
    pCVar5 = item;
    *(float *)((int)&local_60 + (uint)bVar8 * -8 + (uint)bVar8 * -8 + 8) =
         local_8c[(uint)bVar8 * -2 + (uint)bVar8 * -2 + 10];
    iVar2 = core_actor_cpp_isOfClass_FUN_0040c790(pCVar5,class_name);
    if ((iVar2 != 0) ||
       (iVar2 = core_actor_cpp_isOfClass_FUN_0040c790(item,"CFirestaff"), iVar2 != 0)) {
      local_60.y = local_60.y - local_a4 * _DAT_005c63a7;
    }
    iVar2 = core_actor_cpp_isOfClass_FUN_0040c790(item,"CBurncross");
    if (((((iVar2 != 0) ||
          (iVar2 = core_actor_cpp_isOfClass_FUN_0040c790(item,"CFirestaff"), iVar2 != 0))
         || (iVar2 = core_actor_cpp_isOfClass_FUN_0040c790(item,"CHeal"), iVar2 != 0)) ||
        ((iVar2 = core_actor_cpp_isOfClass_FUN_0040c790(item,"CExorcism"), iVar2 != 0 ||
         (iVar2 = core_actor_cpp_isOfClass_FUN_0040c790(item,"CHolycross"), iVar2 != 0))))
       || ((iVar2 = core_actor_cpp_isOfClass_FUN_0040c790(item,"CLightstaff"), iVar2 != 0
           || (iVar2 = core_actor_cpp_isOfClass_FUN_0040c790(item,&DAT_005c635e), iVar2 != 0)))) {
      rotation_y = 0.0;
    }
    iVar2 = core_actor_cpp_isOfClass_FUN_0040c790(item,"CBoxActor");
    if (iVar2 == 0) {
      local_30.y = rotation_y;
      local_30.x = 0.0;
      local_30.z = 0.0;
    }
    else {
      pCVar5 = (CBoxActor *)core_actor_cpp_castToClassHash_FUN_0040c840(item,g_CBoxActorClassInfo.name_hash);
      iVar2 = _strcmp(pCVar5[1].create_event,"journal.kfm");
      if (iVar2 == 0) {
        local_30.x = local_30.x + _DAT_005c63c3;
        local_30.y = local_30.y + _DAT_005c63c7;
        local_30.z = local_30.z + _DAT_005c63c7;
      }
      else if (&local_30 != (CVector3f *)(pCVar5[5].actor_name + 0x18)) {
        local_30.x = ((CVector3f *)(pCVar5[5].actor_name + 0x18))->x;
        local_30.y = *(float *)(pCVar5[5].actor_name + 0x1c);
        local_30.z = pCVar5[5].location.position.x;
      }
    }
    iVar2 = core_actor_cpp_isOfClass_FUN_0040c790(item,"CBindEvil");
    if (iVar2 != 0) {
      local_30.x = local_30.x + _DAT_005c63cb;
      local_30.y = 0.3926991;
    }
    iVar2 = core_actor_cpp_isOfClass_FUN_0040c790(item,"CExorcism");
    if (iVar2 != 0) {
      local_30.x = local_30.x + _DAT_005c63c7;
    }
    iVar2 = core_actor_cpp_isOfClass_FUN_0040c790(item,"CKeyActor");
    if (iVar2 != 0) {
      local_30.x = local_30.x + _DAT_005c63c3;
    }
    pCVar5 = (CMelee *)core_actor_cpp_castToClassHash_FUN_0040c840(item,g_CMeleeClassInfo.name_hash);
    if (pCVar5 != (CDemonActor *)0x0) {
      iVar2 = _stricmp(pCVar5[1].create_event,"axe1.kfm");
      if (iVar2 == 0) {
        local_30.x = local_30.x + _DAT_005c63cf;
        local_30.z = local_30.z + _DAT_005c63cf;
      }
      iVar2 = _stricmp(pCVar5[1].create_event,"ax.kfm");
      if (iVar2 == 0) {
        local_30.x = local_30.x + _DAT_005c63cf;
        local_30.z = local_30.z + _DAT_005c63cf;
      }
    }
    engine_drender_cpp_CDemonRenderer_applyScaledTransform_FUN_0046cf30
              (DAT_005f2afc,&local_30,(CVector3f *)0x0);
    engine_drender_cpp_CDemonRenderer_applyScaledTransform_FUN_0046cf30
              (DAT_005f2afc,(CVector3f *)&DAT_02cfd900,&local_60);
    if (alpha < 65000) {
      engine_drender_cpp_CDemonRenderer_setRenderAlpha_FUN_0046d4c0(DAT_005f2afc,alpha);
      engine_drender_cpp_CDemonRenderer_setTextureCaptureMode_FUN_0046e120(DAT_005f2afc,1);
      core_dmodel_cpp_CKeyFramedModelInstance_prepareForRendering_FUN_00462540(local_18,0.0,0x2e7);
      engine_drender_cpp_CDemonRenderer_processCapturedFaces_FUN_0046e4e0(DAT_005f2afc);
    }
    else {
      core_dmodel_cpp_CKeyFramedModelInstance_prepareForRendering_FUN_00462540(local_18,0.0,-1);
    }
    engine_drender_cpp_pop_FUN_0046d080();
    engine_drender_cpp_pop_FUN_0046d080();
    engine_drender_cpp_popViewport_FUN_0046d320();
    g_CDemonSetPtr->rendering_mode = 0;
  }
  return;
}
