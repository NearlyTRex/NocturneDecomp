// Name: core_svetlana.cpp_CSvetlana_renderOpaque_FUN_005d9bc0
// Address: 005d9bc0
// Address Range: [[005d9bc0, 005d9d23]]
// Convention: __cdecl
// Signature: int __cdecl core_svetlana_cpp_CSvetlana_renderOpaque_FUN_005d9bc0(CSvetlana *this_ptr)

#include "nocturne.h"

/* WARNING: Type propagation algorithm not settling */

int __cdecl core_svetlana_cpp_CSvetlana_renderOpaque_FUN_005d9bc0(CSvetlana *this_ptr)

{
  int iVar3;
  int iVar4;
  int iVar1;
  CSvetlana *pCVar5;
  CSvetlana *pCVar3;
  int local_84 [30];
  CSvetlana *pCVar6;
  CHero *pCVar2;
  CDemonRenderer *this_ptr_00;
  int *piVar1;
  
  g_CDemonSetPtr->skip_normal_normalization = 1;
  iVar3 = 0;
  pCVar3 = this_ptr;
  do {
    iVar3 = iVar3 + 1;
    pCVar2 = &pCVar3->base;
    pCVar3 = (CSvetlana *)((pCVar3->base).base.base.actor_name + 4);
    local_84[iVar3] = (pCVar2->base).model.part_data.visibility_flags[0];
    iVar3 = iVar3;
  } while (iVar3 < 0x1e);
  iVar4 = core_charactr_cpp_CCharacter_renderOpaque_FUN_0042a2c0((CCharacter *)this_ptr);
  iVar1 = engine_drender_cpp_CDemonRenderer_getFaceCount_FUN_0048cae0(g_CDemonRendererPtr2);
  if ((iVar1 == 0) && (g_PerspectiveReciprocal < 0x4000)) {
    pCVar5 = this_ptr;
    do {
      pCVar5 = (CSvetlana *)((pCVar5->base).base.base.actor_name + 4);
      (pCVar5->base).base.model.part_data.visibility_flags[0] = 0;
      pCVar5 = pCVar5;
    } while (pCVar5 != (CSvetlana *)(this_ptr->base).base.base.create_event);
    (this_ptr->base).base.model.part_data.visibility_flags[this_ptr->part_indices[0]] = 1;
    this_ptr_00 = g_CDemonRendererPtr2;
    (this_ptr->base).base.model.part_data.visibility_flags[this_ptr->part_indices[1]] = 1;
    iVar1 = g_CGamePtr->render_mode;
    g_CGamePtr->render_mode = 2;
    engine_drender_cpp_CDemonRenderer_setBlendMode_FUN_0048ca50(this_ptr_00,0);
    engine_drender_cpp_CDemonRenderer_setRenderAlpha_FUN_0048ca60(g_CDemonRendererPtr2,48000);
    if (iVar4 != 0) {
      core_charactr_cpp_CCharacter_renderOpaque_FUN_0042a2c0((CCharacter *)this_ptr);
    }
    g_CGamePtr->render_mode = iVar1;
    iVar1 = 0;
    pCVar3 = this_ptr;
    do {
      piVar1 = local_84 + iVar1;
      iVar1 = iVar1 + 1;
      (pCVar3->base).base.model.part_data.visibility_flags[0] = *piVar1;
      pCVar3 = (CSvetlana *)((pCVar3->base).base.base.actor_name + 4);
    } while (iVar1 < 0x1e);
  }
  g_CDemonSetPtr->skip_normal_normalization = 0;
  if (iVar4 != 0) {
    core_actor_cpp_CDemonActor_setupRenderState_FUN_00408b00((CDemonActor *)this_ptr);
    core_cloth_cpp_CCloth_render_FUN_0043bae0(&this_ptr->cape_cloth,(CDeformableModelInstance *)0x0)
    ;
    core_cloth_cpp_CCloth_render_FUN_0043bae0(&this_ptr->hair_cloth,(CDeformableModelInstance *)0x0)
    ;
    core_actor_cpp_CDemonActor_restoreRenderState_FUN_00408b40((CDemonActor *)this_ptr);
    return iVar4;
  }
  return 0;
}
