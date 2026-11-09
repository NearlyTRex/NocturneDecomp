// Name: core_zombie.cpp_FUN_0058be70
// Address: 0058be70
// Address Range: [[0058be70, 0058bea8]]
// Convention: unknown
// Signature: int core_zombie_cpp_FUN_0058be70(CCharacter *param_1)

#include "nocturne.h"

int core_zombie_cpp_FUN_0058be70(CCharacter *param_1)

{
  SMotion *pSVar1;
  int iVar2;
  
  pSVar1 = core_motion_cpp_CMotionController_getCurrentMotion_FUN_004fc070
                     ((CMotionController *)&param_1->field_0x158);
  if ((*(int *)(pSVar1 + 0x24) == 0xf) && (*(int *)(0x01D81080 + 0x1008) == 0)) {
    return 0;
  }
  iVar2 = core_charactr_cpp_FUN_0042e220(param_1);
  return iVar2;
}
