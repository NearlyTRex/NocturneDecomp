// Name: core_motion.cpp_CMotionController_markerPositionToFrame_FUN_004e1f50
// Address: 004e1f50
// Address Range: [[004e1f50, 004e2067]]
// Convention: unknown
// Signature: float core_motion_cpp_CMotionController_markerPositionToFrame_FUN_004e1f50(int *param_1,int param_2,float param_3)

#include "nocturne.h"

float core_motion_cpp_CMotionController_markerPositionToFrame_FUN_004e1f50(int *param_1,int param_2,float param_3)

{
  int iVar1;
  float fVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  float10 fVar6;
  float local_1c;
  
  iVar4 = param_2 * 0x54c + *param_1 + 0x968;
  if ((0.0 < param_3) && (param_3 < (float)(*(int *)(iVar4 + 0x520) + 1))) {
    fVar6 = (float10)round((float10)param_3);
    iVar1 = (int)ROUND(fVar6);
    iVar5 = 0;
    fVar2 = (float)((float10)param_3 - (float10)iVar1);
    if (0 < iVar1) {
      iVar5 = *(int *)(iVar4 + 0x520 + iVar1 * 4);
    }
    iVar3 = *(int *)(iVar4 + 100);
    if (iVar1 < *(int *)(iVar4 + 0x520)) {
      iVar3 = *(int *)(iVar4 + 0x524 + iVar1 * 4);
    }
    fVar2 = (float)iVar5 * (1.0 - fVar2) + (float)iVar3 * fVar2;
    if (fVar2 < 0.0) {
      local_1c = 0.0;
    }
    else {
      local_1c = (float)(*(int *)(iVar4 + 100) + -1);
      if (fVar2 <= local_1c) {
        return fVar2;
      }
    }
  }
  return local_1c;
}
