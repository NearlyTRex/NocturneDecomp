// Name: core_passngr.cpp_CPassenger_archive_FUN_004efb30
// Address: 004efb30
// Address Range: [[004efb30, 004efc09]]
// Convention: __cdecl
// Signature: void __cdecl core_passngr_cpp_CPassenger_archive_FUN_004efb30(CPassenger *this_ptr)

#include "nocturne.h"

void __cdecl core_passngr_cpp_CPassenger_archive_FUN_004efb30(CPassenger *this_ptr)

{
  CDeformableModelInstance *model_ptr;
  
  core_npc_cpp_CNPC_archive_FUN_004eed10(&this_ptr->base);
  core_actor_cpp_archiveString_FUN_0040c6d0(this_ptr->transform_event,"transformEvent");
  core_actor_cpp_archiveString_FUN_0040c6d0(this_ptr->wolf_model_name,"wolfModelName");
  core_actor_cpp_archiveFloat_FUN_0040c880(&this_ptr->morph_time,"morphTime");
  if ((1 < INT_005be078) && (INT_005be078 < 5)) {
    model_ptr = &(this_ptr->base).base.model;
    core_actor_cpp_archiveDeformableModelInstance_FUN_0040ca80(model_ptr,"modelName");
    core_actor_cpp_archiveMotionState_FUN_0040cb00
              (&model_ptr->motion_controller,"motion state");
  }
  if (2 < INT_005be078) {
    core_actor_cpp_archiveFloat_FUN_0040c880(&this_ptr->wolf_size,"wolfSize");
  }
  if (3 < INT_005be078) {
    core_actor_cpp_archiveString_FUN_0040c6d0(this_ptr->name_of_wolf,"nameOfWolf");
  }
  if (INT_005be078 < 6) {
    return;
  }
  core_actor_cpp_archiveString_FUN_0040c6d0(this_ptr->transform_wav,"transformWav");
  return;
}
