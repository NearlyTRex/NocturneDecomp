// Name: core_zombprie.cpp_CZombiePriest_archive_FUN_0058f510
// Address: 0058f510
// Address Range: [[0058f510, 0058f602]]
// Convention: __cdecl
// Signature: void __cdecl core_zombprie_cpp_CZombiePriest_archive_FUN_0058f510(CZombiePriest *this_ptr)

#include "nocturne.h"

void __cdecl core_zombprie_cpp_CZombiePriest_archive_FUN_0058f510(CZombiePriest *this_ptr)

{
  core_enemy_cpp_CEnemy_archive_FUN_00489120((CEnemy *)this_ptr);
  core_actor_cpp_archiveFloat_FUN_0040b830(&this_ptr->field_0xcdcc,"?speed" + 1);
  core_actor_cpp_archiveDeformableModelInstance_FUN_0040ba30
            ((CDeformableModelInstance *)&this_ptr->field_0x158,"modelName");
  if (g_CZombiePriestClassVersion < 4) {
    core_actor_cpp_archiveFloat_FUN_0040b830(&this_ptr->field_0xcddc,"guardDistance");
  }
  core_actor_cpp_archiveMotionState_FUN_0040bab0
            ((CMotionController *)&this_ptr->field_0x158,"motion state");
  if (g_CZombiePriestClassVersion == 2) {
    core_actor_cpp_archiveClothList_FUN_0040bf20(&this_ptr->field_0x2f08,"clothList");
  }
  if (4 < g_CZombiePriestClassVersion) {
    core_actor_cpp_archiveInteger_FUN_0040b8b0((int *)&this_ptr->field_0xd064,"postMode");
    core_actor_cpp_archiveActor_FUN_0040b930(&this_ptr->field_0xd068,"ourPost");
  }
  if (g_CZombiePriestClassVersion < 7) {
    return;
  }
  core_actor_cpp_archiveInteger_FUN_0040b8b0((int *)&this_ptr->field_0xd06c,"holdPosFlag");
  core_actor_cpp_archiveString_FUN_0040b680(&this_ptr->field_0xd070,"holdPosCond");
  return;
}
