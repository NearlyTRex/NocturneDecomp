// Name: unkafter_demnfolk.cpp_FUN_0045c1e0
// Address: 0045c1e0
// Address Range: [[0045c1e0, 0045c345]]
// Convention: unknown
// Signature: void unkafter_demnfolk_cpp_FUN_0045c1e0(CEnemy *param_1)

#include "nocturne.h"

void unkafter_demnfolk_cpp_FUN_0045c1e0(CEnemy *param_1)

{
  core_enemy_cpp_CEnemy_archive_FUN_004a0520(param_1);
  core_actor_cpp_archiveFloat_FUN_0040b5f0(&param_1->field_0xc1d0,"speed");
  core_actor_cpp_FUN_0040b7f0
            ((CDeformableModelInstance *)&param_1->field_0x158,"modelName");
  if (1 < g_CDemnfolkClassVersion) {
    if (g_CDemnfolkClassVersion < 0xb) {
      core_actor_cpp_archiveFloat_FUN_0040b5f0(&param_1->field_0xc1e0,"guardDistance");
    }
    core_actor_cpp_FUN_0040b870((CMotionController *)&param_1->field_0x158,"motion state");
  }
  if (2 < g_CDemnfolkClassVersion) {
    core_actor_cpp_FUN_0040b960
              ((CDeformableModelInstance *)&param_1->field_0x158,"partStatus");
    if (g_CDemnfolkClassVersion < 7) {
      core_actor_cpp_archiveActor_FUN_0040b6f0(&param_1->field_0x2628,"carriedActor");
    }
  }
  if (3 < g_CDemnfolkClassVersion) {
    core_actor_cpp_archiveString_FUN_0040b440
              (&param_1[1].field_0x20,"riseFromGraveCondition");
  }
  if (4 < g_CDemnfolkClassVersion) {
    core_actor_cpp_archiveActor_FUN_0040b6f0(&param_1[1].field_0x18,"graveActor");
  }
  if ((5 < g_CDemnfolkClassVersion) && (g_CDemnfolkClassVersion < 9)) {
    core_actor_cpp_archiveClothList_FUN_0040bce0(&param_1->field_0x2ca0,"clothList");
  }
  if (7 < g_CDemnfolkClassVersion) {
    core_actor_cpp_archiveInteger_FUN_0040b670
              ((int *)&param_1[1].field_0x84,"isMinerZombie");
  }
  if (9 < g_CDemnfolkClassVersion) {
    core_actor_cpp_archiveInteger_FUN_0040b670
              ((int *)&param_1[1].field_0x8c,"alwaysChaseFast");
  }
  if (g_CDemnfolkClassVersion < 0xc) {
    return;
  }
  core_actor_cpp_archiveInteger_FUN_0040b670((int *)&param_1[1].field_0x88,"isIndoorDemon")
  ;
  return;
}
