// Name: unkafter_demnfolk.cpp_FUN_0045bfe0
// Address: 0045bfe0
// Address Range: [[0045bfe0, 0045c018]]
// Convention: unknown
// Signature: int unkafter_demnfolk_cpp_FUN_0045bfe0(CCharacter *param_1)

#include "nocturne.h"

int unkafter_demnfolk_cpp_FUN_0045bfe0(CCharacter *param_1)

{
  SMotion *pSVar1;
  int iVar2;
  
  pSVar1 = core_motion_cpp_CMotionController_getCurrentMotion_FUN_00524770
                     ((CMotionController *)&param_1->field_0x158);
  if ((*(int *)(pSVar1 + 0x24) == 0x24) && (*(int *)(0x01D2C900 + 0x1008) == 0)) {
    return 0;
  }
  iVar2 = core_charactr_cpp_FUN_0042f240(param_1);
  return iVar2;
}
