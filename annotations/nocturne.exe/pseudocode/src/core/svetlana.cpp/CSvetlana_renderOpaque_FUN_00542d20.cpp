// Name: core_svetlana.cpp_CSvetlana_renderOpaque_FUN_00542d20
// Address: 00542d20
// Address Range: [[00542d20, 00542e83]]
// Convention: unknown
// Signature: int core_svetlana_cpp_CSvetlana_renderOpaque_FUN_00542d20(CCharacter *param_1)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int core_svetlana_cpp_CSvetlana_renderOpaque_FUN_00542d20(CCharacter *param_1)

{
  int *piVar1;
  CDeformableModelInstance *pCVar2;
  CDemonRenderer *this_ptr;
  int iVar3;
  int iVar4;
  CCharacter *pCVar5;
  int local_84 [30];
  CCharacter *pCVar6;
  
  g_CDemonSet_PTR_005be368->skip_normal_normalization = 1;
  iVar4 = 0;
  pCVar5 = param_1;
  do {
    iVar3 = iVar4 + 1;
    pCVar2 = &pCVar5->model;
    pCVar5 = (CCharacter *)((pCVar5->base).actor_name + 4);
    local_84[iVar4] = (pCVar2->part_data).visibility_flags[0];
    iVar4 = iVar3;
  } while (iVar3 < 0x1e);
  iVar4 = core_charactr_cpp_CCharacter_renderOpaque_FUN_00426440(param_1);
  iVar3 = engine_drender_cpp_CDemonRenderer_getFaceCount_FUN_00461090(DAT_005ae704);
  if ((iVar3 == 0) && (_DAT_01c038f4 < 0x4000)) {
    pCVar5 = param_1;
    do {
      pCVar6 = (CCharacter *)((pCVar5->base).actor_name + 4);
      (pCVar5->model).part_data.visibility_flags[0] = 0;
      pCVar5 = pCVar6;
    } while (pCVar6 != (CCharacter *)(param_1->base).create_event);
    (param_1->model).part_data.visibility_flags[param_1[0xc].flames[0x1a].texture_flip] = 1;
    this_ptr = DAT_005ae704;
    (param_1->model).part_data.visibility_flags[param_1[0xc].flames[0x1a].do_visibility_check] = 1;
    iVar3 = g_CGame_PTR_005b9354->render_mode;
    g_CGame_PTR_005b9354->render_mode = 2;
    engine_drender_cpp_CDemonRenderer_setBlendMode_FUN_00461000(this_ptr,0);
    engine_drender_cpp_CDemonRenderer_setRenderAlpha_FUN_00461010(DAT_005ae704,48000);
    if (iVar4 != 0) {
      core_charactr_cpp_CCharacter_renderOpaque_FUN_00426440(param_1);
    }
    g_CGame_PTR_005b9354->render_mode = iVar3;
    iVar3 = 0;
    pCVar5 = param_1;
    do {
      piVar1 = local_84 + iVar3;
      iVar3 = iVar3 + 1;
      (pCVar5->model).part_data.visibility_flags[0] = *piVar1;
      pCVar5 = (CCharacter *)((pCVar5->base).actor_name + 4);
    } while (iVar3 < 0x1e);
  }
  g_CDemonSet_PTR_005be368->skip_normal_normalization = 0;
  if (iVar4 != 0) {
    core_actor_cpp_CDemonActor_setupRenderState_FUN_00409f20(&param_1->base);
    core_cloth_cpp_CCloth_render_FUN_00437db0
              ((CCloth *)(param_1[2].flames[0x1d].on_event + 0xc),(CDeformableModelInstance *)0x0);
    core_cloth_cpp_CCloth_render_FUN_00437db0
              ((CCloth *)(param_1[7].flames[0x1c].base.create_event + 0x54),
               (CDeformableModelInstance *)0x0);
    core_actor_cpp_CDemonActor_restoreRenderState_FUN_00409f60(&param_1->base);
    return iVar4;
  }
  return 0;
}
