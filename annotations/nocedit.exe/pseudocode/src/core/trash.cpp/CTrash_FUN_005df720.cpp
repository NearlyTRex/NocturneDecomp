// Name: core_trash.cpp_CTrash_FUN_005df720
// Address: 005df720
// Address Range: [[005df720, 005df74b]]
// Convention: __cdecl
// Signature: void core_trash.cpp_CTrash_FUN_005df720(CTrash * this_ptr)

#include "nocturne.h"

void __cdecl core_trash_cpp_CTrash_FUN_005df720(CTrash *this_ptr)

{
  FILE *in_stack_00000008;
  
  core_actor_cpp_CDemonActor_writeDependencies_FUN_0040cfd0(&this_ptr->base_actor,in_stack_00000008)
  ;
  core_dmodel_cpp_CKeyFramedModelInstance_writeDependencies_FUN_0047edd0
            ((CKeyFramedModelInstance *)&this_ptr->model_name,in_stack_00000008);
  return;
}
