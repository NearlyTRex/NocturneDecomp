// Name: core_shadow.cpp_CShadow_archive_FUN_0053e860
// Address: 0053e860
// Address Range: [[0053e860, 0053e99b]]
// Convention: __cdecl
// Signature: void __cdecl core_shadow_cpp_CShadow_archive_FUN_0053e860(CShadow *this_ptr)

#include "nocturne.h"

void __cdecl core_shadow_cpp_CShadow_archive_FUN_0053e860(CShadow *this_ptr)

{
  core_enemy_cpp_CEnemy_archive_FUN_00487ec0(&this_ptr->base);
  core_actor_cpp_archiveFloat_FUN_0040b8e0(&(this_ptr->base).speed,"speed");
  core_actor_cpp_archiveDeformableModelInstance_FUN_0040bae0
            (&(this_ptr->base).base.model,"modelName");
  if (g_CShadowClassVersion < 3) {
    core_actor_cpp_archiveFloat_FUN_0040b8e0
              (&(this_ptr->base).guard_distance,"guardDistance");
  }
  core_actor_cpp_archiveMotionState_FUN_0040bb60
            (&(this_ptr->base).base.model.base,"motion state");
  if (1 < g_CShadowClassVersion) {
    core_actor_cpp_archiveInteger_FUN_0040b960(&this_ptr->light_up_eyes,"lightUpEyes");
  }
  if (3 < g_CShadowClassVersion) {
    core_actor_cpp_archiveActor_FUN_0040b9e0(&this_ptr->chain_anchor,"chainAnchor");
    core_actor_cpp_archiveFloat_FUN_0040b8e0(&this_ptr->chain_length,"chainLength");
  }
  if (4 < g_CShadowClassVersion) {
    core_actor_cpp_archiveInteger_FUN_0040b960(&this_ptr->type,&DAT_005e675e);
  }
  if (g_CShadowClassVersion < 6) {
    return;
  }
  core_actor_cpp_archiveInteger_FUN_0040b960(&this_ptr->phase,"phase");
  core_actor_cpp_archiveFloat_FUN_0040b8e0(&this_ptr->phase_timer,"phaseTimer");
  core_actor_cpp_archiveActor_FUN_0040b9e0(&this_ptr->alpha1,"alpha1");
  core_actor_cpp_archiveActor_FUN_0040b9e0(&this_ptr->alpha2,"alpha2");
  return;
}
