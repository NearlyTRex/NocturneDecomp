// Name: core_zombie.cpp_FUN_005996d0
// Address: 005996d0
// Address Range: [[005996d0, 005998e6]]
// Convention: unknown
// Signature: void core_zombie_cpp_FUN_005996d0(CZombie *param_1,SDamageInfo *param_2)

#include "nocturne.h"

void core_zombie_cpp_FUN_005996d0(CZombie *param_1,SDamageInfo *param_2)

{
  int iVar1;
  CMotionList *this_ptr;
  uint uVar2;
  char *pcVar3;
  int iVar4;
  
  core_zombie_cpp_FUN_00599400(param_1,param_2);
  (**(code **)(*(int *)&param_1->field_0x2b0 + 0x100))(param_1);
  *(float *)&param_1->field_0x25a8 = *(float *)&param_1->field_0x25a8 - *(float *)(param_2 + 4);
  if (*(int *)(&param_1->field_0x23f4 + *(int *)&param_1->field_0x10bcc * 4) == 0) {
    *(uint *)&param_1->field_0x25a8 = 0;
  }
  *(uint *)&param_1->field_0x10a74 = 0x3f99999a;
  if (0.0 < *(float *)&param_1->field_0x25a8) {
    core_motion_cpp_CMotionController_setDesiredState_FUN_00503620
              ((CMotionController *)&param_1->field_0x2b4,4,1);
    if (*(float *)&param_1->field_0x10bd0 <= 0.0) {
      *(uint *)&param_1->field_0x10bd0 = 0x40000000;
      iVar1 = sound_sndmain_cpp_FUN_00550b70(*(uint *)&param_1->field_0x10bd8);
      if (iVar1 == 0) {
        if (*(int *)&param_1->field_0x10b84 != 0) {
          uVar2 = (**(code **)(*(int *)&param_1->field_0x2b0 + 0x34))
                            (param_1,"f-zombie-hit?.wav");
          *(uint *)&param_1->field_0x10bd8 = uVar2;
          core_enemy_cpp_FUN_00488890(param_1,param_2);
          return;
        }
        uVar2 = (**(code **)(*(int *)&param_1->field_0x2b0 + 0x34))(param_1,"zom-s0?.wav");
        *(uint *)&param_1->field_0x10bd8 = uVar2;
        core_enemy_cpp_FUN_00488890(param_1,param_2);
        return;
      }
    }
  }
  else {
    *(uint *)&param_1->field_0x25a8 = 0;
    iVar1 = core_motion_cpp_FUN_005035c0(&param_1->field_0x2b4);
    if ((*(int *)(iVar1 + 0x24) != 8) && (*(int *)(iVar1 + 0x24) != 7)) {
      core_zombie_cpp_FUN_00598f20(param_1);
      iVar1 = 6;
      if ((*(int *)(&param_1->field_0x23f4 + *(int *)&param_1->field_0x10bcc * 4) == 0) &&
         ((*(int *)(&param_1->field_0x23f4 + *(int *)&param_1->field_0x10bbc * 4) != 0 ||
          (*(int *)(&param_1->field_0x23f4 + *(int *)&param_1->field_0x10bb4 * 4) != 0)))) {
        iVar4 = 0;
        pcVar3 = "@lookForHead" + 1;
        this_ptr = core_motion_cpp_FUN_00503860((CMotionController *)&param_1->field_0x2b4);
        iVar4 = core_motion_cpp_FUN_00502f10(this_ptr,pcVar3,iVar4);
        if (-1 < iVar4) {
          iVar1 = 9;
        }
      }
      core_motion_cpp_CMotionController_setDesiredState_FUN_00503620
                ((CMotionController *)&param_1->field_0x2b4,iVar1,1);
      sound_sndmain_cpp_killSfx_FUN_00551050(*(uint *)&param_1->field_0x10bd8);
      if (*(int *)&param_1->field_0x10b84 == 0) {
        pcVar3 = "zom-d0?.wav";
      }
      else {
        pcVar3 = "f-zombie-die?.wav";
      }
      (**(code **)(*(int *)&param_1->field_0x2b0 + 0x34))(param_1,pcVar3);
      (**(code **)(*(int *)&param_1->field_0x2b0 + 0xb0))(param_1,0x32,0x41c80000);
    }
  }
  core_enemy_cpp_FUN_00488890(param_1,param_2);
  return;
}
