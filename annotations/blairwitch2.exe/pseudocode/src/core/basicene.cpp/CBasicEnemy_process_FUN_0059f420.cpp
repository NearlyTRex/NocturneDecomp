// Name: core_basicene.cpp_CBasicEnemy_process_FUN_0059f420
// Address: 0059f420
// Address Range: [[0059f420, 0059f56f]]
// Convention: __cdecl
// Signature: void __cdecl core_basicene_cpp_CBasicEnemy_process_FUN_0059f420(CBasicEnemy *this_ptr,float delta_time)

#include "nocturne.h"

void __cdecl core_basicene_cpp_CBasicEnemy_process_FUN_0059f420(CBasicEnemy *this_ptr,float delta_time)

{
  int iVar1;
  
  iVar1 = core_charactr_cpp_CCharacter_processCharacter_FUN_004244b0
                    ((CCharacter *)this_ptr,delta_time);
  if (iVar1 == 0) {
    *(uint *)(this_ptr + 0x1141c) = 0;
    return;
  }
  *(uint *)(this_ptr + 0x1141c) = 1;
  (**(code **)(*(int *)(this_ptr + 0x2b0) + 0x15c))(this_ptr,delta_time);
  iVar1 = core_charactr_cpp_CCharacter_processWalking_FUN_004287f0
                    ((CCharacter *)this_ptr,delta_time);
  if (iVar1 == 0) {
    unkaddr_0059d350_cpp_FUN_0059da20(this_ptr + 0x10af8,delta_time);
    (**(code **)(*(int *)(this_ptr + 0x2b0) + 0x160))(this_ptr,delta_time,1);
  }
  else {
    switch(*(uint *)(this_ptr + 0x27ac)) {
    case 0:
      iVar1 = *(int *)(this_ptr + 0x11384);
      break;
    case 1:
      iVar1 = *(int *)(this_ptr + 0x11388);
      break;
    case 2:
      core_motion_cpp_CMotionController_setDesiredState_FUN_00503620
                ((CMotionController *)(this_ptr + 0x2b4),*(int *)(this_ptr + 0x1138c),1);
      goto LAB_0059f4a2;
    case 3:
      iVar1 = *(int *)(this_ptr + 0x11380);
      break;
    default:
      iVar1 = *(int *)(this_ptr + 0x11384);
    }
    core_motion_cpp_CMotionController_setDesiredState_FUN_00503620
              ((CMotionController *)(this_ptr + 0x2b4),iVar1,1);
  }
LAB_0059f4a2:
  (**(code **)(*(int *)(this_ptr + 0x2b0) + 0x164))(this_ptr,delta_time);
  if (*(int *)(this_ptr + 0x113b8) != 0) {
    unkafter_basicene_cpp_FUN_0059f5b0(this_ptr,delta_time);
  }
  unkafter_basicene_cpp_FUN_0059f660(this_ptr,delta_time);
  core_charactr_cpp_FUN_0042b5e0(this_ptr,delta_time);
  (**(code **)(*(int *)(this_ptr + 0x2b0) + 0x154))(this_ptr,delta_time);
  return;
}
