// Name: core_passngr.cpp_CPassenger_archive_FUN_00546190
// Address: 00546190
// Address Range: [[00546190, 00546269]]
// Convention: __cdecl
// Signature: void __cdecl core_passngr_cpp_CPassenger_archive_FUN_00546190(CPassenger *this_ptr)

#include "nocturne.h"

void __cdecl core_passngr_cpp_CPassenger_archive_FUN_00546190(CPassenger *this_ptr)

{
  CDeformableModelInstance *model_ptr;
  
  core_npc_cpp_CNPC_archive_FUN_00544ba0(&this_ptr->base);
  core_actor_cpp_archiveString_FUN_0040b5c0(this_ptr->transform_event,"transformEvent");
  core_actor_cpp_archiveString_FUN_0040b5c0(this_ptr->wolf_model_name,"wolfModelName");
  core_actor_cpp_archiveFloat_FUN_0040b770(&this_ptr->morph_time,"morphTime");
  if ((1 < g_CPassengerClassVersion) && (g_CPassengerClassVersion < 5)) {
    model_ptr = &(this_ptr->base).base.model;
    core_actor_cpp_archiveDeformableModelInstance_FUN_0040b970(model_ptr,"modelName");
    core_actor_cpp_archiveMotionState_FUN_0040b9f0
              (&model_ptr->motion_controller,"motion state");
  }
  if (2 < g_CPassengerClassVersion) {
    core_actor_cpp_archiveFloat_FUN_0040b770(&this_ptr->wolf_size,"wolfSize");
  }
  if (3 < g_CPassengerClassVersion) {
    core_actor_cpp_archiveString_FUN_0040b5c0(this_ptr->name_of_wolf,"nameOfWolf");
  }
  if (g_CPassengerClassVersion < 6) {
    return;
  }
  core_actor_cpp_archiveString_FUN_0040b5c0
            ((char *)&this_ptr->transform_wav,"transformWav");
  return;
}
