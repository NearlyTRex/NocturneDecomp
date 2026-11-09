// Name: core_inv.cpp_FUN_004dbd80
// Address: 004dbd80
// Address Range: [[004dbd80, 004dc2b3]]
// Convention: __cdecl
// Signature: void __cdecl core_inv_cpp_FUN_004dbd80(CInventory *this_ptr,CDemonActor *item,int viewport_x,int viewport_y,int viewport_size,float rotation_y,int alpha)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl core_inv_cpp_FUN_004dbd80(CInventory *this_ptr,CDemonActor *item,int viewport_x,int viewport_y,int viewport_size,float rotation_y,int alpha)

{
  CDemonSet *pCVar1;
  int iVar2;
  int iVar3;
  CKeyFramedModel *pCVar4;
  uint *puVar5;
  uint *puVar6;
  byte bVar7;
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
  byte local_54 [12];
  byte local_48 [4];
  float local_44;
  float local_40;
  float local_3c;
  float afStack_38 [4];
  float local_28;
  CKeyFramedModelInstance *local_1c;
  float local_18;
  float local_14;
  
  pCVar1 = g_CDemonSetPtr;
  bVar7 = 0;
  if (item != (CDemonActor *)0x0) {
    if (0x280 < DAT_006141b8) {
      viewport_x = (viewport_x * 0x280) / DAT_006141b8;
      viewport_y = (viewport_y * 0x1e0) / DAT_006141bc;
      viewport_size = (viewport_size * 0x280) / DAT_006141b8;
    }
    *(uint *)&g_CDemonSetPtr->field_0x15ae84 = 1;
    *(uint *)&pCVar1->field_0x15ae88 = 0xffffb7d5;
    *(uint *)&pCVar1->field_0x15ae8c = 0xffffb7d5;
    *(uint *)&pCVar1->field_0x15ae90 = 0x482b;
    *(uint *)&pCVar1->field_0x15ae94 = 32000;
    _DAT_01d02f44 =
         _DAT_01d02f44 +
         ((int)((_DAT_01c2a370 + (_DAT_01c2a370 >> 0x1f) * -4) -
               (uint)((_DAT_01c2a370 >> 0x1f) << 1 < 0)) >> 2);
    iVar2 = engine_matrix_c_FUN_004e86b0(_DAT_01d02f44);
    iVar3 = engine_matrix_c_FUN_004e86f0(_DAT_01d02f44);
    *(uint *)&g_CDemonSetPtr->field_0x15ae88 =
         (uint)((longlong)iVar2 * 0x482b) >> 0x10 |
         (int)((ulonglong)((longlong)iVar2 * 0x482b) >> 0x20) << 0x10;
    *(uint *)&g_CDemonSetPtr->field_0x15ae90 =
         (uint)((longlong)iVar3 * 0x482b) >> 0x10 |
         (int)((ulonglong)((longlong)iVar3 * 0x482b) >> 0x20) << 0x10;
    engine_matrix_c_FUN_0046b710(DAT_0060b280,viewport_x,viewport_y,viewport_size,viewport_size);
    local_1c = (CKeyFramedModelInstance *)core_inv_cpp_FUN_004d9db0(item);
    pCVar4 = core_dmodel_cpp_CKeyFramedModelInstance_getModelPtr_FUN_0044fd20(local_1c);
    puVar5 = *(uint **)&pCVar4->field_0x350;
    puVar6 = &stack0xffffff4c;
    for (iVar2 = 6; iVar2 != 0; iVar2 = iVar2 + -1) {
      *puVar6 = *puVar5;
      puVar5 = puVar5 + (uint)bVar7 * -2 + 1;
      puVar6 = puVar6 + (uint)bVar7 * -2 + 1;
    }
    local_9c = local_a8 - local_b4;
    local_98 = local_a4 - local_b0;
    local_94 = local_a0 - local_ac;
    local_6c = local_a8 - local_b4;
    *(uint *)((int)&stack0xffffff98 + (uint)bVar7 * -8) =
         *(uint *)((int)&stack0xffffff68 + (uint)bVar7 * -8);
    *(uint *)((int)&stack0xffffff9c + (uint)bVar7 * -8 + (uint)bVar7 * -8) =
         *(uint *)((int)&stack0xffffff6c + (uint)bVar7 * -8 + (uint)bVar7 * -8);
    local_78 = local_6c * _DAT_005db79a;
    local_74 = local_68 * _DAT_005db79a;
    local_70 = local_64 * _DAT_005db79a;
    local_84 = local_6c * _DAT_005db79a;
    *(uint *)((int)&stack0xffffff80 + (uint)bVar7 * -8) =
         *(uint *)((int)&stack0xffffff8c + (uint)bVar7 * -8);
    *(uint *)((int)&stack0xffffff84 + (uint)bVar7 * -8 + (uint)bVar7 * -8) =
         *(uint *)((int)&stack0xffffff90 + (uint)bVar7 * -8 + (uint)bVar7 * -8);
    if (((local_84 <= local_80) || (local_14 = local_84, local_84 <= local_7c)) &&
       (local_14 = local_7c, local_7c < local_80)) {
      local_14 = local_80;
    }
    iVar2 = core_actor_cpp_FUN_0040c840(item,&DAT_005db750);
    if ((iVar2 != 0) || (iVar2 = core_actor_cpp_FUN_0040c840(item,"CKeyActor"), iVar2 != 0)
       ) {
      local_14 = local_14 * (float)_DAT_005db7a2;
    }
    local_54._8_4_ = -local_14 * (float)_DAT_005db7a2;
    local_54._0_4_ = 0;
    local_54._4_4_ = 0;
    local_18 = (float)local_54._8_4_;
    engine_drender_cpp_FUN_0046afb0(DAT_0060b280,(CVector3f *)local_54);
    engine_matrix_c_FUN_0046b4b0(DAT_0060b280,0x42100000);
    engine_drender_cpp_CDemonRenderer_setupSceneRendering_FUN_0046b030
              (DAT_0060b280,(CVector3f *)&DAT_0265370c);
    engine_drender_cpp_CDemonRenderer_processCameraRelativeVertex_FUN_0046b2b0
              (DAT_0060b280,(CVector3f *)&DAT_0265370c);
    local_60 = local_b4 + local_a8;
    local_5c = local_b0 + local_a4;
    local_58 = local_ac + local_a0;
    local_90 = local_b4 + local_a8;
    *(uint *)((int)&stack0xffffff74 + (uint)bVar7 * -8) =
         *(uint *)((int)&stack0xffffffa4 + (uint)bVar7 * -8);
    *(uint *)((int)&stack0xffffff78 + (uint)bVar7 * -8 + (uint)bVar7 * -8) =
         *(uint *)((int)&stack0xffffffa8 + (uint)bVar7 * -8 + (uint)bVar7 * -8);
    class_name = "CBoxActor";
    _DAT_01c38aec = 0;
    afStack_38[2] = local_90 * _DAT_005db7aa;
    afStack_38[3] = local_8c * _DAT_005db7aa;
    local_28 = local_88 * _DAT_005db7aa;
    local_3c = local_90 * _DAT_005db7aa;
    afStack_38[(uint)bVar7 * -2] = afStack_38[(uint)bVar7 * -2 + 3];
    actor_ptr = item;
    afStack_38[(uint)bVar7 * -2 + (uint)bVar7 * -2 + 1] =
         afStack_38[(uint)bVar7 * -2 + (uint)bVar7 * -2 + 4];
    iVar2 = core_actor_cpp_FUN_0040c840(actor_ptr,class_name);
    if (iVar2 == 0) {
      local_44 = rotation_y;
      local_48 = (byte  [4])0x0;
      local_40 = 0.0;
    }
    else {
      iVar2 = (CBoxActor *)core_actor_cpp_castToClassHash_FUN_0040c8f0(item,g_CBoxActorClassInfo.name_hash);
      if ((float *)local_48 != (float *)(iVar2 + 0x7c8)) {
        local_48 = *(byte (*) [4])(iVar2 + 0x7c8);
        local_44 = *(float *)(iVar2 + 0x7cc);
        local_40 = *(float *)(iVar2 + 2000);
      }
    }
    iVar2 = core_actor_cpp_FUN_0040c840(item,"CKeyActor");
    if (iVar2 != 0) {
      local_48 = (byte  [4])((float)local_48 + _DAT_005db7ae);
    }
    iVar2 = (CMelee *)core_actor_cpp_castToClassHash_FUN_0040c8f0(item,g_CMeleeClassInfo.name_hash);
    if (iVar2 != 0) {
      iVar3 = _stricmp((char *)(iVar2 + 0x32c),"axe1.kfm");
      if (iVar3 == 0) {
        local_48 = (byte  [4])((float)local_48 + _DAT_005db7b6);
        local_40 = local_40 + _DAT_005db7b2;
      }
      iVar3 = _stricmp((char *)(iVar2 + 0x32c),"ax2.kfm");
      if (iVar3 == 0) {
        local_48 = (byte  [4])((float)local_48 + _DAT_005db7ba);
        local_40 = local_40 + _DAT_005db7b6;
      }
      iVar3 = _stricmp((char *)(iVar2 + 0x32c),"melee.kfm");
      if (iVar3 == 0) {
        local_48 = (byte  [4])((float)local_48 + _DAT_005db7ba);
        local_40 = local_40 + _DAT_005db7b2;
      }
      iVar2 = _stricmp((char *)(iVar2 + 0x32c),"cross1.kfm");
      if (iVar2 == 0) {
        local_44 = 3.1415927;
      }
    }
    engine_drender_cpp_CDemonRenderer_applyScaledTransform_FUN_0046b350
              (DAT_0060b280,(CVector3f *)local_48,(CVector3f *)0x0);
    engine_drender_cpp_CDemonRenderer_applyScaledTransform_FUN_0046b350
              (DAT_0060b280,(CVector3f *)&DAT_0265370c,(CVector3f *)&local_3c);
    if (alpha < 65000) {
      engine_drender_cpp_CDemonRenderer_setRenderAlpha_FUN_0046b8e0(DAT_0060b280,alpha);
      engine_drender_cpp_CDemonRenderer_setTextureCaptureMode_FUN_0046c540(DAT_0060b280,1);
      core_dmodel_cpp_CKeyFramedModelInstance_prepareForRendering_FUN_0044fcc0(local_1c,0.0,0x2e7);
      engine_drender_cpp_CDemonRenderer_processCapturedFaces_FUN_0046c900(DAT_0060b280);
    }
    else {
      core_dmodel_cpp_CKeyFramedModelInstance_prepareForRendering_FUN_0044fcc0(local_1c,0.0,-1);
    }
    engine_matrix_c_pop_FUN_0046b4a0();
    engine_matrix_c_pop_FUN_0046b4a0();
    engine_matrix_c_popViewport_FUN_0046b740();
    *(uint *)&g_CDemonSetPtr->field_0x15ae84 = 0;
  }
  return;
}
