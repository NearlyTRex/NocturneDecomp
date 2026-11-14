// Name: core_passngr.cpp_CPassenger_archive_FUN_0050aaa0
// Address: 0050aaa0
// Address Range: [[0050aaa0, 0050ab79]]
// Convention: __cdecl
// Signature: void __cdecl core_passngr_cpp_CPassenger_archive_FUN_0050aaa0(CPassenger *this_ptr)

#include "nocturne.h"

void __cdecl core_passngr_cpp_CPassenger_archive_FUN_0050aaa0(CPassenger *this_ptr)

{
  CDeformableModelInstance *model_ptr;
  
  core_npc_cpp_CNPC_archive_FUN_00509800(&this_ptr->base);
  core_actor_cpp_archiveString_FUN_0040b680(this_ptr->transform_event,"transformEvent");
  core_actor_cpp_archiveString_FUN_0040b680(this_ptr->wolf_model_name,"wolfModelName");
  core_actor_cpp_archiveFloat_FUN_0040b830(&this_ptr->morph_time,"morphTime");
  if ((1 < g_CPassengerClassVersion) && (g_CPassengerClassVersion < 5)) {
    model_ptr = &(this_ptr->base).base.model;
    core_actor_cpp_archiveDeformableModelInstance_FUN_0040ba30(model_ptr,"modelName");
    core_actor_cpp_archiveMotionState_FUN_0040bab0(&model_ptr->base,"motion state");
  }
  if (2 < g_CPassengerClassVersion) {
    core_actor_cpp_archiveFloat_FUN_0040b830(&this_ptr->wolf_size,"wolfSize");
  }
  if (3 < g_CPassengerClassVersion) {
    core_actor_cpp_archiveString_FUN_0040b680(this_ptr->name_of_wolf,"nameOfWolf");
  }
  if (g_CPassengerClassVersion < 6) {
    return;
  }
  core_actor_cpp_archiveString_FUN_0040b680(this_ptr->transform_wav,"transformWav");
  return;
}
