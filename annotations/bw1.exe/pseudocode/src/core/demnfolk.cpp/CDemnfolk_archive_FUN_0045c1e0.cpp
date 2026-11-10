// Name: core_demnfolk.cpp_CDemnfolk_archive_FUN_0045c1e0
// Address: 0045c1e0
// Address Range: [[0045c1e0, 0045c345]]
// Convention: __cdecl
// Signature: void __cdecl core_demnfolk_cpp_CDemnfolk_archive_FUN_0045c1e0(CDemnfolk *this_ptr)

#include "nocturne.h"

void __cdecl core_demnfolk_cpp_CDemnfolk_archive_FUN_0045c1e0(CDemnfolk *this_ptr)

{
  core_enemy_cpp_CEnemy_archive_FUN_004a0520((CEnemy *)this_ptr);
  core_actor_cpp_archiveFloat_FUN_0040b5f0(&this_ptr->field_0xc1d0,"speed");
  core_actor_cpp_archiveDeformableModelInstance_FUN_0040b7f0
            ((CDeformableModelInstance *)&this_ptr->field_0x158,"modelName");
  if (1 < g_CDemnfolkClassVersion) {
    if (g_CDemnfolkClassVersion < 0xb) {
      core_actor_cpp_archiveFloat_FUN_0040b5f0(&this_ptr->field_0xc1e0,"guardDistance");
    }
    core_actor_cpp_archiveMotionState_FUN_0040b870
              ((CMotionController *)&this_ptr->field_0x158,"motion state");
  }
  if (2 < g_CDemnfolkClassVersion) {
    core_actor_cpp_archivePartStatus_FUN_0040b960
              ((CDeformableModelInstance *)&this_ptr->field_0x158,"partStatus");
    if (g_CDemnfolkClassVersion < 7) {
      core_actor_cpp_archiveActor_FUN_0040b6f0(&this_ptr->field_0x2628,"carriedActor");
    }
  }
  if (3 < g_CDemnfolkClassVersion) {
    core_actor_cpp_archiveString_FUN_0040b440
              (&this_ptr->field_0xc288,"riseFromGraveCondition");
  }
  if (4 < g_CDemnfolkClassVersion) {
    core_actor_cpp_archiveActor_FUN_0040b6f0(&this_ptr->field_0xc280,"graveActor");
  }
  if ((5 < g_CDemnfolkClassVersion) && (g_CDemnfolkClassVersion < 9)) {
    core_actor_cpp_archiveClothList_FUN_0040bce0(&this_ptr->field_0x2ca0,"clothList");
  }
  if (7 < g_CDemnfolkClassVersion) {
    core_actor_cpp_archiveInteger_FUN_0040b670
              ((int *)&this_ptr->field_0xc2ec,"isMinerZombie");
  }
  if (9 < g_CDemnfolkClassVersion) {
    core_actor_cpp_archiveInteger_FUN_0040b670
              ((int *)&this_ptr->field_0xc2f4,"alwaysChaseFast");
  }
  if (g_CDemnfolkClassVersion < 0xc) {
    return;
  }
  core_actor_cpp_archiveInteger_FUN_0040b670
            ((int *)&this_ptr->field_0xc2f0,"isIndoorDemon");
  return;
}
