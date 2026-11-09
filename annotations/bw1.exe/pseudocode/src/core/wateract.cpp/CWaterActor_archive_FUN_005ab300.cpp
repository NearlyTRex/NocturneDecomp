// Name: core_wateract.cpp_CWaterActor_archive_FUN_005ab300
// Address: 005ab300
// Address Range: [[005ab300, 005ab4f1]]
// Convention: __cdecl
// Signature: void __cdecl core_wateract_cpp_CWaterActor_archive_FUN_005ab300(CWaterActor *this_ptr)

#include "nocturne.h"

void __cdecl core_wateract_cpp_CWaterActor_archive_FUN_005ab300(CWaterActor *this_ptr)

{
  core_actor_cpp_CDemonActor_archive_FUN_0040c040((CDemonActor *)this_ptr);
  core_actor_cpp_archiveVector_FUN_0040b1c0(&this_ptr->field_0x158,&DAT_005f9322);
  core_actor_cpp_archiveInteger_FUN_0040b670((int *)&this_ptr->field_0x164,"opacity");
  if (g_CWaterActorClassVersion == 2) {
    core_actor_cpp_archiveFloat_FUN_0040b5f0(&this_ptr->field_0x168,"heightDelta");
    core_actor_cpp_archiveFloat_FUN_0040b5f0(&this_ptr->field_0x16c,"timeToMove");
    core_actor_cpp_archiveString_FUN_0040b440(&this_ptr->field_0x174,"moveSound");
    core_actor_cpp_archiveString_FUN_0040b440(&this_ptr->field_0x1b4,"moveEvent");
    core_actor_cpp_archiveFloat_FUN_0040b5f0(&this_ptr->field_0x27c,"param");
  }
  if (2 < g_CWaterActorClassVersion) {
    core_actor_cpp_archiveFloat_FUN_0040b5f0(&this_ptr->field_0x168,"heightDelta");
    core_actor_cpp_archiveFloat_FUN_0040b5f0(&this_ptr->field_0x16c,"timeToMoveUp");
    core_actor_cpp_archiveFloat_FUN_0040b5f0(&this_ptr->field_0x170,"timeToMoveDown");
    core_actor_cpp_archiveString_FUN_0040b440(&this_ptr->field_0x174,"moveUpSound");
    core_actor_cpp_archiveString_FUN_0040b440(&this_ptr->field_0x194,"moveDownSound");
    core_actor_cpp_archiveString_FUN_0040b440(&this_ptr->field_0x1b4,"moveUpEvent");
    core_actor_cpp_archiveString_FUN_0040b440(&this_ptr->field_0x218,"moveDownEvent");
    core_actor_cpp_archiveFloat_FUN_0040b5f0(&this_ptr->field_0x27c,"param");
    core_actor_cpp_archiveInteger_FUN_0040b670((int *)&this_ptr->field_0x280,"state");
  }
  if (3 < g_CWaterActorClassVersion) {
    core_actor_cpp_archiveFloat_FUN_0040b5f0(&this_ptr->field_0x284,"patchSize");
  }
  if (4 < g_CWaterActorClassVersion) {
    core_actor_cpp_archiveInteger_FUN_0040b670((int *)&this_ptr->field_0x288,"roundFlag");
  }
  if (g_CWaterActorClassVersion < 6) {
    return;
  }
  core_actor_cpp_archiveInteger_FUN_0040b670((int *)&this_ptr->field_0x28c,&DAT_005f93dc);
  core_actor_cpp_archiveInteger_FUN_0040b670((int *)&this_ptr->field_0x290,&DAT_005f93e1);
  core_actor_cpp_archiveInteger_FUN_0040b670((int *)&this_ptr->field_0x294,&DAT_005f93e6);
  return;
}
