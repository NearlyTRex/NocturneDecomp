// Name: core_gabriela.cpp_FUN_004b1bf0
// Address: 004b1bf0
// Address Range: [[004b1bf0, 004b1df0]]
// Convention: unknown
// Signature: void core_gabriela_cpp_FUN_004b1bf0(CCharacter *param_1,SDamageInfo *param_2)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void core_gabriela_cpp_FUN_004b1bf0(CCharacter *param_1,SDamageInfo *param_2)

{
  byte *this_ptr;
  int iVar1;
  float fVar2;
  uint uVar3;
  
  if ((*(uint *)(param_1 + 1) & 0x7fffffff) != 0) {
    *(uint *)(param_2 + 4) = 0;
  }
  if (*(int *)&g_CGamePtr->field_0x1ec != 0) {
    *(uint *)(param_2 + 4) = 0;
  }
  if (*(int *)&g_CGamePtr->field_0x248 == 0) {
    *(uint *)(param_2 + 4) = 0;
  }
  *(uint *)(param_1 + 1) = 0x3F000000;
  fVar2 = *(float *)&param_1->field_0x25a8 - *(float *)(param_2 + 4);
  this_ptr = &param_1->field_0x2b4;
  *(float *)&param_1->field_0x25a8 = fVar2;
  if (0.0 < fVar2) {
    if (0.0 < *(float *)(param_2 + 4)) {
      if (*(int *)&param_1[2].field_0x4154 == 0) {
        core_motion_cpp_CMotionController_setDesiredState_FUN_00503620
                  ((CMotionController *)this_ptr,8,1);
      }
      if (*(int *)&g_CGamePtr->field_0xd4 != 2) {
        iVar1 = *(int *)&param_1->field_0x2b0;
        uVar3 = core_actor_cpp_FUN_0040cf60(0x3e800000,0x3ecccccd);
        (**(code **)(iVar1 + 0x3c))(param_1,"gb-hit[1,6].wav",uVar3);
      }
    }
  }
  else {
    *(uint *)&param_1->field_0x25a8 = 0;
    iVar1 = core_motion_cpp_FUN_005035c0(this_ptr);
    if (*(int *)(iVar1 + 0x24) != 0xc) {
      iVar1 = core_motion_cpp_FUN_005035c0(this_ptr);
      if (*(int *)(iVar1 + 0x24) != 0xb) {
        iVar1 = 1;
        *(uint *)&param_1->field_0x276c = 0;
        fVar2 = (float)core_actor_cpp_FUN_0040cf60(0,0x42c80000);
        core_motion_cpp_CMotionController_setDesiredState_FUN_00503620
                  ((CMotionController *)&param_1->field_0x2b4,(fVar2 <= _DAT_005d71b3) + 9,iVar1);
        if (*(int *)&g_CGamePtr->field_0xd4 != 2) {
          iVar1 = *(int *)&param_1->field_0x2b0;
          uVar3 = core_actor_cpp_FUN_0040cf60(0x3e800000,0x3ecccccd);
          (**(code **)(iVar1 + 0x3c))(param_1,"gb-die[1,6].wav",uVar3);
        }
        core_gore_cpp_FUN_004c9cc0(g_CGorePtr,(CDemonActor *)param_1,0x32,50.0,(CVector3f *)0x0);
      }
    }
  }
  if (*(float *)(param_2 + 4) <= 0.0) {
    core_charactr_cpp_CCharacter_processDamage_FUN_00427fb0(param_1,param_2);
    return;
  }
  core_game_cpp_FUN_004bb8b0(g_CGamePtr);
  core_charactr_cpp_CCharacter_processDamage_FUN_00427fb0(param_1,param_2);
  return;
}
