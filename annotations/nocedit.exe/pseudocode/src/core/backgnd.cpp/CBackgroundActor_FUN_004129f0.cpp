// Name: core_backgnd.cpp_CBackgroundActor_FUN_004129f0
// Address: 004129f0
// Address Range: [[004129f0, 00412a2e]]
// Convention: __cdecl
// Signature: int core_backgnd.cpp_CBackgroundActor_FUN_004129f0(CBackgroundActor * this_ptr)

#include "nocturne.h"

int __cdecl core_backgnd_cpp_CBackgroundActor_FUN_004129f0(CBackgroundActor *this_ptr)

{
  CKeyFramedModel *pCVar1;
  int in_stack_00000008;
  
  if (this_ptr->collide_with_me == 0) {
    return 0;
  }
  pCVar1 = core_dmodel_cpp_CKeyFramedModelInstance_getModelPtr_FUN_00478d80(&this_ptr->model);
  if (pCVar1->collision_triangle_list != (CDemonTriangle *)0x0) {
    *(CKeyFramedModelInstance **)(in_stack_00000008 + 0x24) = &this_ptr->model;
  }
  return 1;
}
