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
  uint uVar2;
  CDeformableModelInstance *pCVar3;
  CDemonRenderer *this_ptr;
  int iVar4;
  int iVar5;
  CCharacter *pCVar6;
  int local_84 [30];
  CCharacter *pCVar7;
  
  *(uint *)(0x01E57284 + 0x15aa9c) = 1;
  iVar5 = 0;
  pCVar6 = param_1;
  do {
    iVar4 = iVar5 + 1;
    pCVar3 = &pCVar6->model;
    pCVar6 = (CCharacter *)((pCVar6->base).actor_name + 4);
    local_84[iVar5] = (pCVar3->part_data).visibility_flags[0];
    iVar5 = iVar4;
  } while (iVar4 < 0x1e);
  iVar5 = core_charactr_cpp_CCharacter_renderOpaque_FUN_00426440(param_1);
  iVar4 = engine_drender_cpp_CDemonRenderer_getFaceCount_FUN_00461090(DAT_005ae704);
  if ((iVar4 == 0) && (_DAT_01c038f4 < 0x4000)) {
    pCVar6 = param_1;
    do {
      pCVar7 = (CCharacter *)((pCVar6->base).actor_name + 4);
      (pCVar6->model).part_data.visibility_flags[0] = 0;
      pCVar6 = pCVar7;
    } while (pCVar7 != (CCharacter *)(param_1->base).create_event);
    (param_1->model).part_data.visibility_flags[param_1[0xc].flames[0x1a].texture_flip] = 1;
    this_ptr = DAT_005ae704;
    (param_1->model).part_data.visibility_flags[param_1[0xc].flames[0x1a].do_visibility_check] = 1;
    uVar2 = *(uint *)(0x01C775EC + 500);
    *(uint *)(0x01C775EC + 500) = 2;
    engine_drender_cpp_CDemonRenderer_setBlendMode_FUN_00461000(this_ptr,0);
    engine_drender_cpp_CDemonRenderer_setRenderAlpha_FUN_00461010(DAT_005ae704,48000);
    if (iVar5 != 0) {
      core_charactr_cpp_CCharacter_renderOpaque_FUN_00426440(param_1);
    }
    *(uint *)(0x01C775EC + 500) = uVar2;
    iVar4 = 0;
    pCVar6 = param_1;
    do {
      piVar1 = local_84 + iVar4;
      iVar4 = iVar4 + 1;
      (pCVar6->model).part_data.visibility_flags[0] = *piVar1;
      pCVar6 = (CCharacter *)((pCVar6->base).actor_name + 4);
    } while (iVar4 < 0x1e);
  }
  *(uint *)(0x01E57284 + 0x15aa9c) = 0;
  if (iVar5 != 0) {
    core_actor_cpp_CDemonActor_setupRenderState_FUN_00409f20(&param_1->base);
    core_cloth_cpp_CCloth_render_FUN_00437db0
              ((CCloth *)(param_1[2].flames[0x1d].on_event + 0xc),(CDeformableModelInstance *)0x0);
    core_cloth_cpp_CCloth_render_FUN_00437db0
              ((CCloth *)(param_1[7].flames[0x1c].base.create_event + 0x54),
               (CDeformableModelInstance *)0x0);
    core_actor_cpp_CDemonActor_restoreRenderState_FUN_00409f60(&param_1->base);
    return iVar5;
  }
  return 0;
}
