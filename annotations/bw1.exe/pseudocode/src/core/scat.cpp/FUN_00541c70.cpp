// Name: core_scat.cpp_FUN_00541c70
// Address: 00541c70
// Address Range: [[00541c70, 00541dbf]]
// Convention: unknown
// Signature: void core_scat_cpp_FUN_00541c70(CScat *param_1,int param_2)

#include "nocturne.h"

void core_scat_cpp_FUN_00541c70(CScat *param_1,int param_2)

{
  byte *this_ptr;
  float fVar1;
  SMotion *pSVar2;
  int iVar3;
  
  if ((*(uint *)&param_1->field_0xc1d0 & 0x7fffffff) != 0) {
    *(uint *)(param_2 + 4) = 0;
  }
  if (*(int *)&g_CGamePtr->field_0x1ec != 0) {
    *(uint *)(param_2 + 4) = 0;
  }
  if (*(int *)&g_CGamePtr->field_0x248 == 0) {
    *(uint *)(param_2 + 4) = 0;
  }
  *(uint *)&param_1->field_0xc1d0 = 0x3F000000;
  fVar1 = *(float *)&param_1->field_0x2538 - *(float *)(param_2 + 4);
  this_ptr = &param_1->field_0x158;
  *(float *)&param_1->field_0x2538 = fVar1;
  if (0.0 < fVar1) {
    if (*(float *)(param_2 + 4) <= 0.0) {
      core_charactr_cpp_FUN_004319e0(param_1,param_2);
      return;
    }
    iVar3 = core_scat_cpp_FUN_00541de0(param_1);
    if (iVar3 == 0) {
      iVar3 = 0xc;
    }
    else {
      iVar3 = 0xd;
    }
    core_motion_cpp_CMotionController_setDesiredState_FUN_005247c0
              ((CMotionController *)this_ptr,iVar3,1);
    (**(code **)(*(int *)&param_1->field_0x154 + 0x2c))(param_1,"scat-hurt-?.wav");
    core_charactr_cpp_FUN_004319e0(param_1,param_2);
    return;
  }
  *(uint *)&param_1->field_0x2538 = 0;
  pSVar2 = core_motion_cpp_CMotionController_getCurrentMotion_FUN_00524770
                     ((CMotionController *)this_ptr);
  if (*(int *)(pSVar2 + 0x24) != 5) {
    pSVar2 = core_motion_cpp_CMotionController_getCurrentMotion_FUN_00524770
                       ((CMotionController *)this_ptr);
    if (*(int *)(pSVar2 + 0x24) != 4) {
      *(uint *)&param_1->field_0x26fc = 0;
      core_motion_cpp_CMotionController_setDesiredState_FUN_005247c0
                ((CMotionController *)this_ptr,4,1);
      core_gore_cpp_CGore_spawnFliesOnActor_FUN_004e64d0
                (g_CGorePtr,(CDemonActor *)param_1,0x32,50.0,(CVector3f *)0x0);
    }
  }
  (**(code **)(*(int *)&param_1->field_0x154 + 0x2c))(param_1,"?scat-die-?.wav" + 1);
  core_charactr_cpp_FUN_004319e0(param_1,param_2);
  return;
}
