// Name: core_charactr.cpp_CCharacter_renderCharacter_FUN_00429aa0
// Address: 00429aa0
// Address Range: [[00429aa0, 00429b3b]]
// Convention: __cdecl
// Signature: void __cdecl core_charactr_cpp_CCharacter_renderCharacter_FUN_00429aa0(CCharacter *this_ptr)

#include "nocturne.h"

void __cdecl core_charactr_cpp_CCharacter_renderCharacter_FUN_00429aa0(CCharacter *this_ptr)

{
  int iVar1;
  
  if (this_ptr->is_fully_burned == 0) {
    core_skeleton_cpp_CDeformableModelInstance_renderWithOptions_FUN_005a0150
              (&this_ptr->model,-1,0xffffffff,1,0);
    core_cloth_cpp_CClothList_render_FUN_0043c320(&this_ptr->cloth_list,&this_ptr->model);
  }
  iVar1 = engine_drender_cpp_CDemonRenderer_getFaceCount_FUN_0048cae0(g_CDemonRendererPtr2);
  if (iVar1 == 0) {
    if (this_ptr->is_ethereal == 0) {
      core_charactr_cpp_CCharacter_renderBurn_FUN_0042ad00(this_ptr);
    }
    if (0.0 < this_ptr->stagger_amount) {
      core_charactr_cpp_CCharacter_renderEthereal_FUN_0042af60(this_ptr);
    }
  }
  core_charactr_cpp_CCharacter_renderAttachedModels_FUN_0042a420(this_ptr);
  if (g_CGamePtr->collision_render_enabled == 0) {
    return;
  }
  core_charactr_cpp_CCharacter_renderCollision_FUN_00429b40(this_ptr);
  return;
}
