// Name: core_yow.cpp_CYow_archive_FUN_00586e50
// Address: 00586e50
// Address Range: [[00586e50, 00586eab]]
// Convention: __cdecl
// Signature: void __cdecl core_yow_cpp_CYow_archive_FUN_00586e50(CYow *this_ptr)

#include "nocturne.h"

void __cdecl core_yow_cpp_CYow_archive_FUN_00586e50(CYow *this_ptr)

{
  CDeformableModelInstance *model_ptr;
  
  core_enemy_cpp_CEnemy_archive_FUN_00489120(&this_ptr->base);
  core_actor_cpp_archiveFloat_FUN_0040b830(&(this_ptr->base).speed,"@Aspeed" + 2);
  model_ptr = &(this_ptr->base).base.model;
  core_actor_cpp_archiveDeformableModelInstance_FUN_0040ba30(model_ptr,"modelName");
  core_actor_cpp_archiveFloat_FUN_0040b830
            (&(this_ptr->base).guard_distance,"guardDistance");
  core_actor_cpp_archiveMotionState_FUN_0040bab0(&model_ptr->base,"motion state");
  return;
}
