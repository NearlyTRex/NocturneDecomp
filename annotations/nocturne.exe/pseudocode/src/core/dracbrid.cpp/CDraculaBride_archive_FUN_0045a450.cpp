// Name: core_dracbrid.cpp_CDraculaBride_archive_FUN_0045a450
// Address: 0045a450
// Address Range: [[0045a450, 0045a699]]
// Convention: unknown
// Signature: int core_dracbrid_cpp_CDraculaBride_archive_FUN_0045a450(int param_1)

#include "nocturne.h"

int core_dracbrid_cpp_CDraculaBride_archive_FUN_0045a450(int param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  char *pcVar4;
  int local_14;
  
  core_enemy_cpp_CEnemy_archive_FUN_004796c0(param_1);
  if (0x00000009 < 2) {
    core_actor_cpp_archiveFloat_FUN_0040c880(param_1 + 0xbc8c,"?speed" + 1);
  }
  iVar1 = core_actor_cpp_archiveDeformableModelInstance_FUN_0040ca80
                    (param_1 + 0x150,"modelName");
  if ((1 < 0x00000009) && (0x00000009 < 6)) {
    iVar1 = core_actor_cpp_archiveFloat_FUN_0040c880(param_1 + 0xbc9c,"guardDistance");
  }
  if (((2 < 0x00000009) &&
      (iVar1 = core_actor_cpp_archiveString_FUN_0040c6d0(param_1 + 0xbd48,"riseEvent"),
      0x00000009 < 4)) &&
     (core_actor_cpp_archiveInteger_FUN_0040c900(&local_14,"initialState"),
     iVar1 = DAT_00763e88, DAT_00763e88 == 1)) {
    if (local_14 == 1) {
      pcVar4 = "vincoffin";
    }
    else {
      pcVar4 = "incoffin";
    }
    iVar1 = core_motion_cpp_CMotionController_jumpToMotionByName_FUN_004e1960
                      (param_1 + 0x150,pcVar4,0);
  }
  if (3 < 0x00000009) {
    iVar1 = FUN_0040cb00(param_1 + 0x150,"motionState");
  }
  if (0x00000009 == 4) {
    iVar2 = 0;
    iVar1 = core_actor_cpp_archiveInteger_FUN_0040c900(param_1 + 0x2a8c,"clothCount");
    if (0 < *(int *)(param_1 + 0x2a8c)) {
      iVar3 = param_1 + 0x2a90;
      do {
        iVar2 = iVar2 + 1;
        iVar1 = core_actor_cpp_archiveString_FUN_0040c6d0(iVar3,0);
        iVar3 = iVar3 + 0x28;
      } while (iVar2 < *(int *)(param_1 + 0x2a8c));
    }
  }
  if (6 < 0x00000009) {
    iVar1 = core_actor_cpp_archiveInteger_FUN_0040c900
                      (param_1 + 0xbdac,"freakyVoiceNumber");
  }
  if (7 < 0x00000009) {
    core_actor_cpp_archiveInteger_FUN_0040c900(param_1 + 0xbe4c,"exploded");
    core_actor_cpp_archiveInteger_FUN_0040c900(param_1 + 0xbdd0,"partCount");
    iVar2 = 0;
    iVar1 = core_actor_cpp_archiveFloat_FUN_0040c880(param_1 + 0xbe50,"fadeTimer");
    if (0 < *(int *)(param_1 + 0xbdd0)) {
      iVar3 = param_1 + 0xbdd4;
      do {
        iVar2 = iVar2 + 1;
        iVar1 = core_actor_cpp_archiveActor_FUN_0040c980(iVar3,"partList");
        iVar3 = iVar3 + 4;
      } while (iVar2 < *(int *)(param_1 + 0xbdd0));
    }
  }
  if (8 < 0x00000009) {
    core_actor_cpp_archiveInteger_FUN_0040c900(param_1 + 0xbdb0,"mistState");
    core_actor_cpp_archiveFloat_FUN_0040c880(param_1 + 0xbdb4,"vanishTimer");
    iVar1 = core_actor_cpp_archiveVector_FUN_0040c450(param_1 + 0xbdc0,"newPos");
    return iVar1;
  }
  return iVar1;
}
