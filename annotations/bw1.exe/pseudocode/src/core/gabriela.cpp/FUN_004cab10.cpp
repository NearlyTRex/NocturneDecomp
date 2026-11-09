// Name: core_gabriela.cpp_FUN_004cab10
// Address: 004cab10
// Address Range: [[004cab10, 004cad10]]
// Convention: unknown
// Signature: void core_gabriela_cpp_FUN_004cab10(CDemonActor *param_1,int param_2)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void core_gabriela_cpp_FUN_004cab10(CDemonActor *param_1,int param_2)

{
  CDemonActor *this_ptr;
  SMotion *pSVar1;
  float fVar2;
  uint uVar3;
  int iVar4;
  
  if ((*(uint *)&param_1[0x90].field_0x50 & 0x7fffffff) != 0) {
    *(uint *)(param_2 + 4) = 0;
  }
  if (*(int *)&g_CGamePtr->field_0x1ec != 0) {
    *(uint *)(param_2 + 4) = 0;
  }
  if (*(int *)&g_CGamePtr->field_0x248 == 0) {
    *(uint *)(param_2 + 4) = 0;
  }
  *(uint *)&param_1[0x90].field_0x50 = 0x3F000000;
  fVar2 = *(float *)&param_1[0x1b].field_0xf0 - *(float *)(param_2 + 4);
  this_ptr = param_1 + 1;
  *(float *)&param_1[0x1b].field_0xf0 = fVar2;
  if (0.0 < fVar2) {
    if (0.0 < *(float *)(param_2 + 4)) {
      if (*(int *)&param_1[0x17c].field_0xe4 == 0) {
        core_motion_cpp_CMotionController_setDesiredState_FUN_005247c0
                  ((CMotionController *)this_ptr,8,1);
      }
      if (*(int *)&g_CGamePtr->field_0xd4 != 2) {
        iVar4 = *(int *)&param_1->field_0x154;
        uVar3 = core_actor_cpp_FUN_0040cc00(0x3e800000,0x3ecccccd);
        (**(code **)(iVar4 + 0x34))(param_1,"gb-hit[1,6].wav",uVar3);
      }
    }
  }
  else {
    *(uint *)&param_1[0x1b].field_0xf0 = 0;
    pSVar1 = core_motion_cpp_CMotionController_getCurrentMotion_FUN_00524770
                       ((CMotionController *)this_ptr);
    if (*(int *)(pSVar1 + 0x24) != 0xc) {
      pSVar1 = core_motion_cpp_CMotionController_getCurrentMotion_FUN_00524770
                         ((CMotionController *)this_ptr);
      if (*(int *)(pSVar1 + 0x24) != 0xb) {
        iVar4 = 1;
        *(uint *)&param_1[0x1d].field_0x4 = 0;
        fVar2 = (float)core_actor_cpp_FUN_0040cc00(0,0x42c80000);
        core_motion_cpp_CMotionController_setDesiredState_FUN_005247c0
                  ((CMotionController *)(param_1 + 1),(fVar2 <= _DAT_005e122c) + 9,iVar4);
        if (*(int *)&g_CGamePtr->field_0xd4 != 2) {
          iVar4 = *(int *)&param_1->field_0x154;
          uVar3 = core_actor_cpp_FUN_0040cc00(0x3e800000,0x3ecccccd);
          (**(code **)(iVar4 + 0x34))(param_1,"gb-die[1,6].wav",uVar3);
        }
        core_gore_cpp_CGore_spawnFliesOnActor_FUN_004e64d0
                  (g_CGorePtr,param_1,0x32,50.0,(CVector3f *)0x0);
      }
    }
  }
  if (*(float *)(param_2 + 4) <= 0.0) {
    core_charactr_cpp_FUN_004319e0(param_1,param_2);
    return;
  }
  core_game_cpp_FUN_004d6320(g_CGamePtr);
  core_charactr_cpp_FUN_004319e0(param_1,param_2);
  return;
}
