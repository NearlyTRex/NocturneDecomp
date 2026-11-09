// Name: core_vehicle.cpp_FUN_00584a40
// Address: 00584a40
// Address Range: [[00584a40, 00584d6d]]
// Convention: unknown
// Signature: int core_vehicle_cpp_FUN_00584a40(CDemonActor *param_1)

#include "nocturne.h"

int core_vehicle_cpp_FUN_00584a40(CDemonActor *param_1)

{
  int iVar1;
  CKeyFramedModelInstance *this_ptr;
  CVector3f *pCVar2;
  uint *puVar3;
  uint *puVar4;
  CBoundingBox3D *pCVar5;
  CVector3f *pCVar6;
  byte bVar7;
  uint auStackY_1048 [990];
  float fov;
  float falloff;
  CBoundingBox3D CStack_a8;
  uint auStack_90 [6];
  uint auStack_78 [6];
  CVector3f CStack_60;
  CVector3f CStack_54;
  uint uStack_48;
  uint uStack_44;
  uint uStack_40;
  CVector3f CStack_3c;
  uint uStack_30;
  uint uStack_2c;
  uint uStack_28;
  CVector3f CStack_24;
  int iStack_18;
  CVector3f *pCStack_14;
  
  bVar7 = 0;
  core_actor_cpp_CDemonActor_setupRenderState_FUN_004089d0(param_1);
  (**(code **)(*(int *)&param_1->field_0x2b0 + 0x24))(param_1,0);
  puVar3 = auStack_90;
  puVar4 = (uint *)&stack0xffffff40;
  for (iVar1 = 6; iVar1 != 0; iVar1 = iVar1 + -1) {
    *puVar4 = *puVar3;
    puVar3 = puVar3 + (uint)bVar7 * -2 + 1;
    puVar4 = puVar4 + (uint)bVar7 * -2 + 1;
  }
  iStack_18 = core_box_cpp_FUN_0041a840(&stack0xffffff40);
  *(int *)&param_1[6].field_0x190 = iStack_18;
  if (iStack_18 != 0) {
    iVar1 = engine_drender_cpp_CDemonRenderer_isShadowPass_FUN_0046b960(DAT_0060b280);
    if ((iVar1 == 0) || (*(int *)&g_CGamePtr->field_0x25c != 0)) {
      core_dmodel_cpp_CKeyFramedModelInstance_prepareForRendering_FUN_0044fcc0
                ((CKeyFramedModelInstance *)(param_1 + 1),0.0,-1);
      iVar1 = 0;
      if (0 < *(int *)&param_1[3].field_0x278) {
        this_ptr = (CKeyFramedModelInstance *)&param_1[3].field_0x290;
        pCVar2 = (CVector3f *)&param_1[4].field_0x158;
        pCStack_14 = (CVector3f *)&param_1[4].field_0x170;
        pCVar6 = (CVector3f *)&param_1[4].field_0x164;
        do {
          engine_drender_cpp_CDemonRenderer_applyScaledTransform_FUN_0046b350
                    (DAT_0060b280,pCStack_14,pCVar6);
          engine_drender_cpp_CDemonRenderer_applyScaledTransform_FUN_0046b350
                    (DAT_0060b280,pCVar2,(CVector3f *)0x0);
          core_dmodel_cpp_CKeyFramedModelInstance_prepareForRendering_FUN_0044fcc0(this_ptr,0.0,-1);
          engine_matrix_c_pop_FUN_0046b4a0();
          iVar1 = iVar1 + 1;
          pCVar6 = (CVector3f *)&pCVar6[0x24].field_0x4;
          engine_matrix_c_pop_FUN_0046b4a0();
          pCVar2 = (CVector3f *)&pCVar2[0x24].field_0x4;
          this_ptr = (CKeyFramedModelInstance *)&this_ptr[1].field_0x38;
          pCStack_14 = (CVector3f *)&pCStack_14[0x24].field_0x4;
        } while (iVar1 < *(int *)&param_1[3].field_0x278);
      }
    }
    else {
      (**(code **)(*(int *)&param_1->field_0x2b0 + 0x24))(param_1);
      puVar3 = auStack_78;
      pCVar5 = &CStack_a8;
      for (iVar1 = 6; iVar1 != 0; iVar1 = iVar1 + -1) {
        *(uint *)pCVar5 = *puVar3;
        puVar3 = puVar3 + (uint)bVar7 * -2 + 1;
        pCVar5 = (CBoundingBox3D *)((int)pCVar5 + ((uint)bVar7 * -2 + 1) * 4);
      }
      core_box_cpp_CBoundingBox3D_render_FUN_0041b700(&CStack_a8);
    }
  }
  core_actor_cpp_CDemonActor_restoreRenderState_FUN_00408a10(param_1);
  if ((*(int *)&param_1[6].field_0x190 != 0) &&
     (iVar1 = engine_drender_cpp_CDemonRenderer_isShadowPass_FUN_0046b960(DAT_0060b280), iVar1 == 0)
     ) {
    uStack_40 = 0x40c00000;
    uStack_28 = 0x40c00000;
    uStack_48 = 0x3f91eb85;
    uStack_44 = 0xbe27ef9e;
    uStack_30 = 0xbf91eb85;
    uStack_2c = 0xbe27ef9e;
    core_actor_cpp_FUN_00408d70(param_1,&uStack_48);
    falloff = 10.0;
    fov = 56.0;
    pCVar6 = (CVector3f *)&param_1->field_0x30;
    pCVar2 = &CStack_3c;
    CStack_3c._0_4_ = CStack_24._0_4_;
    *(uint *)((int)&CStack_3c + (uint)bVar7 * -8 + 4) =
         *(uint *)((int)&CStack_24 + (uint)bVar7 * -8 + 4);
    *(uint *)((int)&CStack_3c + (uint)bVar7 * -8 + (uint)bVar7 * -8 + 8) =
         *(uint *)((int)&CStack_24 + (uint)bVar7 * -8 + (uint)bVar7 * -8 + 8);
    core_dlight_cpp_FUN_0044d060(pCVar2,pCVar6,fov,falloff);
    core_actor_cpp_FUN_00408d70(param_1,&uStack_30);
    CStack_60._0_4_ = CStack_54._0_4_;
    *(uint *)((int)&CStack_60 + (uint)bVar7 * -8 + 4) =
         *(uint *)((int)&CStack_54 + (uint)bVar7 * -8 + 4);
    *(uint *)((int)&CStack_60 + (uint)bVar7 * -8 + (uint)bVar7 * -8 + 8) =
         *(uint *)((int)&CStack_54 + (uint)bVar7 * -8 + (uint)bVar7 * -8 + 8);
    if (&CStack_3c != &CStack_60) {
      CStack_3c._0_4_ = CStack_60._0_4_;
      CStack_3c._4_4_ = CStack_60._4_4_;
      CStack_3c._8_4_ = CStack_60._8_4_;
    }
    core_dlight_cpp_FUN_0044d060(&CStack_3c,(CVector3f *)&param_1->field_0x30,56.0,10.0);
    return iStack_18;
  }
  return iStack_18;
}
