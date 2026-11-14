// Name: core_svetlana.cpp_CSvetlana_renderOpaque_FUN_00594340
// Address: 00594340
// Address Range: [[00594340, 005944b9]]
// Convention: __cdecl
// Signature: int __cdecl core_svetlana_cpp_CSvetlana_renderOpaque_FUN_00594340(CSvetlana *this_ptr)

#include "nocturne.h"

/* WARNING: Type propagation algorithm not settling */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int __cdecl core_svetlana_cpp_CSvetlana_renderOpaque_FUN_00594340(CSvetlana *this_ptr)

{
  int *piVar1;
  CHero *pCVar2;
  CDemonRenderer *this_ptr_00;
  int iVar3;
  int iVar4;
  CSvetlana *pCVar5;
  int aiStack_fc [60];
  CSvetlana *pCVar6;
  
  g_CDemonSetPtr->skip_normal_normalization = 1;
  iVar4 = 0;
  pCVar5 = this_ptr;
  do {
    iVar3 = iVar4 + 1;
    pCVar2 = &pCVar5->base;
    pCVar5 = (CSvetlana *)((pCVar5->base).base.base.actor_name + 4);
    aiStack_fc[iVar4] = (pCVar2->base).model.part_data.visibility_flags[0];
    iVar4 = iVar3;
  } while (iVar3 < 0x3c);
  iVar4 = core_charactr_cpp_CCharacter_renderOpaque_FUN_0042f240((CCharacter *)this_ptr);
  iVar3 = engine_drender_cpp_CDemonRenderer_isShadowPass_FUN_00483e60(DAT_00612560);
  if ((iVar3 == 0) && (_DAT_01c51cac < 0x4000)) {
    pCVar5 = this_ptr;
    do {
      pCVar6 = (CSvetlana *)((pCVar5->base).base.base.actor_name + 4);
      (pCVar5->base).base.model.part_data.visibility_flags[0] = 0;
      pCVar5 = pCVar6;
    } while (pCVar6 != (CSvetlana *)&(this_ptr->base).base.base.platform_orientation_delta.y);
    (this_ptr->base).base.model.part_data.visibility_flags[this_ptr->part_indices[0]] = 1;
    this_ptr_00 = DAT_00612560;
    (this_ptr->base).base.model.part_data.visibility_flags[this_ptr->part_indices[1]] = 1;
    iVar3 = g_CGamePtr->render_mode;
    g_CGamePtr->render_mode = 2;
    engine_drender_cpp_CDemonRenderer_setBlendMode_FUN_00483dd0(this_ptr_00,0);
    engine_drender_cpp_CDemonRenderer_setRenderAlpha_FUN_00483de0(DAT_00612560,48000);
    if (iVar4 != 0) {
      core_charactr_cpp_CCharacter_renderOpaque_FUN_0042f240((CCharacter *)this_ptr);
    }
    g_CGamePtr->render_mode = iVar3;
    iVar3 = 0;
    pCVar5 = this_ptr;
    do {
      piVar1 = aiStack_fc + iVar3;
      iVar3 = iVar3 + 1;
      (pCVar5->base).base.model.part_data.visibility_flags[0] = *piVar1;
      pCVar5 = (CSvetlana *)((pCVar5->base).base.base.actor_name + 4);
    } while (iVar3 < 0x3c);
  }
  g_CDemonSetPtr->skip_normal_normalization = 0;
  if (iVar4 != 0) {
    core_actor_cpp_CDemonActor_setupRenderState_FUN_004087b0((CDemonActor *)this_ptr);
    core_cloth_cpp_CCloth_render_FUN_00441800(&this_ptr->cape_cloth,(CDeformableModelInstance *)0x0)
    ;
    core_cloth_cpp_CCloth_render_FUN_00441800(&this_ptr->hair_cloth,(CDeformableModelInstance *)0x0)
    ;
    core_actor_cpp_CDemonActor_restoreRenderState_FUN_004087f0((CDemonActor *)this_ptr);
    return iVar4;
  }
  return 0;
}
