// Name: unkafter_demnfolk.cpp_FUN_004581c0
// Address: 004581c0
// Address Range: [[004581c0, 004581f8]]
// Convention: unknown
// Signature: int unkafter_demnfolk_cpp_FUN_004581c0(CCharacter *param_1)

#include "nocturne.h"

int unkafter_demnfolk_cpp_FUN_004581c0(CCharacter *param_1)

{
  SMotion *pSVar1;
  int iVar2;
  
  pSVar1 = core_motion_cpp_CMotionController_getCurrentMotion_FUN_004fc070
                     ((CMotionController *)&param_1->field_0x158);
  if ((*(int *)(pSVar1 + 0x24) == 0x23) && (*(int *)(0x01D81080 + 0x1008) == 0)) {
    return 0;
  }
  iVar2 = core_charactr_cpp_FUN_0042e220(param_1);
  return iVar2;
}
