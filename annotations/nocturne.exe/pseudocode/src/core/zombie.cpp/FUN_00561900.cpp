// Name: core_zombie.cpp_FUN_00561900
// Address: 00561900
// Address Range: [[00561900, 00561935]]
// Convention: unknown
// Signature: int core_zombie_cpp_FUN_00561900(CCharacter *param_1)

#include "nocturne.h"

int core_zombie_cpp_FUN_00561900(CCharacter *param_1)

{
  SMotion *pSVar1;
  int iVar2;
  
  pSVar1 = core_motion_cpp_CMotionController_getCurrentMotion_FUN_004e1660
                     (&(param_1->model).motion_controller);
  if ((pSVar1->state_index == 0xe) && (*(int *)(0x01CC9450 + 4) == 0)) {
    return 0;
  }
  iVar2 = core_charactr_cpp_CCharacter_renderOpaque_FUN_00426440(param_1);
  return iVar2;
}
