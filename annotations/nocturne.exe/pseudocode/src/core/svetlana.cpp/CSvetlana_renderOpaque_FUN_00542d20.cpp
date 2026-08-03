// Name: core_svetlana.cpp_CSvetlana_renderOpaque_FUN_00542d20
// Address: 00542d20
// Address Range: [[00542d20, 00542e83]]
// Convention: __cdecl
// Signature: int __cdecl core_svetlana_cpp_CSvetlana_renderOpaque_FUN_00542d20(CSvetlana *this_ptr)

#include "nocturne.h"

/* WARNING: Type propagation algorithm not settling */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int __cdecl core_svetlana_cpp_CSvetlana_renderOpaque_FUN_00542d20(CSvetlana *this_ptr)

{
  int *piVar1;
  CHero *pCVar2;
  CDemonRenderer *this_ptr_00;
  int iVar3;
  int iVar4;
  CSvetlana *pCVar5;
  int local_84 [30];
  CSvetlana *pCVar6;
  
  g_CDemonSet_PTR_005be368->skip_normal_normalization = 1;
  iVar4 = 0;
  pCVar5 = this_ptr;
  do {
    iVar3 = iVar4 + 1;
    pCVar2 = &pCVar5->base;
    pCVar5 = (CSvetlana *)((pCVar5->base).base.base.actor_name + 4);
    local_84[iVar4] = (pCVar2->base).model.part_data.visibility_flags[0];
    iVar4 = iVar3;
  } while (iVar3 < 0x1e);
  iVar4 = core_charactr_cpp_CCharacter_renderOpaque_FUN_00426440((CCharacter *)this_ptr);
  iVar3 = engine_drender_cpp_CDemonRenderer_getFaceCount_FUN_00461090(DAT_005ae704);
  if ((iVar3 == 0) && (_DAT_01c038f4 < 0x4000)) {
    pCVar5 = this_ptr;
    do {
      pCVar6 = (CSvetlana *)((pCVar5->base).base.base.actor_name + 4);
      (pCVar5->base).base.model.part_data.visibility_flags[0] = 0;
      pCVar5 = pCVar6;
    } while (pCVar6 != (CSvetlana *)(this_ptr->base).base.base.create_event);
    (this_ptr->base).base.model.part_data.visibility_flags[this_ptr->part_indices[0]] = 1;
    this_ptr_00 = DAT_005ae704;
    (this_ptr->base).base.model.part_data.visibility_flags[this_ptr->part_indices[1]] = 1;
    iVar3 = g_CGame_PTR_005b9354->render_mode;
    g_CGame_PTR_005b9354->render_mode = 2;
    engine_drender_cpp_CDemonRenderer_setBlendMode_FUN_00461000(this_ptr_00,0);
    engine_drender_cpp_CDemonRenderer_setRenderAlpha_FUN_00461010(DAT_005ae704,48000);
    if (iVar4 != 0) {
      core_charactr_cpp_CCharacter_renderOpaque_FUN_00426440((CCharacter *)this_ptr);
    }
    g_CGame_PTR_005b9354->render_mode = iVar3;
    iVar3 = 0;
    pCVar5 = this_ptr;
    do {
      piVar1 = local_84 + iVar3;
      iVar3 = iVar3 + 1;
      (pCVar5->base).base.model.part_data.visibility_flags[0] = *piVar1;
      pCVar5 = (CSvetlana *)((pCVar5->base).base.base.actor_name + 4);
    } while (iVar3 < 0x1e);
  }
  g_CDemonSet_PTR_005be368->skip_normal_normalization = 0;
  if (iVar4 != 0) {
    core_actor_cpp_CDemonActor_setupRenderState_FUN_00409f20((CDemonActor *)this_ptr);
    core_cloth_cpp_CCloth_render_FUN_00437db0(&this_ptr->cape_cloth,(CDeformableModelInstance *)0x0)
    ;
    core_cloth_cpp_CCloth_render_FUN_00437db0(&this_ptr->hair_cloth,(CDeformableModelInstance *)0x0)
    ;
    core_actor_cpp_CDemonActor_restoreRenderState_FUN_00409f60((CDemonActor *)this_ptr);
    return iVar4;
  }
  return 0;
}
