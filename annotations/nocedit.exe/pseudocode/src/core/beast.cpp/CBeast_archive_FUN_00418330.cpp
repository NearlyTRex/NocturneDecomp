// Name: core_beast.cpp_CBeast_archive_FUN_00418330
// Address: 00418330
// Address Range: [[00418330, 00418377]]
// Convention: __cdecl
// Signature: void __cdecl core_beast_cpp_CBeast_archive_FUN_00418330(CBeast *this_ptr)

#include "nocturne.h"

void __cdecl core_beast_cpp_CBeast_archive_FUN_00418330(CBeast *this_ptr)

{
  CDeformableModelInstance *model_ptr;
  
  core_enemy_cpp_CEnemy_archive_FUN_004a9660(&this_ptr->base);
  core_actor_cpp_archiveFloat_FUN_0040b770(&(this_ptr->base).speed,"speed");
  model_ptr = &(this_ptr->base).base.model;
  core_actor_cpp_archiveDeformableModelInstance_FUN_0040b970(model_ptr,"modelName");
  core_actor_cpp_archiveMotionState_FUN_0040b9f0
            (&model_ptr->motion_controller,"motion state");
  return;
}
