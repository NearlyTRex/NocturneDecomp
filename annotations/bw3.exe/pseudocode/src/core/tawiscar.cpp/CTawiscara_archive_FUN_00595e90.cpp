// Name: core_tawiscar.cpp_CTawiscara_archive_FUN_00595e90
// Address: 00595e90
// Address Range: [[00595e90, 00595f8b]]
// Convention: __cdecl
// Signature: void __cdecl core_tawiscar_cpp_CTawiscara_archive_FUN_00595e90(CTawiscara *this_ptr)

#include "nocturne.h"

void __cdecl core_tawiscar_cpp_CTawiscara_archive_FUN_00595e90(CTawiscara *this_ptr)

{
  CDeformableModelInstance *model_ptr;
  
  core_enemy_cpp_CEnemy_archive_FUN_00489120(&this_ptr->base);
  core_actor_cpp_archiveFloat_FUN_0040b830(&(this_ptr->base).speed,"?speed" + 1);
  model_ptr = &(this_ptr->base).base.model;
  core_actor_cpp_archiveDeformableModelInstance_FUN_0040ba30(model_ptr,"modelName");
  core_actor_cpp_archiveFloat_FUN_0040b830
            (&(this_ptr->base).guard_distance,"guardDistance");
  core_actor_cpp_archiveMotionState_FUN_0040bab0(&model_ptr->base,"motion state");
  core_actor_cpp_archiveInteger_FUN_0040b8b0(&this_ptr->light_up_eyes,"lightUpEyes");
  core_actor_cpp_archiveActor_FUN_0040b930(&this_ptr->chain_anchor,"chainAnchor");
  core_actor_cpp_archiveFloat_FUN_0040b830(&this_ptr->chain_length,"chainLength");
  core_actor_cpp_archiveInteger_FUN_0040b8b0((int *)&this_ptr->type,&DAT_005d9408);
  core_actor_cpp_archiveInteger_FUN_0040b8b0(&this_ptr->phase,"phase");
  core_actor_cpp_archiveFloat_FUN_0040b830(&this_ptr->phase_timer,"phaseTimer");
  core_actor_cpp_archiveActor_FUN_0040b930(&this_ptr->alpha1,"alpha1");
  core_actor_cpp_archiveActor_FUN_0040b930(&this_ptr->alpha2,"alpha2");
  return;
}
