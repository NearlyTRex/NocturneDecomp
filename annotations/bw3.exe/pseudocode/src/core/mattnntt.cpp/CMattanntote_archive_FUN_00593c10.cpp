// Name: core_mattnntt.cpp_CMattanntote_archive_FUN_00593c10
// Address: 00593c10
// Address Range: [[00593c10, 00593c93]]
// Convention: __cdecl
// Signature: void __cdecl core_mattnntt_cpp_CMattanntote_archive_FUN_00593c10(CMattanntote *this_ptr)

#include "nocturne.h"

void __cdecl core_mattnntt_cpp_CMattanntote_archive_FUN_00593c10(CMattanntote *this_ptr)

{
  CDeformableModelInstance *model_ptr;
  
  core_enemy_cpp_CEnemy_archive_FUN_00489120(&this_ptr->base);
  core_actor_cpp_archiveFloat_FUN_0040b830(&(this_ptr->base).speed,"@speed" + 1);
  model_ptr = &(this_ptr->base).base.model;
  core_actor_cpp_archiveDeformableModelInstance_FUN_0040ba30(model_ptr,"modelName");
  core_actor_cpp_archiveFloat_FUN_0040b830
            (&(this_ptr->base).guard_distance,"guardDistance");
  core_actor_cpp_archiveMotionState_FUN_0040bab0(&model_ptr->base,"motion state");
  core_actor_cpp_archiveFloat_FUN_0040b830(&this_ptr->max_fade_time,"maxFadeTime");
  core_actor_cpp_archiveInteger_FUN_0040b8b0(&this_ptr->fade_out_opacity,"fadeOutOpacity");
  return;
}
