// Name: core_styldemo.cpp_CStylerDemon_archive_FUN_005a02e0
// Address: 005a02e0
// Address Range: [[005a02e0, 005a0327]]
// Convention: __cdecl
// Signature: void __cdecl core_styldemo_cpp_CStylerDemon_archive_FUN_005a02e0(CStylerDemon *this_ptr)

#include "nocturne.h"

void __cdecl core_styldemo_cpp_CStylerDemon_archive_FUN_005a02e0(CStylerDemon *this_ptr)

{
  CDeformableModelInstance *model_ptr;
  
  core_enemy_cpp_CEnemy_archive_FUN_00489120(&this_ptr->base);
  core_actor_cpp_archiveFloat_FUN_0040b830(&(this_ptr->base).speed,"@speed" + 1);
  model_ptr = &(this_ptr->base).base.model;
  core_actor_cpp_archiveDeformableModelInstance_FUN_0040ba30(model_ptr,"modelName");
  core_actor_cpp_archiveMotionState_FUN_0040bab0(&model_ptr->base,"motion state");
  return;
}
