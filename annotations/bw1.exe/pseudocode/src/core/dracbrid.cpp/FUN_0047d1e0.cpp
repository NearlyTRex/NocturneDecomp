// Name: core_dracbrid.cpp_FUN_0047d1e0
// Address: 0047d1e0
// Address Range: [[0047d1e0, 0047d429]]
// Convention: unknown
// Signature: void core_dracbrid_cpp_FUN_0047d1e0(CEnemy *param_1)

#include "nocturne.h"

void core_dracbrid_cpp_FUN_0047d1e0(CEnemy *param_1)

{
  int iVar1;
  byte *puVar2;
  char *pcVar3;
  int iStack_14;
  
  core_enemy_cpp_CEnemy_archive_FUN_004a0520(param_1);
  if (g_CDraculaBrideClassVersion < 2) {
    core_actor_cpp_archiveFloat_FUN_0040b5f0(&param_1->field_0xc1d0,"?speed" + 1);
  }
  core_actor_cpp_FUN_0040b7f0
            ((CDeformableModelInstance *)&param_1->field_0x158,"modelName");
  if ((1 < g_CDraculaBrideClassVersion) && (g_CDraculaBrideClassVersion < 6)) {
    core_actor_cpp_archiveFloat_FUN_0040b5f0(&param_1->field_0xc1e0,"guardDistance");
  }
  if (((2 < g_CDraculaBrideClassVersion) &&
      (core_actor_cpp_archiveString_FUN_0040b440(&param_1[1].field_0x24,"riseEvent"),
      g_CDraculaBrideClassVersion < 4)) &&
     (core_actor_cpp_archiveInteger_FUN_0040b670(&iStack_14,"initialState"),
     DAT_007c3038 == 1)) {
    if (iStack_14 == 1) {
      pcVar3 = "vincoffin";
    }
    else {
      pcVar3 = "incoffin";
    }
    core_motion_cpp_CMotionController_jumpToMotionByName_FUN_00524ae0
              ((CMotionController *)&param_1->field_0x158,pcVar3,0.0);
  }
  if (3 < g_CDraculaBrideClassVersion) {
    core_actor_cpp_FUN_0040b870((CMotionController *)&param_1->field_0x158,"motionState");
  }
  if (g_CDraculaBrideClassVersion == 4) {
    iVar1 = 0;
    core_actor_cpp_archiveInteger_FUN_0040b670((int *)&param_1->field_0x2ca0,"clothCount");
    if (0 < *(int *)&param_1->field_0x2ca0) {
      pcVar3 = &param_1->field_0x2ca4;
      do {
        iVar1 = iVar1 + 1;
        core_actor_cpp_archiveString_FUN_0040b440(pcVar3,(char *)0x0);
        pcVar3 = pcVar3 + 0x28;
      } while (iVar1 < *(int *)&param_1->field_0x2ca0);
    }
  }
  if (6 < g_CDraculaBrideClassVersion) {
    core_actor_cpp_archiveInteger_FUN_0040b670
              ((int *)&param_1[1].field_0x88,"freakyVoiceNumber");
  }
  if (7 < g_CDraculaBrideClassVersion) {
    core_actor_cpp_archiveInteger_FUN_0040b670((int *)&param_1[1].field_0x1a0,"exploded");
    core_actor_cpp_archiveInteger_FUN_0040b670((int *)&param_1[1].field_0xac,"partCount");
    iVar1 = 0;
    core_actor_cpp_archiveFloat_FUN_0040b5f0(&param_1[1].field_0x1a4,"fadeTimer");
    if (0 < *(int *)&param_1[1].field_0xac) {
      puVar2 = &param_1[1].field_0xb0;
      do {
        iVar1 = iVar1 + 1;
        core_actor_cpp_archiveActor_FUN_0040b6f0(puVar2,"partList");
        puVar2 = puVar2 + 4;
      } while (iVar1 < *(int *)&param_1[1].field_0xac);
    }
  }
  if (8 < g_CDraculaBrideClassVersion) {
    core_actor_cpp_archiveInteger_FUN_0040b670((int *)&param_1[1].field_0x8c,"mistState");
    core_actor_cpp_archiveFloat_FUN_0040b5f0(&param_1[1].field_0x90,"vanishTimer");
    core_actor_cpp_archiveVector_FUN_0040b1c0(&param_1[1].field_0x9c,"newPos");
    return;
  }
  return;
}
