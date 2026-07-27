// Name: core_motion.cpp_CMotionController_getFramesForInterpolation_FUN_004e2070
// Address: 004e2070
// Address Range: [[004e2070, 004e211f] [004e2121, 004e2170]]
// Convention: __cdecl
// Signature: int __cdecl core_motion_cpp_CMotionController_getFramesForInterpolation_FUN_004e2070(int *param_1,float param_2,float param_3,int *param_4,int *param_5,float *param_6)

#include "nocturne.h"

int __cdecl core_motion_cpp_CMotionController_getFramesForInterpolation_FUN_004e2070(int *param_1,float param_2,float param_3,int *param_4,int *param_5,float *param_6)

{
  float fVar1;
  int iVar2;
  int iVar3;
  float10 fVar4;
  float10 fVar5;
  
  iVar3 = (int)param_2 * 0x54c + *param_1 + 0x968;
  if (param_3 <= 0.0) {
    iVar3 = *(int *)(iVar3 + 0x60);
    *param_4 = iVar3;
    *param_5 = iVar3;
    *param_6 = 0.0;
  }
  else {
    iVar2 = *(int *)(iVar3 + 100) + -1;
    fVar1 = (float)iVar2;
    if (fVar1 >= param_3 && (fVar1 == param_3) == 0) {
      fVar4 = (float10)*(int *)(iVar3 + 0x60) + (float10)param_3;
      fVar5 = (float10)round(fVar4);
      *param_4 = (int)ROUND(fVar5);
      *param_5 = *param_4 + 1;
      *param_6 = (float)(fVar4 - (float10)*param_4);
      return CONCAT22((short)((uint)iVar2 >> 0x10),
                      (ushort)(fVar1 < param_3) << 8 | (ushort)(NAN(fVar1) || NAN(param_3)) << 10 |
                      (ushort)(fVar1 == param_3) << 0xe);
    }
    *param_4 = *(int *)(iVar3 + 0x60) + *(int *)(iVar3 + 100) + -1;
    if ((*(int *)(iVar3 + 0x28) < *(int *)(iVar3 + 100) + -1) || (*(int *)(iVar3 + 0x30) != 1)) {
      iVar3 = *param_4;
      *param_5 = iVar3;
      *param_6 = 0.0;
      return iVar3;
    }
    fVar4 = (float10)round
                               ((float10)*(int *)(*param_1 + 0x9c8 + *(int *)(iVar3 + 0x34) * 0x54c)
                                + (float10)*(float *)(iVar3 + 0x38));
    *param_5 = (int)ROUND(fVar4);
    iVar3 = *(int *)(iVar3 + 100) + -1;
    param_2 = param_2 - (float)iVar3;
    *param_6 = param_2;
    iVar3 = CONCAT22((short)((uint)iVar3 >> 0x10),
                     (ushort)(1.0 < param_2) << 8 | (ushort)NAN(param_2) << 10 |
                     (ushort)(param_2 == 1.0) << 0xe);
    if (1.0 < param_2 || (param_2 == 1.0) != 0) {
      iVar3 = *param_5;
      *param_4 = iVar3;
      *param_6 = 0.0;
    }
  }
  return iVar3;
}
