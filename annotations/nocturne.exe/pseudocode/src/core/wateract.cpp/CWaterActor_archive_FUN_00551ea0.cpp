// Name: core_wateract.cpp_CWaterActor_archive_FUN_00551ea0
// Address: 00551ea0
// Address Range: [[00551ea0, 00552091]]
// Convention: __cdecl
// Signature: void __cdecl core_wateract_cpp_CWaterActor_archive_FUN_00551ea0(CWaterActor *this_ptr)

#include "nocturne.h"

void __cdecl core_wateract_cpp_CWaterActor_archive_FUN_00551ea0(CWaterActor *this_ptr)

{
  core_actor_cpp_CDemonActor_archive_FUN_0040d2d0(&this_ptr->base);
  core_actor_cpp_archiveVector_FUN_0040c450(&this_ptr->size,"size");
  core_actor_cpp_archiveInteger_FUN_0040c900(&this_ptr->opacity,"opacity");
  if (g_INT_005c154c == 2) {
    core_actor_cpp_archiveFloat_FUN_0040c880(&this_ptr->height_delta,"heightDelta");
    core_actor_cpp_archiveFloat_FUN_0040c880(&this_ptr->time_to_move,"timeToMove");
    core_actor_cpp_archiveString_FUN_0040c6d0(this_ptr->move_sound,"moveSound");
    core_actor_cpp_archiveString_FUN_0040c6d0(this_ptr->move_event,"moveEvent");
    core_actor_cpp_archiveFloat_FUN_0040c880(&this_ptr->param,"param");
  }
  if (2 < g_INT_005c154c) {
    core_actor_cpp_archiveFloat_FUN_0040c880(&this_ptr->height_delta,"heightDelta");
    core_actor_cpp_archiveFloat_FUN_0040c880(&this_ptr->time_to_move,"timeToMoveUp");
    core_actor_cpp_archiveFloat_FUN_0040c880(&this_ptr->time_to_move_down,"timeToMoveDown")
    ;
    core_actor_cpp_archiveString_FUN_0040c6d0(this_ptr->move_sound,"moveUpSound");
    core_actor_cpp_archiveString_FUN_0040c6d0(this_ptr->move_down_sound,"moveDownSound");
    core_actor_cpp_archiveString_FUN_0040c6d0(this_ptr->move_event,"moveUpEvent");
    core_actor_cpp_archiveString_FUN_0040c6d0(this_ptr->move_down_event,"moveDownEvent");
    core_actor_cpp_archiveFloat_FUN_0040c880(&this_ptr->param,"param");
    core_actor_cpp_archiveInteger_FUN_0040c900(&this_ptr->state,"state");
  }
  if (3 < g_INT_005c154c) {
    core_actor_cpp_archiveFloat_FUN_0040c880(&this_ptr->patch_size,"patchSize");
  }
  if (4 < g_INT_005c154c) {
    core_actor_cpp_archiveInteger_FUN_0040c900(&this_ptr->round_flag,"roundFlag");
  }
  if (g_INT_005c154c < 6) {
    return;
  }
  core_actor_cpp_archiveInteger_FUN_0040c900(&(this_ptr->color).r,"colR");
  core_actor_cpp_archiveInteger_FUN_0040c900(&(this_ptr->color).g,"colG");
  core_actor_cpp_archiveInteger_FUN_0040c900(&(this_ptr->color).b,"colB");
  return;
}
