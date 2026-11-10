// Name: core_hostage.cpp_CDemnfolk_archive_FUN_004583c0
// Address: 004583c0
// Address Range: [[004583c0, 00458525]]
// Convention: __cdecl
// Signature: void __cdecl core_hostage_cpp_CDemnfolk_archive_FUN_004583c0(CDemnfolk *this_ptr)

#include "nocturne.h"

void __cdecl core_hostage_cpp_CDemnfolk_archive_FUN_004583c0(CDemnfolk *this_ptr)

{
  core_enemy_cpp_CEnemy_archive_FUN_00489120((CEnemy *)this_ptr);
  core_actor_cpp_archiveFloat_FUN_0040b830(&this_ptr->field_0xcdcc,"speed");
  core_actor_cpp_archiveDeformableModelInstance_FUN_0040ba30
            ((CDeformableModelInstance *)&this_ptr->field_0x158,"modelName");
  if (1 < g_CDemnfolkClassVersion) {
    if (g_CDemnfolkClassVersion < 0xb) {
      core_actor_cpp_archiveFloat_FUN_0040b830(&this_ptr->field_0xcddc,"guardDistance");
    }
    core_actor_cpp_archiveMotionState_FUN_0040bab0
              ((CMotionController *)&this_ptr->field_0x158,"motion state");
  }
  if (2 < g_CDemnfolkClassVersion) {
    core_actor_cpp_archivePartStatus_FUN_0040bba0
              ((CDeformableModelInstance *)&this_ptr->field_0x158,"partStatus");
    if (g_CDemnfolkClassVersion < 7) {
      core_actor_cpp_archiveActor_FUN_0040b930(&this_ptr->field_0x2628,"carriedActor");
    }
  }
  if (3 < g_CDemnfolkClassVersion) {
    core_actor_cpp_archiveString_FUN_0040b680
              (&this_ptr->field_0xd074,"riseFromGraveCondition");
  }
  if (4 < g_CDemnfolkClassVersion) {
    core_actor_cpp_archiveActor_FUN_0040b930(&this_ptr->field_0xd06c,"graveActor");
  }
  if ((5 < g_CDemnfolkClassVersion) && (g_CDemnfolkClassVersion < 9)) {
    core_actor_cpp_archiveClothList_FUN_0040bf20(&this_ptr->field_0x2f08,"clothList");
  }
  if (7 < g_CDemnfolkClassVersion) {
    core_actor_cpp_archiveInteger_FUN_0040b8b0
              ((int *)&this_ptr->field_0xd0d8,"isMinerZombie");
  }
  if (9 < g_CDemnfolkClassVersion) {
    core_actor_cpp_archiveInteger_FUN_0040b8b0
              ((int *)&this_ptr->field_0xd0e0,"alwaysChaseFast");
  }
  if (g_CDemnfolkClassVersion < 0xc) {
    return;
  }
  core_actor_cpp_archiveInteger_FUN_0040b8b0
            ((int *)&this_ptr->field_0xd0dc,"isIndoorDemon");
  return;
}
