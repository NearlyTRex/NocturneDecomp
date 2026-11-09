// Name: core_platfrm.cpp_FUN_00519080
// Address: 00519080
// Address Range: [[00519080, 005191cc]]
// Convention: unknown
// Signature: int core_platfrm_cpp_FUN_00519080(CDemonActor *param_1)

#include "nocturne.h"

int core_platfrm_cpp_FUN_00519080(CDemonActor *param_1)

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
  iVar1 = engine_drender_cpp_CDemonRenderer_isShadowPass_FUN_0046b960(DAT_0060b280);
  if ((iVar1 == 0) || (*(int *)&param_1[2].field_0x10c != 0)) {
    if ((2 < *(int *)&param_1[2].field_0xb4) &&
       (iVar1 = engine_drender_cpp_CDemonRenderer_isShadowPass_FUN_0046b960(DAT_0060b280),
       iVar1 == 0)) {
      return 0;
    }
    if ((((*(int *)&param_1[2].field_0xbc != 0) && (*(int *)&param_1[1].field_0x17c != 3)) &&
        (*(int *)&param_1[1].field_0x17c != 4)) &&
       ((*(int *)&param_1[3].field_0x64 != 0 &&
        (iVar1 = engine_drender_cpp_CDemonRenderer_isShadowPass_FUN_0046b960(DAT_0060b280),
        iVar1 == 0)))) {
      return 0;
    }
    core_actor_cpp_CDemonActor_setupRenderState_FUN_004089d0(param_1);
    (**(code **)(*(int *)&param_1->field_0x2b0 + 0x24))(param_1,0);
    puVar3 = auStack_70;
    puVar4 = auStack_58;
    for (iVar1 = 6; iVar1 != 0; iVar1 = iVar1 + -1) {
      *puVar4 = *puVar3;
      puVar3 = puVar3 + (uint)bVar6 * -2 + 1;
      puVar4 = puVar4 + (uint)bVar6 * -2 + 1;
    }
    iVar1 = core_box_cpp_FUN_0041a840(auStack_58);
    if (iVar1 != 0) {
      if ((*(int *)&param_1[2].field_0x100 == 0) ||
         (iVar2 = engine_drender_cpp_CDemonRenderer_isShadowPass_FUN_0046b960(DAT_0060b280),
         iVar2 == 0)) {
        core_dmodel_cpp_CKeyFramedModelInstance_prepareForRendering_FUN_0044fcc0
                  ((CKeyFramedModelInstance *)(param_1 + 1),0.0,-1);
        core_actor_cpp_CDemonActor_restoreRenderState_FUN_00408a10(param_1);
        return iVar1;
      }
      (**(code **)(*(int *)&param_1->field_0x2b0 + 0x24))(param_1);
      puVar3 = auStack_40;
      pCVar5 = &CStack_28;
      for (iVar2 = 6; iVar2 != 0; iVar2 = iVar2 + -1) {
        *(uint *)pCVar5 = *puVar3;
        puVar3 = puVar3 + (uint)bVar6 * -2 + 1;
        pCVar5 = (CBoundingBox3D *)((int)pCVar5 + ((uint)bVar6 * -2 + 1) * 4);
      }
      core_box_cpp_CBoundingBox3D_render_FUN_0041b700(&CStack_28);
    }
    core_actor_cpp_CDemonActor_restoreRenderState_FUN_00408a10(param_1);
  }
  else {
    iVar1 = 0;
  }
  return iVar1;
}
