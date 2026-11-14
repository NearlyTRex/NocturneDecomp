// Name: core_wateract.cpp_CWaterActor_archive_FUN_005876d0
// Address: 005876d0
// Address Range: [[005876d0, 005878c1]]
// Convention: __cdecl
// Signature: void __cdecl core_wateract_cpp_CWaterActor_archive_FUN_005876d0(CWaterActor *this_ptr)

#include "nocturne.h"

void __cdecl core_wateract_cpp_CWaterActor_archive_FUN_005876d0(CWaterActor *this_ptr)

{
  core_actor_cpp_CDemonActor_archive_FUN_0040c330(&this_ptr->base);
  core_actor_cpp_archiveVector_FUN_0040b4b0(&this_ptr->size,&DAT_005edfc6);
  core_actor_cpp_archiveInteger_FUN_0040b960(&this_ptr->opacity,"opacity");
  if (g_CWaterActorClassVersion == 2) {
    core_actor_cpp_archiveFloat_FUN_0040b8e0(&this_ptr->height_delta,"heightDelta");
    core_actor_cpp_archiveFloat_FUN_0040b8e0(&this_ptr->time_to_move,"timeToMove");
    core_actor_cpp_archiveString_FUN_0040b730(this_ptr->move_sound,"moveSound");
    core_actor_cpp_archiveString_FUN_0040b730(this_ptr->move_event,"moveEvent");
    core_actor_cpp_archiveFloat_FUN_0040b8e0(&this_ptr->param,"param");
  }
  if (2 < g_CWaterActorClassVersion) {
    core_actor_cpp_archiveFloat_FUN_0040b8e0(&this_ptr->height_delta,"heightDelta");
    core_actor_cpp_archiveFloat_FUN_0040b8e0(&this_ptr->time_to_move,"timeToMoveUp");
    core_actor_cpp_archiveFloat_FUN_0040b8e0(&this_ptr->time_to_move_down,"timeToMoveDown")
    ;
    core_actor_cpp_archiveString_FUN_0040b730(this_ptr->move_sound,"moveUpSound");
    core_actor_cpp_archiveString_FUN_0040b730(this_ptr->move_down_sound,"moveDownSound");
    core_actor_cpp_archiveString_FUN_0040b730(this_ptr->move_event,"moveUpEvent");
    core_actor_cpp_archiveString_FUN_0040b730(this_ptr->move_down_event,"moveDownEvent");
    core_actor_cpp_archiveFloat_FUN_0040b8e0(&this_ptr->param,"param");
    core_actor_cpp_archiveInteger_FUN_0040b960((int *)&this_ptr->state,"state");
  }
  if (3 < g_CWaterActorClassVersion) {
    core_actor_cpp_archiveFloat_FUN_0040b8e0(&this_ptr->patch_size,"patchSize");
  }
  if (4 < g_CWaterActorClassVersion) {
    core_actor_cpp_archiveInteger_FUN_0040b960(&this_ptr->round_flag,"roundFlag");
  }
  if (g_CWaterActorClassVersion < 6) {
    return;
  }
  core_actor_cpp_archiveInteger_FUN_0040b960(&(this_ptr->color).r,&DAT_005ee080);
  core_actor_cpp_archiveInteger_FUN_0040b960(&(this_ptr->color).g,&DAT_005ee085);
  core_actor_cpp_archiveInteger_FUN_0040b960(&(this_ptr->color).b,&DAT_005ee08a);
  return;
}
