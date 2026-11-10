// Name: core_motion.cpp_FUN_004fc2c0
// Address: 004fc2c0
// Address Range: [[004fc2c0, 004fc30b]]
// Convention: unknown
// Signature: void core_motion_cpp_FUN_004fc2c0(CMotionController *param_1)

#include "nocturne.h"

void core_motion_cpp_FUN_004fc2c0(CMotionController *param_1)

{
  SMotion SVar1;
  SMotion *pSVar2;
  SMotion *pSVar3;
  
  if (param_1->motion_list_ptr != (CMotionList *)0x0) {
    if (param_1->current_motion_name[0] == '\0') {
      pSVar2 = core_motion_cpp_CMotionController_getCurrentMotion_FUN_004fc070(param_1);
      pSVar3 = (SMotion *)param_1->current_motion_name;
      do {
        SVar1 = *pSVar2;
        *pSVar3 = SVar1;
        if (SVar1 == (SMotion)0x0) break;
        SVar1 = pSVar2[1];
        pSVar2 = pSVar2 + 2;
        pSVar3[1] = SVar1;
        pSVar3 = pSVar3 + 2;
      } while (SVar1 != (SMotion)0x0);
      param_1->motion_list_ptr = (CMotionList *)0x0;
      return;
    }
    param_1->motion_list_ptr = (CMotionList *)0x0;
  }
  return;
}
