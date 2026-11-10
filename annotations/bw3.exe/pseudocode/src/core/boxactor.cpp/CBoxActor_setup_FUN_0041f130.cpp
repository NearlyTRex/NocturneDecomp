// Name: core_boxactor.cpp_CBoxActor_setup_FUN_0041f130
// Address: 0041f130
// Address Range: [[0041f130, 0041f1d0]]
// Convention: __cdecl
// Signature: void __cdecl core_boxactor_cpp_CBoxActor_setup_FUN_0041f130(CBoxActor *this_ptr)

#include "nocturne.h"

void __cdecl core_boxactor_cpp_CBoxActor_setup_FUN_0041f130(CBoxActor *this_ptr)

{
  int iVar1;
  CKeyFramedModel *pCVar2;
  
  core_actor_cpp_CDemonActor_setup_FUN_00408890(&this_ptr->base);
  core_dmodel_cpp_CKeyFramedModelInstance_preCache_FUN_00462580(&this_ptr->model);
  pCVar2 = core_dmodel_cpp_CKeyFramedModelInstance_getModelPtr_FUN_004625a0(&this_ptr->model);
  iVar1 = pCVar2->frame_count;
  if (this_ptr->anim_frame < 0.0) {
    this_ptr->anim_frame = 0.0;
  }
  if ((float)iVar1 <= this_ptr->anim_frame) {
    this_ptr->anim_frame = (float)(iVar1 + -1);
  }
  if ((this_ptr->physics_box).is_valid < 0) {
    core_boxactor_cpp_FUN_0041f1e0(this_ptr);
  }
  *(uint *)&this_ptr->field_0x6dc = 0;
  *(uint *)&this_ptr->field_0x6e4 = 0x10000;
  this_ptr->push_sfx_handle = 0;
  return;
}
