// Name: core_haystack.cpp_FUN_004cd880
// Address: 004cd880
// Address Range: [[004cd880, 004cd99e]]
// Convention: unknown
// Signature: void core_haystack_cpp_FUN_004cd880(CCharacter *param_1,SDamageInfo *param_2)

#include "nocturne.h"

void core_haystack_cpp_FUN_004cd880(CCharacter *param_1,SDamageInfo *param_2)

{
  byte *this_ptr;
  float fVar1;
  int iVar2;
  
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
  fVar1 = *(float *)&param_1->field_0x25a8 - *(float *)(param_2 + 4);
  this_ptr = &param_1->field_0x2b4;
  *(float *)&param_1->field_0x25a8 = fVar1;
  if (fVar1 <= 0.0) {
    *(uint *)&param_1->field_0x25a8 = 0;
    iVar2 = core_motion_cpp_FUN_005035c0(this_ptr);
    if (*(int *)(iVar2 + 0x24) != 9) {
      iVar2 = core_motion_cpp_FUN_005035c0(this_ptr);
      if (*(int *)(iVar2 + 0x24) != 8) {
        *(uint *)&param_1->field_0x276c = 0;
        core_motion_cpp_CMotionController_setDesiredState_FUN_00503620
                  ((CMotionController *)this_ptr,8,1);
        core_gore_cpp_FUN_004c9cc0(g_CGorePtr,(CDemonActor *)param_1,0x32,50.0,(CVector3f *)0x0);
        core_charactr_cpp_CCharacter_processDamage_FUN_00427fb0(param_1,param_2);
        return;
      }
    }
  }
  else if (0.0 < *(float *)(param_2 + 4)) {
    if (*(int *)&param_1[2].field_0x4180 == 0) {
      iVar2 = 4;
    }
    else {
      iVar2 = 0xb;
    }
    core_motion_cpp_CMotionController_setDesiredState_FUN_00503620
              ((CMotionController *)this_ptr,iVar2,1);
  }
  core_charactr_cpp_CCharacter_processDamage_FUN_00427fb0(param_1,param_2);
  return;
}
