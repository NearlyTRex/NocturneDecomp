// Name: core_svetlana.cpp_CSvetlana_renderOpaque_FUN_005d9bc0
// Address: 005d9bc0
// MANUAL RECONSTRUCTION
// Address Range: [[005d9bc0, 005d9d23]]
// Convention: __cdecl
// Signature: int __cdecl core_svetlana_cpp_CSvetlana_renderOpaque_FUN_005d9bc0(CSvetlana *this_ptr)

#include "nocturne.h"

int __cdecl core_svetlana_cpp_CSvetlana_renderOpaque_FUN_005d9bc0(CSvetlana *this_ptr)

{
  int iVar3;
  int iVar4;
  int iVar1;
  int local_84 [30];
  CDemonRenderer *this_ptr_00;
  
  g_CDemonSetPtr->skip_normal_normalization = 1;
  for (iVar3 = 0; iVar3 < 0x1e; iVar3 = iVar3 + 1) {
    local_84[iVar3] = (this_ptr->base).base.model.part_data.visibility_flags[iVar3];
  }
  iVar4 = core_charactr_cpp_CCharacter_renderOpaque_FUN_0042a2c0((CCharacter *)this_ptr);
  iVar1 = engine_drender_cpp_CDemonRenderer_getFaceCount_FUN_0048cae0(g_CDemonRendererPtr2);
  if ((iVar1 == 0) && (g_PerspectiveReciprocal < 0x4000)) {
    for (iVar1 = 0; iVar1 < 0x1e; iVar1 = iVar1 + 1) {
      (this_ptr->base).base.model.part_data.visibility_flags[iVar1] = 0;
    }
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
    for (iVar1 = 0; iVar1 < 0x1e; iVar1 = iVar1 + 1) {
      (this_ptr->base).base.model.part_data.visibility_flags[iVar1] = local_84[iVar1];
    }
  }
  g_CDemonSetPtr->skip_normal_normalization = 0;
  if (iVar4 != 0) {
    core_actor_cpp_CDemonActor_setupRenderState_FUN_00408b00((CDemonActor *)this_ptr);
    core_cloth_cpp_CCloth_render_FUN_0043bae0(&this_ptr->cape_cloth,0);
    core_cloth_cpp_CCloth_render_FUN_0043bae0(&this_ptr->hair_cloth,0);
    core_actor_cpp_CDemonActor_restoreRenderState_FUN_00408b40((CDemonActor *)this_ptr);
    return iVar4;
  }
  return 0;
}
