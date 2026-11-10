// Name: core_dog1.cpp_CDog_processChaseFoodState_FUN_005ac0c0
// Address: 005ac0c0
// Address Range: [[005ac0c0, 005ac1f9]]
// Convention: __cdecl
// Signature: void __cdecl core_dog1_cpp_CDog_processChaseFoodState_FUN_005ac0c0(CDog *this_ptr,float delta_time)

#include "nocturne.h"

void __cdecl core_dog1_cpp_CDog_processChaseFoodState_FUN_005ac0c0(CDog *this_ptr,float delta_time)

{
  CDog *pCVar1;
  float fVar2;
  int iVar3;
  uint uVar4;
  
  if (*(int *)&this_ptr->field_0x1185c == 0) {
    unkaddr_0059d350_cpp_FUN_0059d880(&this_ptr->field_0x10af8,"?ChaseFoodComplete" + 1);
    return;
  }
  pCVar1 = *(CDog **)(*(int *)&this_ptr->field_0x1185c + 0x474);
  if ((pCVar1 != (CDog *)0x0) && (this_ptr != pCVar1)) {
    *(uint *)&this_ptr->field_0x1185c = 0;
    unkaddr_0059d350_cpp_FUN_0059d880(&this_ptr->field_0x10af8,"ChaseFoodComplete");
    return;
  }
  iVar3 = core_charactr_cpp_CCharacter_walkToPoint_FUN_00423000
                    ((CCharacter *)this_ptr,(CVector3f *)(*(int *)&this_ptr->field_0x1185c + 0x20),
                     (CPathMap *)0x0,(CVector3f *)&this_ptr->field_0x11424,
                     *(float *)&this_ptr->field_0x1142c,0.34906584);
  if (iVar3 == 0) {
    core_motion_cpp_CMotionController_setDesiredState_FUN_00503620
              ((CMotionController *)&this_ptr->field_0x2b4,2,1);
    return;
  }
  (**(code **)(*(int *)(*(int *)&this_ptr->field_0x1185c + 0x2b0) + 0x90))
            (*(int *)&this_ptr->field_0x1185c,this_ptr);
  *(uint *)&this_ptr->field_0x10a78 = 0;
  core_motion_cpp_CMotionController_setDesiredState_FUN_00503620
            ((CMotionController *)&this_ptr->field_0x2b4,9,1);
  fVar2 = *(float *)&this_ptr->field_0x11868 - delta_time;
  *(float *)&this_ptr->field_0x11868 = fVar2;
  if (0.0 < fVar2) {
    return;
  }
  (**(code **)(*(int *)(*(int *)&this_ptr->field_0x1185c + 0x2b0) + 0x94))
            (*(int *)&this_ptr->field_0x1185c,0);
  core_mission_cpp_FUN_004fc7b0(0x01D182F0,*(uint *)&this_ptr->field_0x1185c,1);
  uVar4 = unkaddr_0059d350_cpp_FUN_0059db90(&this_ptr->field_0x10af8);
  unkaddr_0059d350_cpp_FUN_0059d8e0(&this_ptr->field_0x10af8,uVar4);
  return;
}
