// Name: core_motion.cpp_FUN_005249b0
// Address: 005249b0
// Address Range: [[005249b0, 005249fb]]
// Convention: unknown
// Signature: void core_motion_cpp_FUN_005249b0(CMotionController *param_1)

#include "nocturne.h"

void core_motion_cpp_FUN_005249b0(CMotionController *param_1)

{
  char cVar1;
  SMotion *pSVar2;
  char *pcVar3;
  
  if (param_1->motion_list_ptr != (CMotionList *)0x0) {
    if (param_1->current_motion_name[0] == '\0') {
      pSVar2 = core_motion_cpp_CMotionController_getCurrentMotion_FUN_00524770(param_1);
      pcVar3 = param_1->current_motion_name;
      do {
        cVar1 = pSVar2->motion_name[0];
        *pcVar3 = cVar1;
        if (cVar1 == '\0') break;
        cVar1 = pSVar2->motion_name[1];
        pSVar2 = (SMotion *)(pSVar2->motion_name + 2);
        pcVar3[1] = cVar1;
        pcVar3 = pcVar3 + 2;
      } while (cVar1 != '\0');
      param_1->motion_list_ptr = (CMotionList *)0x0;
      return;
    }
    param_1->motion_list_ptr = (CMotionList *)0x0;
  }
  return;
}
