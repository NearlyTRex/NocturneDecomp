// Name: core_hotdemon.cpp_CHotDemon_archive_FUN_004d5f70
// Address: 004d5f70
// Address Range: [[004d5f70, 004d5fc0]]
// Convention: __cdecl
// Signature: void __cdecl core_hotdemon_cpp_CHotDemon_archive_FUN_004d5f70(CHotDemon *this_ptr)

#include "nocturne.h"

void __cdecl core_hotdemon_cpp_CHotDemon_archive_FUN_004d5f70(CHotDemon *this_ptr)

{
  CDeformableModelInstance *model_ptr;
  
  core_enemy_cpp_CEnemy_archive_FUN_00489120(&this_ptr->base);
  core_actor_cpp_archiveFloat_FUN_0040b830(&(this_ptr->base).field_0xcdcc,"?speed" + 1);
  model_ptr = &(this_ptr->base).base.model;
  core_actor_cpp_archiveDeformableModelInstance_FUN_0040ba30(model_ptr,"modelName");
  core_actor_cpp_archiveMotionState_FUN_0040bab0(&model_ptr->base,"motion state");
  return;
}
