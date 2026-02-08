// Name: core_wateract.cpp_CWaterActor_archive_FUN_005eb510
// Address: 005eb510
// Address Range: [[005eb510, 005eb701]]
// Convention: __cdecl
// Signature: void __cdecl core_wateract_cpp_CWaterActor_archive_FUN_005eb510(CWaterActor *this_ptr)

#include "nocturne.h"

void __cdecl core_wateract_cpp_CWaterActor_archive_FUN_005eb510(CWaterActor *this_ptr)

{
  core_actor_cpp_CDemonActor_archive_FUN_0040c1c0(&this_ptr->base);
  core_actor_cpp_archiveVector_FUN_0040b340(&this_ptr->size,"size");
  core_actor_cpp_archiveInteger_FUN_0040b7f0(&this_ptr->opacity,"opacity");
  if (g_CWaterActorVersion == 2) {
    core_actor_cpp_archiveFloat_FUN_0040b770(&this_ptr->height_delta,"heightDelta");
    core_actor_cpp_archiveFloat_FUN_0040b770(&this_ptr->time_to_move,"timeToMove");
    core_actor_cpp_archiveString_FUN_0040b5c0(this_ptr->move_sound,"moveSound");
    core_actor_cpp_archiveString_FUN_0040b5c0(this_ptr->move_event,"moveEvent");
    core_actor_cpp_archiveFloat_FUN_0040b770(&this_ptr->param,"param");
  }
  if (2 < g_CWaterActorVersion) {
    core_actor_cpp_archiveFloat_FUN_0040b770(&this_ptr->height_delta,"heightDelta");
    core_actor_cpp_archiveFloat_FUN_0040b770(&this_ptr->time_to_move,"timeToMoveUp");
    core_actor_cpp_archiveFloat_FUN_0040b770(&this_ptr->time_to_move_down,"timeToMoveDown")
    ;
    core_actor_cpp_archiveString_FUN_0040b5c0(this_ptr->move_sound,"moveUpSound");
    core_actor_cpp_archiveString_FUN_0040b5c0(this_ptr->move_down_sound,"moveDownSound");
    core_actor_cpp_archiveString_FUN_0040b5c0(this_ptr->move_event,"moveUpEvent");
    core_actor_cpp_archiveString_FUN_0040b5c0(this_ptr->move_down_event,"moveDownEvent");
    core_actor_cpp_archiveFloat_FUN_0040b770(&this_ptr->param,"param");
    core_actor_cpp_archiveInteger_FUN_0040b7f0(&this_ptr->state,"state");
  }
  if (3 < g_CWaterActorVersion) {
    core_actor_cpp_archiveFloat_FUN_0040b770(&this_ptr->patch_size,"patchSize");
  }
  if (4 < g_CWaterActorVersion) {
    core_actor_cpp_archiveInteger_FUN_0040b7f0(&this_ptr->round_flag,"roundFlag");
  }
  if (g_CWaterActorVersion < 6) {
    return;
  }
  core_actor_cpp_archiveInteger_FUN_0040b7f0(&this_ptr->col_r,"colR");
  core_actor_cpp_archiveInteger_FUN_0040b7f0(&this_ptr->col_g,"colG");
  core_actor_cpp_archiveInteger_FUN_0040b7f0(&this_ptr->col_b,"colB");
  return;
}
