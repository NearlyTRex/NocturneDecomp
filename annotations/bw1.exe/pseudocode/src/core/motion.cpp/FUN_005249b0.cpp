// Name: core_motion.cpp_FUN_005249b0
// Address: 005249b0
// Address Range: [[005249b0, 005249fb]]
// Convention: unknown
// Signature: void core_motion_cpp_FUN_005249b0(CMotionController *param_1)

#include "nocturne.h"

void core_motion_cpp_FUN_005249b0(CMotionController *param_1)

{
  SMotion SVar1;
  SMotion *pSVar2;
  SMotion *pSVar3;
  
  if (*(int *)param_1 != 0) {
    if (param_1->field_0x30 == '\0') {
      pSVar2 = core_motion_cpp_CMotionController_getCurrentMotion_FUN_00524770(param_1);
      pSVar3 = (SMotion *)&param_1->field_0x30;
      do {
        SVar1 = *pSVar2;
        *pSVar3 = SVar1;
        if (SVar1 == (SMotion)0x0) break;
        SVar1 = pSVar2[1];
        pSVar2 = pSVar2 + 2;
        pSVar3[1] = SVar1;
        pSVar3 = pSVar3 + 2;
      } while (SVar1 != (SMotion)0x0);
      *(uint *)param_1 = 0;
      return;
    }
    *(uint *)param_1 = 0;
  }
  return;
}
