// Name: core_boxactor.cpp_CBoxActor_setup_FUN_00421830
// Address: 00421830
// Address Range: [[00421830, 0042183e]]
// Convention: __cdecl
// Signature: void core_boxactor.cpp_CBoxActor_setup_FUN_00421830(CBoxActor * this_ptr)

#include "nocturne.h"

void __cdecl core_boxactor_cpp_CBoxActor_setup_FUN_00421830(CBoxActor *this_ptr)

{
  int iVar1;
  CKeyFramedModel *pCVar2;
  
  core_actor_cpp_CDemonActor_setup_FUN_00408bb0(&this_ptr->base_actor);
  core_dmodel_cpp_CKeyFramedModelInstance_preCache_FUN_00478d60
            ((CKeyFramedModelInstance *)this_ptr->model_name);
  pCVar2 = core_dmodel_cpp_CKeyFramedModelInstance_getModelPtr_FUN_00478d80
                     ((CKeyFramedModelInstance *)this_ptr->model_name);
  iVar1 = pCVar2->frame_count;
  if ((float)this_ptr->field7_0x310 < 0.0) {
    this_ptr->field7_0x310 = 0;
  }
  if ((float)iVar1 <= (float)this_ptr->field7_0x310) {
    this_ptr->field7_0x310 = (int)(float)(iVar1 + -1);
  }
  if (-1 < *(int *)(this_ptr->field17_0x398 + 0x250)) {
    this_ptr->field13_0x328 = 0;
    return;
  }
  core_boxactor_cpp_FUN_004218d0(this_ptr);
  this_ptr->field13_0x328 = 0;
  return;
}
