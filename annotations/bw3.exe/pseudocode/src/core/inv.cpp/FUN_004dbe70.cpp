// Name: core_inv.cpp_FUN_004dbe70
// Address: 004dbe70
// Address Range: [[004dbe70, 004dc556]]
// Convention: unknown
// Signature: void core_inv_cpp_FUN_004dbe70(undefined4 param_1,CDemonActor *param_2,int param_3,int param_4,int param_5,float param_6,int param_7)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void core_inv_cpp_FUN_004dbe70(uint param_1,CDemonActor *param_2,int param_3,int param_4,int param_5,float param_6,int param_7)

{
  CDemonSet *pCVar1;
  int iVar2;
  int iVar3;
  CKeyFramedModel *pCVar4;
  uint *puVar5;
  uint *puVar6;
  byte bVar7;
  float afStackY_1078 [1004];
  CDemonActor *actor_ptr;
  char *class_name;
  float local_b4;
  float local_b0;
  float local_ac;
  float local_a8;
  float local_a4;
  float local_a0;
  byte local_9c [12];
  float local_90;
  float local_8c [4];
  float local_7c;
  float local_78;
  float local_74;
  float local_70;
  float local_6c;
  float local_68;
  float local_64;
  float local_60;
  float local_5c [4];
  float local_4c;
  float local_48;
  float local_44;
  float local_40;
  float local_3c;
  float local_38;
  float local_34;
  byte local_30 [4];
  float local_2c;
  float local_28;
  float local_1c;
  CKeyFramedModelInstance *local_18;
  float local_14;
  
  pCVar1 = g_CDemonSetPtr;
  bVar7 = 0;
  if (param_2 != (CDemonActor *)0x0) {
    if (0x280 < DAT_005fba18) {
      param_3 = (param_3 * 0x280) / DAT_005fba18;
      param_4 = (param_4 * 0x1e0) / DAT_005fba1c;
      param_5 = (param_5 * 0x280) / DAT_005fba18;
    }
    *(uint *)&g_CDemonSetPtr->field_0x15ae84 = 1;
    *(uint *)&pCVar1->field_0x15ae88 = 0xffffb7d5;
    *(uint *)&pCVar1->field_0x15ae8c = 0xffffb7d5;
    *(uint *)&pCVar1->field_0x15ae90 = 0x482b;
    *(uint *)&pCVar1->field_0x15ae94 = 32000;
    _DAT_01d70a38 =
         _DAT_01d70a38 +
         ((int)((_DAT_01c5fad0 + (_DAT_01c5fad0 >> 0x1f) * -4) -
               (uint)((_DAT_01c5fad0 >> 0x1f) << 1 < 0)) >> 2);
    iVar2 = engine_matrix_c_FUN_004e4d90(_DAT_01d70a38);
    iVar3 = engine_matrix_c_FUN_004e4dd0(_DAT_01d70a38);
    *(uint *)&g_CDemonSetPtr->field_0x15ae88 =
         (uint)((longlong)iVar2 * 0x482b) >> 0x10 |
         (int)((ulonglong)((longlong)iVar2 * 0x482b) >> 0x20) << 0x10;
    *(uint *)&g_CDemonSetPtr->field_0x15ae90 =
         (uint)((longlong)iVar3 * 0x482b) >> 0x10 |
         (int)((ulonglong)((longlong)iVar3 * 0x482b) >> 0x20) << 0x10;
    engine_matrix_c_FUN_0046d2f0(DAT_005f2afc,param_3,param_4,param_5,param_5);
    local_18 = (CKeyFramedModelInstance *)core_inv_cpp_FUN_004d9d20(param_2);
    pCVar4 = core_dmodel_cpp_CKeyFramedModelInstance_getModelPtr_FUN_004625a0(local_18);
    puVar5 = *(uint **)&pCVar4->field_0x350;
    puVar6 = &stack0xffffff4c;
    for (iVar2 = 6; iVar2 != 0; iVar2 = iVar2 + -1) {
      *puVar6 = *puVar5;
      puVar5 = puVar5 + (uint)bVar7 * -2 + 1;
      puVar6 = puVar6 + (uint)bVar7 * -2 + 1;
    }
    local_3c = local_a8 - local_b4;
    local_38 = local_a4 - local_b0;
    local_34 = local_a0 - local_ac;
    local_8c[2] = local_a8 - local_b4;
    local_8c[(uint)bVar7 * -2 + 3] = local_5c[(uint)bVar7 * -2 + 9];
    local_8c[(uint)bVar7 * -2 + (uint)bVar7 * -2 + 4] =
         local_5c[(uint)bVar7 * -2 + (uint)bVar7 * -2 + 10];
    local_48 = local_8c[2] * _DAT_005c63a7;
    local_44 = local_8c[3] * _DAT_005c63a7;
    local_40 = local_7c * _DAT_005c63a7;
    local_90 = local_8c[2] * _DAT_005c63a7;
    local_8c[(uint)bVar7 * -2] = local_5c[(uint)bVar7 * -2 + 6];
    local_8c[(uint)bVar7 * -2 + (uint)bVar7 * -2 + 1] =
         local_5c[(uint)bVar7 * -2 + (uint)bVar7 * -2 + 7];
    if (((local_90 <= local_8c[0]) || (local_14 = local_90, local_90 <= local_8c[1])) &&
       (local_14 = local_8c[1], local_8c[1] < local_8c[0])) {
      local_14 = local_8c[0];
    }
    iVar2 = core_actor_cpp_FUN_0040c790(param_2,"CLightstaff");
    if ((iVar2 != 0) ||
       (iVar2 = core_actor_cpp_FUN_0040c790(param_2,"CFirestaff"), iVar2 != 0)) {
      local_14 = local_14 * (float)_DAT_005c63af;
    }
    iVar2 = core_actor_cpp_FUN_0040c790(param_2,&DAT_005c62e2);
    if (((iVar2 != 0) ||
        (iVar2 = core_actor_cpp_FUN_0040c790(param_2,"CKeyActor"), iVar2 != 0)) ||
       ((iVar2 = core_actor_cpp_FUN_0040c790(param_2,"CExorcism"), iVar2 != 0 ||
        ((iVar2 = core_actor_cpp_FUN_0040c790(param_2,&DAT_005c62fb), iVar2 != 0 ||
         (iVar2 = core_actor_cpp_FUN_0040c790(param_2,"CBindEvil"), iVar2 != 0)))))) {
      local_14 = local_14 * (float)_DAT_005c63b7;
    }
    local_9c._8_4_ = -local_14 * (float)_DAT_005c63b7;
    local_9c._0_4_ = 0;
    local_9c._4_4_ = 0;
    local_1c = (float)local_9c._8_4_;
    engine_drender_cpp_FUN_0046cb90(DAT_005f2afc,(CVector3f *)local_9c);
    engine_matrix_c_FUN_0046d090(DAT_005f2afc,0x42100000);
    engine_drender_cpp_CDemonRenderer_setupSceneRendering_FUN_0046cc10
              (DAT_005f2afc,(CVector3f *)&DAT_02cfd900);
    engine_drender_cpp_CDemonRenderer_processCameraRelativeVertex_FUN_0046ce90
              (DAT_005f2afc,(CVector3f *)&DAT_02cfd900);
    local_78 = local_b4 + local_a8;
    local_74 = local_b0 + local_a4;
    local_70 = local_ac + local_a0;
    local_5c[2] = local_b4 + local_a8;
    local_5c[(uint)bVar7 * -2 + 3] = local_8c[(uint)bVar7 * -2 + 6];
    local_5c[(uint)bVar7 * -2 + (uint)bVar7 * -2 + 4] =
         local_8c[(uint)bVar7 * -2 + (uint)bVar7 * -2 + 7];
    class_name = "CLightstaff";
    _DAT_01c6e24c = 0;
    local_6c = local_5c[2] * _DAT_005c63bf;
    local_68 = local_5c[3] * _DAT_005c63bf;
    local_64 = local_4c * _DAT_005c63bf;
    local_60 = local_5c[2] * _DAT_005c63bf;
    local_5c[(uint)bVar7 * -2] = local_8c[(uint)bVar7 * -2 + 9];
    actor_ptr = param_2;
    local_5c[(uint)bVar7 * -2 + (uint)bVar7 * -2 + 1] =
         local_8c[(uint)bVar7 * -2 + (uint)bVar7 * -2 + 10];
    iVar2 = core_actor_cpp_FUN_0040c790(actor_ptr,class_name);
    if ((iVar2 != 0) ||
       (iVar2 = core_actor_cpp_FUN_0040c790(param_2,"CFirestaff"), iVar2 != 0)) {
      local_5c[0] = local_5c[0] - local_a4 * _DAT_005c63a7;
    }
    iVar2 = core_actor_cpp_FUN_0040c790(param_2,"CBurncross");
    if (((((iVar2 != 0) ||
          (iVar2 = core_actor_cpp_FUN_0040c790(param_2,"CFirestaff"), iVar2 != 0)) ||
         (iVar2 = core_actor_cpp_FUN_0040c790(param_2,"CHeal"), iVar2 != 0)) ||
        ((iVar2 = core_actor_cpp_FUN_0040c790(param_2,"CExorcism"), iVar2 != 0 ||
         (iVar2 = core_actor_cpp_FUN_0040c790(param_2,"CHolycross"), iVar2 != 0)))) ||
       ((iVar2 = core_actor_cpp_FUN_0040c790(param_2,"CLightstaff"), iVar2 != 0 ||
        (iVar2 = core_actor_cpp_FUN_0040c790(param_2,&DAT_005c635e), iVar2 != 0)))) {
      param_6 = 0.0;
    }
    iVar2 = core_actor_cpp_FUN_0040c790(param_2,"CBoxActor");
    if (iVar2 == 0) {
      local_2c = param_6;
      local_30 = (byte  [4])0x0;
      local_28 = 0.0;
    }
    else {
      iVar2 = (CBoxActor *)core_actor_cpp_castToClassHash_FUN_0040c840(param_2,g_CBoxActorClassInfo.name_hash);
      iVar3 = _strcmp((char *)(iVar2 + 0x1d0),"journal.kfm");
      if (iVar3 == 0) {
        local_30 = (byte  [4])((float)local_30 + _DAT_005c63c3);
        local_2c = local_2c + _DAT_005c63c7;
        local_28 = local_28 + _DAT_005c63c7;
      }
      else if ((float *)local_30 != (float *)(iVar2 + 0x6d0)) {
        local_30 = *(byte (*) [4])(iVar2 + 0x6d0);
        local_2c = *(float *)(iVar2 + 0x6d4);
        local_28 = *(float *)(iVar2 + 0x6d8);
      }
    }
    iVar2 = core_actor_cpp_FUN_0040c790(param_2,"CBindEvil");
    if (iVar2 != 0) {
      local_30 = (byte  [4])((float)local_30 + _DAT_005c63cb);
      local_2c = 0.3926991;
    }
    iVar2 = core_actor_cpp_FUN_0040c790(param_2,"CExorcism");
    if (iVar2 != 0) {
      local_30 = (byte  [4])((float)local_30 + _DAT_005c63c7);
    }
    iVar2 = core_actor_cpp_FUN_0040c790(param_2,"CKeyActor");
    if (iVar2 != 0) {
      local_30 = (byte  [4])((float)local_30 + _DAT_005c63c3);
    }
    iVar2 = (CMelee *)core_actor_cpp_castToClassHash_FUN_0040c840(param_2,g_CMeleeClassInfo.name_hash);
    if (iVar2 != 0) {
      iVar3 = _stricmp((char *)(iVar2 + 0x1d0),"axe1.kfm");
      if (iVar3 == 0) {
        local_30 = (byte  [4])((float)local_30 + _DAT_005c63cf);
        local_28 = local_28 + _DAT_005c63cf;
      }
      iVar2 = _stricmp((char *)(iVar2 + 0x1d0),"ax.kfm");
      if (iVar2 == 0) {
        local_30 = (byte  [4])((float)local_30 + _DAT_005c63cf);
        local_28 = local_28 + _DAT_005c63cf;
      }
    }
    engine_drender_cpp_CDemonRenderer_applyScaledTransform_FUN_0046cf30
              (DAT_005f2afc,(CVector3f *)local_30,(CVector3f *)0x0);
    engine_drender_cpp_CDemonRenderer_applyScaledTransform_FUN_0046cf30
              (DAT_005f2afc,(CVector3f *)&DAT_02cfd900,(CVector3f *)&local_60);
    if (param_7 < 65000) {
      engine_drender_cpp_CDemonRenderer_setRenderAlpha_FUN_0046d4c0(DAT_005f2afc,param_7);
      engine_drender_cpp_CDemonRenderer_setTextureCaptureMode_FUN_0046e120(DAT_005f2afc,1);
      core_dmodel_cpp_CKeyFramedModelInstance_prepareForRendering_FUN_00462540(local_18,0.0,0x2e7);
      engine_drender_cpp_CDemonRenderer_processCapturedFaces_FUN_0046e4e0(DAT_005f2afc);
    }
    else {
      core_dmodel_cpp_CKeyFramedModelInstance_prepareForRendering_FUN_00462540(local_18,0.0,-1);
    }
    engine_matrix_c_pop_FUN_0046d080();
    engine_matrix_c_pop_FUN_0046d080();
    engine_matrix_c_popViewport_FUN_0046d320();
    *(uint *)&g_CDemonSetPtr->field_0x15ae84 = 0;
  }
  return;
}
