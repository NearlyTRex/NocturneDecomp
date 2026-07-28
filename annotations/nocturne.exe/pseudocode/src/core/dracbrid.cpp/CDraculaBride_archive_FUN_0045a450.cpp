// Name: core_dracbrid.cpp_CDraculaBride_archive_FUN_0045a450
// Address: 0045a450
// Address Range: [[0045a450, 0045a699]]
// Convention: unknown
// Signature: void core_dracbrid_cpp_CDraculaBride_archive_FUN_0045a450(CEnemy *param_1)

#include "nocturne.h"

void core_dracbrid_cpp_CDraculaBride_archive_FUN_0045a450(CEnemy *param_1)

{
  int iVar1;
  char (*string_buffer) [40];
  char *pcVar2;
  int local_14;
  
  core_enemy_cpp_CEnemy_archive_FUN_004796c0(param_1);
  if (g_INT_005ae6c8 < 2) {
    core_actor_cpp_archiveFloat_FUN_0040c880(&param_1->speed,"speed");
  }
  core_actor_cpp_archiveDeformableModelInstance_FUN_0040ca80
            (&(param_1->base).model,"modelName");
  if ((1 < g_INT_005ae6c8) && (g_INT_005ae6c8 < 6)) {
    core_actor_cpp_archiveFloat_FUN_0040c880(&param_1->guard_distance,"guardDistance");
  }
  if (((2 < g_INT_005ae6c8) &&
      (core_actor_cpp_archiveString_FUN_0040c6d0
                 ((char *)&param_1[1].base.base.location.position.y,"riseEvent"),
      g_INT_005ae6c8 < 4)) &&
     (core_actor_cpp_archiveInteger_FUN_0040c900(&local_14,"initialState"),
     DAT_00763e88 == 1)) {
    if (local_14 == 1) {
      pcVar2 = "vincoffin";
    }
    else {
      pcVar2 = "incoffin";
    }
    core_motion_cpp_CMotionController_jumpToMotionByName_FUN_004e1960
              (&(param_1->base).model.motion_controller,pcVar2,0.0);
  }
  if (3 < g_INT_005ae6c8) {
    core_actor_cpp_archiveMotionState_FUN_0040cb00
              (&(param_1->base).model.motion_controller,"motionState");
  }
  if (g_INT_005ae6c8 == 4) {
    iVar1 = 0;
    core_actor_cpp_archiveInteger_FUN_0040c900
              (&(param_1->base).cloth_list.count,"clothCount");
    if (0 < (param_1->base).cloth_list.count) {
      string_buffer = (param_1->base).cloth_list.filenames;
      do {
        iVar1 = iVar1 + 1;
        core_actor_cpp_archiveString_FUN_0040c6d0(*string_buffer,(char *)0x0);
        string_buffer = string_buffer + 1;
      } while (iVar1 < (param_1->base).cloth_list.count);
    }
  }
  if (6 < g_INT_005ae6c8) {
    core_actor_cpp_archiveInteger_FUN_0040c900
              ((int *)(param_1[1].base.base.create_event + 0x10),"freakyVoiceNumber");
  }
  if (7 < g_INT_005ae6c8) {
    core_actor_cpp_archiveInteger_FUN_0040c900
              ((int *)&param_1[1].base.base.previous_transform_state,"exploded");
    core_actor_cpp_archiveInteger_FUN_0040c900
              ((int *)(param_1[1].base.base.create_event + 0x34),"partCount");
    iVar1 = 0;
    core_actor_cpp_archiveFloat_FUN_0040c880
              (&param_1[1].base.base.previous_transform_state.position.y,"fadeTimer");
    if (0 < *(int *)(param_1[1].base.base.create_event + 0x34)) {
      pcVar2 = param_1[1].base.base.create_event + 0x38;
      do {
        iVar1 = iVar1 + 1;
        core_actor_cpp_archiveActor_FUN_0040c980((CDemonActor **)pcVar2,"partList");
        pcVar2 = pcVar2 + 4;
      } while (iVar1 < *(int *)(param_1[1].base.base.create_event + 0x34));
    }
  }
  if (8 < g_INT_005ae6c8) {
    core_actor_cpp_archiveInteger_FUN_0040c900
              ((int *)(param_1[1].base.base.create_event + 0x14),"mistState");
    core_actor_cpp_archiveFloat_FUN_0040c880
              ((float *)(param_1[1].base.base.create_event + 0x18),"vanishTimer");
    core_actor_cpp_archiveVector_FUN_0040c450
              ((CVector3f *)(param_1[1].base.base.create_event + 0x24),"newPos");
    return;
  }
  return;
}
