// Name: core_yow.cpp_CYow_archive_FUN_005b9110
// Address: 005b9110
// Address Range: [[005b9110, 005b916b]]
// Convention: __cdecl
// Signature: void __cdecl core_yow_cpp_CYow_archive_FUN_005b9110(CYow *this_ptr)

#include "nocturne.h"

void __cdecl core_yow_cpp_CYow_archive_FUN_005b9110(CYow *this_ptr)

{
  CDeformableModelInstance *model_ptr;
  
  core_enemy_cpp_CEnemy_archive_FUN_004a0520(&this_ptr->base);
  core_actor_cpp_archiveFloat_FUN_0040b5f0(&(this_ptr->base).speed,"@speed" + 1);
  model_ptr = &(this_ptr->base).base.model;
  core_actor_cpp_archiveDeformableModelInstance_FUN_0040b7f0(model_ptr,"modelName");
  core_actor_cpp_archiveFloat_FUN_0040b5f0
            (&(this_ptr->base).guard_distance,"guardDistance");
  core_actor_cpp_archiveMotionState_FUN_0040b870(&model_ptr->base,"motion state");
  return;
}
