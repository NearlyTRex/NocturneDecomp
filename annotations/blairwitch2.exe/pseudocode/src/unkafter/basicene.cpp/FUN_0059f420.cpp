// Name: unkafter_basicene.cpp_FUN_0059f420
// Address: 0059f420
// Address Range: [[0059f420, 0059f56f]]
// Convention: unknown
// Signature: void unkafter_basicene_cpp_FUN_0059f420(CCharacter *param_1,float param_2)

#include "nocturne.h"

void unkafter_basicene_cpp_FUN_0059f420(CCharacter *param_1,float param_2)

{
  int iVar1;
  
  iVar1 = core_charactr_cpp_CCharacter_processCharacter_FUN_004244b0(param_1,param_2);
  if (iVar1 == 0) {
    *(uint *)&param_1[1].field_0x9bc = 0;
    return;
  }
  iVar1 = *(int *)&param_1->field_0x2b0;
  *(uint *)&param_1[1].field_0x9bc = 1;
  (**(code **)(iVar1 + 0x15c))(param_1,param_2);
  iVar1 = core_charactr_cpp_FUN_004287f0(param_1,param_2);
  if (iVar1 == 0) {
    unkaddr_0059d350_cpp_FUN_0059da20(&param_1[1].field_0x98,param_2);
    (**(code **)(*(int *)&param_1->field_0x2b0 + 0x160))(param_1,param_2,1);
  }
  else {
    switch(*(uint *)&param_1->field_0x27ac) {
    case 0:
      iVar1 = *(int *)&param_1[1].field_0x924;
      break;
    case 1:
      iVar1 = *(int *)&param_1[1].field_0x928;
      break;
    case 2:
      core_motion_cpp_CMotionController_setDesiredState_FUN_00503620
                ((CMotionController *)&param_1->field_0x2b4,*(int *)&param_1[1].field_0x92c,1);
      goto LAB_0059f4a2;
    case 3:
      iVar1 = *(int *)&param_1[1].field_0x920;
      break;
    default:
      iVar1 = *(int *)&param_1[1].field_0x924;
    }
    core_motion_cpp_CMotionController_setDesiredState_FUN_00503620
              ((CMotionController *)&param_1->field_0x2b4,iVar1,1);
  }
LAB_0059f4a2:
  (**(code **)(*(int *)&param_1->field_0x2b0 + 0x164))(param_1,param_2);
  if (*(int *)&param_1[1].field_0x958 != 0) {
    unkafter_basicene_cpp_FUN_0059f5b0(param_1,param_2);
  }
  unkafter_basicene_cpp_FUN_0059f660(param_1,param_2);
  core_charactr_cpp_FUN_0042b5e0(param_1,param_2);
  (**(code **)(*(int *)&param_1->field_0x2b0 + 0x154))(param_1,param_2);
  return;
}
