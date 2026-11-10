// Name: core_boxactor.cpp_CBoxActor_setup_FUN_00421de0
// Address: 00421de0
// Address Range: [[00421de0, 00421e7a]]
// Convention: __cdecl
// Signature: void __cdecl core_boxactor_cpp_CBoxActor_setup_FUN_00421de0(CBoxActor *this_ptr)

#include "nocturne.h"

void __cdecl core_boxactor_cpp_CBoxActor_setup_FUN_00421de0(CBoxActor *this_ptr)

{
  int iVar1;
  CKeyFramedModel *pCVar2;
  
  core_actor_cpp_CDemonActor_setup_FUN_00408850(&this_ptr->base);
  core_dmodel_cpp_CKeyFramedModelInstance_preCache_FUN_004688e0(&this_ptr->model);
  pCVar2 = core_dmodel_cpp_CKeyFramedModelInstance_getModelPtr_FUN_00468900(&this_ptr->model);
  iVar1 = pCVar2->frame_count;
  if (this_ptr->anim_frame < 0.0) {
    this_ptr->anim_frame = 0.0;
  }
  if ((float)iVar1 <= this_ptr->anim_frame) {
    this_ptr->anim_frame = (float)(iVar1 + -1);
  }
  if (-1 < (this_ptr->physics_box).is_valid) {
    this_ptr->push_sfx_handle = 0;
    return;
  }
  core_boxactor_cpp_FUN_00421e80(this_ptr);
  this_ptr->push_sfx_handle = 0;
  return;
}
