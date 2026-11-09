// Name: core_scat.cpp_FUN_0051fb40
// Address: 0051fb40
// Address Range: [[0051fb40, 0051fc8f]]
// Convention: unknown
// Signature: void core_scat_cpp_FUN_0051fb40(CScat *param_1,SDamageInfo *param_2)

#include "nocturne.h"

void core_scat_cpp_FUN_0051fb40(CScat *param_1,SDamageInfo *param_2)

{
  byte *this_ptr;
  float fVar1;
  int iVar2;
  
  if ((*(uint *)&param_1->field_0x10a60 & 0x7fffffff) != 0) {
    *(uint *)(param_2 + 4) = 0;
  }
  if (*(int *)&g_CGamePtr->field_0x1ec != 0) {
    *(uint *)(param_2 + 4) = 0;
  }
  if (*(int *)&g_CGamePtr->field_0x248 == 0) {
    *(uint *)(param_2 + 4) = 0;
  }
  *(uint *)&param_1->field_0x10a60 = 0x3F000000;
  fVar1 = *(float *)&param_1->field_0x25a8 - *(float *)(param_2 + 4);
  this_ptr = &param_1->field_0x2b4;
  *(float *)&param_1->field_0x25a8 = fVar1;
  if (0.0 < fVar1) {
    if (*(float *)(param_2 + 4) <= 0.0) {
      core_charactr_cpp_CCharacter_processDamage_FUN_00427fb0((CCharacter *)param_1,param_2);
      return;
    }
    iVar2 = core_scat_cpp_FUN_0051fcb0(param_1);
    if (iVar2 == 0) {
      iVar2 = 0xc;
    }
    else {
      iVar2 = 0xd;
    }
    core_motion_cpp_CMotionController_setDesiredState_FUN_00503620
              ((CMotionController *)this_ptr,iVar2,1);
    (**(code **)(*(int *)&param_1->field_0x2b0 + 0x34))(param_1,"scat-hurt-?.wav");
    core_charactr_cpp_CCharacter_processDamage_FUN_00427fb0((CCharacter *)param_1,param_2);
    return;
  }
  *(uint *)&param_1->field_0x25a8 = 0;
  iVar2 = core_motion_cpp_FUN_005035c0(this_ptr);
  if (*(int *)(iVar2 + 0x24) != 5) {
    iVar2 = core_motion_cpp_FUN_005035c0(this_ptr);
    if (*(int *)(iVar2 + 0x24) != 4) {
      *(uint *)&param_1->field_0x276c = 0;
      core_motion_cpp_CMotionController_setDesiredState_FUN_00503620
                ((CMotionController *)this_ptr,4,1);
      core_gore_cpp_FUN_004c9cc0(g_CGorePtr,(CDemonActor *)param_1,0x32,50.0,(CVector3f *)0x0);
    }
  }
  (**(code **)(*(int *)&param_1->field_0x2b0 + 0x34))(param_1,"?scat-die-?.wav" + 1);
  core_charactr_cpp_CCharacter_processDamage_FUN_00427fb0((CCharacter *)param_1,param_2);
  return;
}
