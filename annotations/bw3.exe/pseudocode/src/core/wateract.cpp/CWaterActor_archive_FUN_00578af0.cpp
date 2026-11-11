// Name: core_wateract.cpp_CWaterActor_archive_FUN_00578af0
// Address: 00578af0
// Address Range: [[00578af0, 00578cfe]]
// Convention: __cdecl
// Signature: void __cdecl core_wateract_cpp_CWaterActor_archive_FUN_00578af0(CWaterActor *this_ptr)

#include "nocturne.h"

void __cdecl core_wateract_cpp_CWaterActor_archive_FUN_00578af0(CWaterActor *this_ptr)

{
  core_actor_cpp_CDemonActor_archive_FUN_0040c280(&this_ptr->base);
  core_actor_cpp_archiveVector_FUN_0040b400(&this_ptr->size,&DAT_005d7293);
  core_actor_cpp_archiveInteger_FUN_0040b8b0(&this_ptr->opacity,"opacity");
  if (g_CWaterActorClassVersion == 2) {
    core_actor_cpp_archiveFloat_FUN_0040b830(&this_ptr->height_delta,"heightDelta");
    core_actor_cpp_archiveFloat_FUN_0040b830(&this_ptr->time_to_move,"timeToMove");
    core_actor_cpp_archiveString_FUN_0040b680(this_ptr->move_sound,"moveSound");
    core_actor_cpp_archiveString_FUN_0040b680(this_ptr->move_event,"moveEvent");
    core_actor_cpp_archiveFloat_FUN_0040b830(&this_ptr->param,"param");
  }
  if (2 < g_CWaterActorClassVersion) {
    core_actor_cpp_archiveFloat_FUN_0040b830(&this_ptr->height_delta,"heightDelta");
    core_actor_cpp_archiveFloat_FUN_0040b830(&this_ptr->time_to_move,"timeToMoveUp");
    core_actor_cpp_archiveFloat_FUN_0040b830(&this_ptr->time_to_move_down,"timeToMoveDown")
    ;
    core_actor_cpp_archiveString_FUN_0040b680(this_ptr->move_sound,"moveUpSound");
    core_actor_cpp_archiveString_FUN_0040b680(this_ptr->move_down_sound,"moveDownSound");
    core_actor_cpp_archiveString_FUN_0040b680(this_ptr->move_event,"moveUpEvent");
    core_actor_cpp_archiveString_FUN_0040b680(this_ptr->move_down_event,"moveDownEvent");
    core_actor_cpp_archiveFloat_FUN_0040b830(&this_ptr->param,"param");
    core_actor_cpp_archiveInteger_FUN_0040b8b0((int *)&this_ptr->state,"state");
  }
  if (3 < g_CWaterActorClassVersion) {
    core_actor_cpp_archiveFloat_FUN_0040b830(&this_ptr->patch_size,"patchSize");
  }
  if (4 < g_CWaterActorClassVersion) {
    core_actor_cpp_archiveInteger_FUN_0040b8b0(&this_ptr->round_flag,"roundFlag");
  }
  if (5 < g_CWaterActorClassVersion) {
    core_actor_cpp_archiveInteger_FUN_0040b8b0(&(this_ptr->color).r,&DAT_005d734d);
    core_actor_cpp_archiveInteger_FUN_0040b8b0(&(this_ptr->color).g,&DAT_005d7352);
    core_actor_cpp_archiveInteger_FUN_0040b8b0(&(this_ptr->color).b,&DAT_005d7357);
  }
  if (g_CWaterActorClassVersion < 7) {
    return;
  }
  core_actor_cpp_archiveInteger_FUN_0040b8b0(&this_ptr->is_lava,"is_lava");
  return;
}
