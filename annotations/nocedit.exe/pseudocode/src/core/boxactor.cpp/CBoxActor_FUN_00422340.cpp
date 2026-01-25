// Name: core_boxactor.cpp_CBoxActor_FUN_00422340
// Address: 00422340
// Address Range: [[00422340, 00422389]]
// Convention: __cdecl
// Signature: int core_boxactor.cpp_CBoxActor_FUN_00422340(CBoxActor * this_ptr)

#include "nocturne.h"

int __cdecl core_boxactor_cpp_CBoxActor_FUN_00422340(CBoxActor *this_ptr)

{
  CKeyFramedModel *pCVar1;
  int in_stack_00000008;
  
  if ((this_ptr->collision_flag != 0) && (this_ptr->carried_by_actor == 0)) {
    pCVar1 = core_dmodel_cpp_CKeyFramedModelInstance_getModelPtr_FUN_00478d80
                       ((CKeyFramedModelInstance *)this_ptr->model_name);
    if (pCVar1->collision_triangle_list != (CDemonTriangle *)0x0) {
      *(char **)(in_stack_00000008 + 0x24) = this_ptr->model_name;
    }
    return 1;
  }
  return 0;
}
