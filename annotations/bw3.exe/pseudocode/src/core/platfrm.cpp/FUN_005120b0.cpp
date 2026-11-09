// Name: core_platfrm.cpp_FUN_005120b0
// Address: 005120b0
// Address Range: [[005120b0, 005121fc]]
// Convention: unknown
// Signature: int core_platfrm_cpp_FUN_005120b0(CDemonActor *param_1)

#include "nocturne.h"

int core_platfrm_cpp_FUN_005120b0(CDemonActor *param_1)

{
  int iVar1;
  int iVar2;
  uint *puVar3;
  uint *puVar4;
  CBoundingBox3D *pCVar5;
  byte bVar6;
  uint auStack_70 [6];
  uint auStack_58 [6];
  uint auStack_40 [6];
  CBoundingBox3D CStack_28;
  
  bVar6 = 0;
  iVar1 = engine_drender_cpp_CDemonRenderer_isShadowPass_FUN_0046d540(DAT_005f2afc);
  if ((iVar1 == 0) || (*(int *)&param_1[3].field_0x110 != 0)) {
    if ((2 < *(int *)&param_1[3].field_0xb8) &&
       (iVar1 = engine_drender_cpp_CDemonRenderer_isShadowPass_FUN_0046d540(DAT_005f2afc),
       iVar1 == 0)) {
      return 0;
    }
    if ((((*(int *)&param_1[3].field_0xc0 != 0) && (*(int *)&param_1[2].field_0x24 != 3)) &&
        (*(int *)&param_1[2].field_0x24 != 4)) &&
       ((*(int *)&param_1[5].field_0x6c != 0 &&
        (iVar1 = engine_drender_cpp_CDemonRenderer_isShadowPass_FUN_0046d540(DAT_005f2afc),
        iVar1 == 0)))) {
      return 0;
    }
    core_actor_cpp_CDemonActor_setupRenderState_FUN_004087f0(param_1);
    (**(code **)(*(int *)&param_1->field_0x154 + 0x1c))(param_1,0);
    puVar3 = auStack_70;
    puVar4 = auStack_58;
    for (iVar1 = 6; iVar1 != 0; iVar1 = iVar1 + -1) {
      *puVar4 = *puVar3;
      puVar3 = puVar3 + (uint)bVar6 * -2 + 1;
      puVar4 = puVar4 + (uint)bVar6 * -2 + 1;
    }
    iVar1 = core_box_cpp_FUN_0041daf0(auStack_58);
    if (iVar1 != 0) {
      if ((*(int *)&param_1[3].field_0x104 == 0) ||
         (iVar2 = engine_drender_cpp_CDemonRenderer_isShadowPass_FUN_0046d540(DAT_005f2afc),
         iVar2 == 0)) {
        core_dmodel_cpp_CKeyFramedModelInstance_prepareForRendering_FUN_00462540
                  ((CKeyFramedModelInstance *)(param_1 + 1),0.0,-1);
        core_actor_cpp_CDemonActor_restoreRenderState_FUN_00408830(param_1);
        return iVar1;
      }
      (**(code **)(*(int *)&param_1->field_0x154 + 0x1c))(param_1);
      puVar3 = auStack_40;
      pCVar5 = &CStack_28;
      for (iVar2 = 6; iVar2 != 0; iVar2 = iVar2 + -1) {
        *(uint *)pCVar5 = *puVar3;
        puVar3 = puVar3 + (uint)bVar6 * -2 + 1;
        pCVar5 = (CBoundingBox3D *)((int)pCVar5 + ((uint)bVar6 * -2 + 1) * 4);
      }
      core_box_cpp_FUN_0041e9b0(&CStack_28);
    }
    core_actor_cpp_CDemonActor_restoreRenderState_FUN_00408830(param_1);
  }
  else {
    iVar1 = 0;
  }
  return iVar1;
}
