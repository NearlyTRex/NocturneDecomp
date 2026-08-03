// Name: core_beast.cpp_CBeast_archive_FUN_00415160
// Address: 00415160
// Address Range: [[00415160, 004151a7]]
// Convention: __cdecl
// Signature: void __cdecl core_beast_cpp_CBeast_archive_FUN_00415160(CBeast *this_ptr)

#include "nocturne.h"

void __cdecl core_beast_cpp_CBeast_archive_FUN_00415160(CBeast *this_ptr)

{
  CDeformableModelInstance *model_ptr;
  
  core_enemy_cpp_CEnemy_archive_FUN_004796c0(&this_ptr->base);
  core_actor_cpp_archiveFloat_FUN_0040c880(&(this_ptr->base).speed,"speed");
  model_ptr = &(this_ptr->base).base.model;
  core_actor_cpp_archiveDeformableModelInstance_FUN_0040ca80(model_ptr,"modelName");
  core_actor_cpp_archiveMotionState_FUN_0040cb00
            (&model_ptr->motion_controller,"motion state");
  return;
}
