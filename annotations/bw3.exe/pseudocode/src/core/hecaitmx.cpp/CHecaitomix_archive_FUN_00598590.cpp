// Name: core_hecaitmx.cpp_CHecaitomix_archive_FUN_00598590
// Address: 00598590
// Address Range: [[00598590, 005985ef]]
// Convention: __cdecl
// Signature: void __cdecl core_hecaitmx_cpp_CHecaitomix_archive_FUN_00598590(CHecaitomix *this_ptr)

#include "nocturne.h"

void __cdecl core_hecaitmx_cpp_CHecaitomix_archive_FUN_00598590(CHecaitomix *this_ptr)

{
  CDeformableModelInstance *model_ptr;
  
  core_enemy_cpp_CEnemy_archive_FUN_00489120(&this_ptr->base);
  core_actor_cpp_archiveFloat_FUN_0040b830(&(this_ptr->base).speed,"?speed" + 1);
  model_ptr = &(this_ptr->base).base.model;
  core_actor_cpp_archiveDeformableModelInstance_FUN_0040ba30(model_ptr,"modelName");
  core_actor_cpp_archiveFloat_FUN_0040b830
            (&(this_ptr->base).guard_distance,"guardDistance");
  core_actor_cpp_archiveMotionState_FUN_0040bab0(&model_ptr->base,"motion state");
  return;
}
