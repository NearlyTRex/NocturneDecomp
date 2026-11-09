// Name: core_icepick.cpp_FUN_004f2570
// Address: 004f2570
// Address Range: [[004f2570, 004f271d]]
// Convention: unknown
// Signature: void core_icepick_cpp_FUN_004f2570(CDemonActor *param_1,int param_2)

#include "nocturne.h"

void core_icepick_cpp_FUN_004f2570(CDemonActor *param_1,int param_2)

{
  CDemonActor *this_ptr;
  float fVar1;
  SMotion *pSVar2;
  uint uVar3;
  int iVar4;
  
  sound_sndmain_cpp_killSfx_FUN_00573a80(*(uint *)&param_1[0x17c].field_0x114);
  if ((*(uint *)&param_1[0x90].field_0x50 & 0x7fffffff) != 0) {
    *(uint *)(param_2 + 4) = 0;
  }
  if (*(int *)&g_CGamePtr->field_0x1ec != 0) {
    *(uint *)(param_2 + 4) = 0;
  }
  if (*(int *)&g_CGamePtr->field_0x248 == 0) {
    *(uint *)(param_2 + 4) = 0;
  }
  *(uint *)&param_1[0x90].field_0x50 = 0x40400000;
  fVar1 = *(float *)&param_1[0x1b].field_0xf0 - *(float *)(param_2 + 4);
  this_ptr = param_1 + 1;
  *(float *)&param_1[0x1b].field_0xf0 = fVar1;
  if (fVar1 <= 0.0) {
    *(uint *)&param_1[0x1b].field_0xf0 = 0;
    pSVar2 = core_motion_cpp_CMotionController_getCurrentMotion_FUN_00524770
                       ((CMotionController *)this_ptr);
    if (*(int *)(pSVar2 + 0x24) != 9) {
      pSVar2 = core_motion_cpp_CMotionController_getCurrentMotion_FUN_00524770
                         ((CMotionController *)this_ptr);
      if (*(int *)(pSVar2 + 0x24) != 8) {
        *(uint *)&param_1[0x1d].field_0x4 = 0;
        core_motion_cpp_CMotionController_setDesiredState_FUN_005247c0
                  ((CMotionController *)this_ptr,8,1);
        (**(code **)(*(int *)&param_1->field_0x154 + 0x128))(param_1,1,0);
        core_gore_cpp_CGore_spawnFliesOnActor_FUN_004e64d0
                  (g_CGorePtr,param_1,0x32,50.0,(CVector3f *)0x0);
        sound_sndmain_cpp_killSfx_FUN_00573a80(*(uint *)&param_1[0x17c].field_0x118);
        (**(code **)(*(int *)&param_1->field_0x154 + 0x2c))(param_1,"icepick_die01.wav");
        core_charactr_cpp_FUN_004319e0(param_1,param_2);
        return;
      }
    }
  }
  else if (0.0 < *(float *)(param_2 + 4)) {
    if (*(int *)&param_1[0x17c].field_0x10c == 0) {
      iVar4 = 4;
    }
    else {
      iVar4 = 0xb;
    }
    core_motion_cpp_CMotionController_setDesiredState_FUN_005247c0
              ((CMotionController *)this_ptr,iVar4,1);
    iVar4 = sound_sndmain_cpp_FUN_005735a0(*(uint *)&param_1[0x17c].field_0x118);
    if (iVar4 == 0) {
      uVar3 = (**(code **)(*(int *)&param_1->field_0x154 + 0x2c))
                        (param_1,"icepick_injured??.wav");
      *(uint *)&param_1[0x17c].field_0x118 = uVar3;
      core_charactr_cpp_FUN_004319e0(param_1,param_2);
      return;
    }
  }
  core_charactr_cpp_FUN_004319e0(param_1,param_2);
  return;
}
