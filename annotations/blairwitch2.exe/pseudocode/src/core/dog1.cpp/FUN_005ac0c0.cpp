// Name: core_dog1.cpp_FUN_005ac0c0
// Address: 005ac0c0
// Address Range: [[005ac0c0, 005ac1f9]]
// Convention: unknown
// Signature: void core_dog1_cpp_FUN_005ac0c0(CCharacter *param_1,float param_2)

#include "nocturne.h"

void core_dog1_cpp_FUN_005ac0c0(CCharacter *param_1,float param_2)

{
  CCharacter *pCVar1;
  int iVar2;
  uint uVar3;
  
  if (*(int *)&param_1[1].field_0xdfc == 0) {
    unkaddr_0059d350_cpp_FUN_0059d880(&param_1[1].field_0x98,"?ChaseFoodComplete" + 1);
    return;
  }
  pCVar1 = *(CCharacter **)(*(int *)&param_1[1].field_0xdfc + 0x474);
  if ((pCVar1 != (CCharacter *)0x0) && (param_1 != pCVar1)) {
    *(uint *)&param_1[1].field_0xdfc = 0;
    unkaddr_0059d350_cpp_FUN_0059d880(&param_1[1].field_0x98,"ChaseFoodComplete");
    return;
  }
  iVar2 = core_charactr_cpp_CCharacter_walkToPoint_FUN_00423000
                    (param_1,(CVector3f *)(*(int *)&param_1[1].field_0xdfc + 0x20),(CPathMap *)0x0,
                     (CVector3f *)&param_1[1].field_0x9c4,*(float *)&param_1[1].field_0x9cc,
                     0.34906584);
  if (iVar2 == 0) {
    core_motion_cpp_CMotionController_setDesiredState_FUN_00503620
              ((CMotionController *)&param_1->field_0x2b4,2,1);
    return;
  }
  (**(code **)(*(int *)(*(int *)&param_1[1].field_0xdfc + 0x2b0) + 0x90))
            (*(int *)&param_1[1].field_0xdfc,param_1);
  *(uint *)&param_1[1].field_0x18 = 0;
  core_motion_cpp_CMotionController_setDesiredState_FUN_00503620
            ((CMotionController *)&param_1->field_0x2b4,9,1);
  param_2 = *(float *)&param_1[1].field_0xe08 - param_2;
  *(float *)&param_1[1].field_0xe08 = param_2;
  if (0.0 < param_2) {
    return;
  }
  (**(code **)(*(int *)(*(int *)&param_1[1].field_0xdfc + 0x2b0) + 0x94))
            (*(int *)&param_1[1].field_0xdfc,0);
  core_mission_cpp_FUN_004fc7b0(0x01D182F0,*(uint *)&param_1[1].field_0xdfc,1);
  uVar3 = unkaddr_0059d350_cpp_FUN_0059db90(&param_1[1].field_0x98);
  unkaddr_0059d350_cpp_FUN_0059d8e0(&param_1[1].field_0x98,uVar3);
  return;
}
