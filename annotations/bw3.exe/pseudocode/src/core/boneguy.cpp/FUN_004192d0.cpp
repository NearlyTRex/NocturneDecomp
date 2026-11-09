// Name: core_boneguy.cpp_FUN_004192d0
// Address: 004192d0
// Address Range: [[004192d0, 004193b7]]
// Convention: unknown
// Signature: void core_boneguy_cpp_FUN_004192d0(CBoneGuy *param_1,int param_2)

#include "nocturne.h"

void core_boneguy_cpp_FUN_004192d0(CBoneGuy *param_1,int param_2)

{
  float fVar1;
  SMotion *pSVar2;
  int iVar3;
  
  sound_sndmain_cpp_killSfx_FUN_00556be0(*(uint *)&param_1->field_0xd078);
  if (*(int *)(param_2 + 0x30) == 0x70) {
    return;
  }
  fVar1 = *(float *)&param_1->field_0x2538 - *(float *)(param_2 + 4);
  *(float *)&param_1->field_0x2538 = fVar1;
  if (0.0 < fVar1) {
    iVar3 = unkafter_enemy_cpp_FUN_0048a1b0(param_1,*(uint *)(param_2 + 4));
    if (iVar3 == 0) goto LAB_0041934a;
    iVar3 = 3;
  }
  else {
    if ((*(int *)&param_1->field_0xd0ec < 1) &&
       (((*(uint *)&param_1->field_0x3254 & 0x7fffffff) == 0 ||
        (*(int *)&param_1->field_0x3258 != 0)))) {
      *(uint *)&param_1->field_0x2538 = 0x3f800000;
      core_boneguy_cpp_FUN_00419550(param_1);
      *(int *)&param_1->field_0xd0ec = *(int *)&param_1->field_0xd0ec + 1;
      core_enemy_cpp_FUN_00489b80(param_1,param_2);
      return;
    }
    *(uint *)&param_1->field_0x2538 = 0;
    pSVar2 = core_motion_cpp_CMotionController_getCurrentMotion_FUN_004fc070
                       ((CMotionController *)&param_1->field_0x158);
    if ((*(int *)(pSVar2 + 0x24) == 5) || (*(int *)(pSVar2 + 0x24) == 4)) goto LAB_0041934a;
    iVar3 = 4;
  }
  core_motion_cpp_CMotionController_setDesiredState_FUN_004fc0d0
            ((CMotionController *)&param_1->field_0x158,iVar3,1);
LAB_0041934a:
  core_enemy_cpp_FUN_00489b80(param_1,param_2);
  return;
}
