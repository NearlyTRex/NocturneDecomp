// Name: core_inv.cpp_FUN_004f90d0
// Address: 004f90d0
// Address Range: [[004f90d0, 004f95a8]]
// Convention: __cdecl
// Signature: void __cdecl core_inv_cpp_FUN_004f90d0(CInventory *this_ptr,CDemonActor *item,int viewport_x,int viewport_y,int viewport_size,float rotation_y,int alpha)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl core_inv_cpp_FUN_004f90d0(CInventory *this_ptr,CDemonActor *item,int viewport_x,int viewport_y,int viewport_size,float rotation_y,int alpha)

{
  CDemonRenderer *pCVar1;
  CDemonSet *pCVar2;
  int iVar3;
  int iVar4;
  CKeyFramedModel *pCVar5;
  uint *puVar6;
  uint *puVar7;
  byte bVar8;
  float afStackY_1084 [1007];
  CDemonActor *actor_ptr;
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
  byte local_90 [8];
  float fStack_88;
  byte local_84 [12];
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
  byte local_3c [8];
  float local_34;
  float local_30;
  float local_2c [4];
  float local_1c;
  CKeyFramedModelInstance *local_18;
  float local_14;
  
  pCVar2 = g_CDemonSetPtr;
  bVar8 = 0;
  if (item != (CDemonActor *)0x0) {
    if (0x280 < DAT_0061b498) {
      viewport_x = (viewport_x * 0x280) / DAT_0061b498;
      viewport_y = (viewport_y * 0x1e0) / DAT_0061b49c;
      viewport_size = (viewport_size * 0x280) / DAT_0061b498;
    }
    *(uint *)&g_CDemonSetPtr->field_0x15ae84 = 1;
    *(uint *)&pCVar2->field_0x15ae88 = 0xffffb7d5;
    *(uint *)&pCVar2->field_0x15ae8c = 0xffffb7d5;
    *(uint *)&pCVar2->field_0x15ae90 = 0x482b;
    *(uint *)&pCVar2->field_0x15ae94 = 32000;
    _DAT_01d1bc60 =
         _DAT_01d1bc60 +
         ((int)((_DAT_01c43530 + (_DAT_01c43530 >> 0x1f) * -4) -
               (uint)((_DAT_01c43530 >> 0x1f) << 1 < 0)) >> 2);
    iVar3 = engine_matrix_c_FUN_00507350(_DAT_01d1bc60);
    iVar4 = engine_matrix_c_FUN_00507390(_DAT_01d1bc60);
    *(uint *)&g_CDemonSetPtr->field_0x15ae88 =
         (uint)((longlong)iVar3 * 0x482b) >> 0x10 |
         (int)((ulonglong)((longlong)iVar3 * 0x482b) >> 0x20) << 0x10;
    pCVar1 = DAT_00612560;
    *(uint *)&g_CDemonSetPtr->field_0x15ae90 =
         (uint)((longlong)iVar4 * 0x482b) >> 0x10 |
         (int)((ulonglong)((longlong)iVar4 * 0x482b) >> 0x20) << 0x10;
    engine_matrix_c_FUN_00483c10(pCVar1,viewport_x,viewport_y,viewport_size,viewport_size);
    local_18 = (CKeyFramedModelInstance *)core_inv_cpp_FUN_004f60c0(item);
    pCVar5 = core_dmodel_cpp_CKeyFramedModelInstance_getModelPtr_FUN_00468900(local_18);
    puVar6 = *(uint **)&pCVar5->field_0x350;
    puVar7 = &stack0xffffff4c;
    for (iVar3 = 6; iVar3 != 0; iVar3 = iVar3 + -1) {
      *puVar7 = *puVar6;
      puVar6 = puVar6 + (uint)bVar8 * -2 + 1;
      puVar7 = puVar7 + (uint)bVar8 * -2 + 1;
    }
    local_9c = local_a8 - local_b4;
    local_98 = local_a4 - local_b0;
    local_94 = local_a0 - local_ac;
    local_74[2] = local_a8 - local_b4;
    local_74[(uint)bVar8 * -2 + 3] = *(float *)((int)&stack0xffffff68 + (uint)bVar8 * -8);
    local_74[(uint)bVar8 * -2 + (uint)bVar8 * -2 + 4] =
         *(float *)((int)&stack0xffffff6c + (uint)bVar8 * -8 + (uint)bVar8 * -8);
    local_30 = local_74[2] * _DAT_005e65c0;
    local_2c[0] = local_74[3] * _DAT_005e65c0;
    local_2c[1] = local_64 * _DAT_005e65c0;
    local_60 = local_74[2] * _DAT_005e65c0;
    local_74[(uint)bVar8 * -2 + 6] = local_2c[(uint)bVar8 * -2];
    local_74[(uint)bVar8 * -2 + (uint)bVar8 * -2 + 7] =
         local_2c[(uint)bVar8 * -2 + (uint)bVar8 * -2 + 1];
    if (((local_60 <= local_5c) || (local_14 = local_60, local_60 <= local_58)) &&
       (local_14 = local_58, local_58 < local_5c)) {
      local_14 = local_5c;
    }
    iVar3 = core_actor_cpp_FUN_0040c550(item,"CGun");
    if ((iVar3 != 0) || (iVar3 = core_actor_cpp_FUN_0040c550(item,"CKeyActor"), iVar3 != 0)
       ) {
      local_14 = local_14 * (float)_DAT_005e65c8;
    }
    local_84._8_4_ = -local_14 * (float)_DAT_005e65c8;
    local_84._0_4_ = 0;
    local_84._4_4_ = 0;
    local_1c = (float)local_84._8_4_;
    engine_drender_cpp_FUN_004834b0(DAT_00612560,(CVector3f *)local_84);
    engine_matrix_c_FUN_004839b0(DAT_00612560,0x42100000);
    engine_drender_cpp_CDemonRenderer_setupSceneRendering_FUN_00483530
              (DAT_00612560,(CVector3f *)&DAT_02c8af28);
    engine_drender_cpp_CDemonRenderer_processCameraRelativeVertex_FUN_004837b0
              (DAT_00612560,(CVector3f *)&DAT_02c8af28);
    local_48 = local_b4 + local_a8;
    local_44 = local_b0 + local_a4;
    local_40 = local_ac + local_a0;
    local_54 = local_b4 + local_a8;
    local_74[(uint)bVar8 * -2 + 9] = local_74[(uint)bVar8 * -2 + 0xc];
    local_74[(uint)bVar8 * -2 + (uint)bVar8 * -2 + 10] =
         local_74[(uint)bVar8 * -2 + (uint)bVar8 * -2 + 0xd];
    class_name = "CBoxActor";
    _DAT_01c51cac = 0;
    local_78 = local_54 * _DAT_005e65d0;
    local_74[0] = local_50 * _DAT_005e65d0;
    local_74[1] = local_4c * _DAT_005e65d0;
    local_90._0_4_ = local_54 * _DAT_005e65d0;
    *(float *)(local_84 + (uint)bVar8 * -8 + -8) = local_74[(uint)bVar8 * -2];
    actor_ptr = item;
    *(float *)(local_84 + (uint)bVar8 * -8 + (uint)bVar8 * -8 + -4) =
         local_74[(uint)bVar8 * -2 + (uint)bVar8 * -2 + 1];
    iVar3 = core_actor_cpp_FUN_0040c550(actor_ptr,class_name);
    if (iVar3 == 0) {
      local_3c._4_4_ = rotation_y;
      local_3c._0_4_ = 0.0;
      local_34 = 0.0;
    }
    else {
      iVar3 = (CBoxActor *)core_actor_cpp_castToClassHash_FUN_0040c600(item,g_CBoxActorClassInfo.name_hash);
      if ((float *)local_3c != (float *)(iVar3 + 0x66c)) {
        local_3c._0_4_ = *(float *)(iVar3 + 0x66c);
        local_3c._4_4_ = *(float *)(iVar3 + 0x670);
        local_34 = *(float *)(iVar3 + 0x674);
      }
    }
    iVar3 = core_actor_cpp_FUN_0040c550(item,"CKeyActor");
    if (iVar3 != 0) {
      local_3c._0_4_ = (float)local_3c._0_4_ + _DAT_005e65d4;
    }
    iVar3 = (CMelee *)core_actor_cpp_castToClassHash_FUN_0040c600(item,g_CMeleeClassInfo.name_hash);
    if (iVar3 != 0) {
      iVar4 = _stricmp((char *)(iVar3 + 0x1d0),"axe1.kfm");
      if (iVar4 == 0) {
        local_3c._0_4_ = (float)local_3c._0_4_ + _DAT_005e65d8;
        local_34 = local_34 + _DAT_005e65d8;
      }
      iVar3 = _stricmp((char *)(iVar3 + 0x1d0),"ax.kfm");
      if (iVar3 == 0) {
        local_3c._0_4_ = (float)local_3c._0_4_ + _DAT_005e65d8;
        local_34 = local_34 + _DAT_005e65d8;
      }
    }
    engine_drender_cpp_CDemonRenderer_applyScaledTransform_FUN_00483850
              (DAT_00612560,(CVector3f *)local_3c,(CVector3f *)0x0);
    engine_drender_cpp_CDemonRenderer_applyScaledTransform_FUN_00483850
              (DAT_00612560,(CVector3f *)&DAT_02c8af28,(CVector3f *)local_90);
    if (alpha < 65000) {
      engine_drender_cpp_CDemonRenderer_setRenderAlpha_FUN_00483de0(DAT_00612560,alpha);
      engine_drender_cpp_CDemonRenderer_setTextureCaptureMode_FUN_00484a40(DAT_00612560,1);
      core_dmodel_cpp_CKeyFramedModelInstance_prepareForRendering_FUN_004688a0(local_18,0.0,0x2e7);
      engine_drender_cpp_CDemonRenderer_processCapturedFaces_FUN_00484e00(DAT_00612560);
    }
    else {
      core_dmodel_cpp_CKeyFramedModelInstance_prepareForRendering_FUN_004688a0(local_18,0.0,-1);
    }
    engine_matrix_c_pop_FUN_004839a0();
    engine_matrix_c_pop_FUN_004839a0();
    engine_matrix_c_popViewport_FUN_00483c40();
    *(uint *)&g_CDemonSetPtr->field_0x15ae84 = 0;
  }
  return;
}
