// Name: core_lever.cpp_CLever_setup_FUN_005048a0
// Address: 005048a0
// MANUAL RECONSTRUCTION
// Address Range: [[005048a0, 00504911]]
// Convention: __cdecl
// Signature: void __cdecl core_lever_cpp_CLever_setup_FUN_005048a0(CLever *this_ptr)

#include "nocturne.h"

void __cdecl core_lever_cpp_CLever_setup_FUN_005048a0(CLever *this_ptr)

{
  int iVar2;

  core_dmodel_cpp_CKeyFramedModelInstance_preCache_FUN_00478d60(&this_ptr->model);
  core_actor_cpp_CDemonActor_setup_FUN_00408bb0(&this_ptr->base);
  if ((this_ptr->sound[0] == '\0') &&
     (iVar2 = _stricmp((this_ptr->model).model_name,"elevbutton.kfm"), iVar2 != 0)) {
    strcpy(this_ptr->sound, "lever-metal.wav");
  }
  return;
}
