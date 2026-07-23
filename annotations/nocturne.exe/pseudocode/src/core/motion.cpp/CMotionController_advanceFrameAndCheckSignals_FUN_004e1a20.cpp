// Name: core_motion.cpp_CMotionController_advanceFrameAndCheckSignals_FUN_004e1a20
// Address: 004e1a20
// Address Range: [[004e1a20, 004e1bce]]
// Convention: __cdecl
// Signature: undefined4 __cdecl core_motion_cpp_CMotionController_advanceFrameAndCheckSignals_FUN_004e1a20(int *param_1,int *param_2,float *param_3,float param_4,undefined4 param_5)

#include "nocturne.h"

uint __cdecl core_motion_cpp_CMotionController_advanceFrameAndCheckSignals_FUN_004e1a20(int *param_1,int *param_2,float *param_3,float param_4,uint param_5)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  uint uVar5;
  float local_20;
  float fStack_18;
  
  iVar4 = *param_2 * 0x54c + *param_1 + 0x968;
  uVar5 = 0;
  iVar3 = 0;
  local_20 = param_4 * *(float *)(iVar4 + 0x20) + *param_3;
  iVar2 = iVar4;
  if (0 < *(int *)(iVar4 + 0x4a4)) {
    do {
      iVar1 = *(int *)(iVar2 + 0x4a8);
      if ((*param_3 <= (float)iVar1) && ((float)iVar1 <= local_20 + (float)0.001)) {
        local_20 = (float)iVar1 + (float)0.001;
        uVar5 = *(uint *)(iVar2 + 0x4ac);
      }
      iVar3 = iVar3 + 1;
      iVar2 = iVar2 + 8;
    } while (iVar3 < *(int *)(iVar4 + 0x4a4));
  }
  if ((double)local_20 < (double)*(int *)(iVar4 + 100) + -0.0001) {
    (**(code **)(param_1[0x14] + 8))
              (param_1,(float)*(int *)(iVar4 + 0x60) + *param_3,
               (float)*(int *)(iVar4 + 0x60) + local_20,param_5);
    *param_3 = local_20;
    return uVar5;
  }
  (**(code **)(param_1[0x14] + 8))
            (param_1,(float)*(int *)(iVar4 + 0x60) + *param_3,
             (float)(*(int *)(iVar4 + 0x60) + *(int *)(iVar4 + 100)),param_5);
  switch(*(uint *)(iVar4 + 0x30)) {
  case 3:
  case 4:
  case 5:
  case 6:
    *param_3 = (float)(*(int *)(iVar4 + 100) + -1);
    return uVar5;
  }
  fStack_18 = *(float *)(iVar4 + 0x38);
  if (fStack_18 == 1.5873523201947252e-314._0_4_) {
    iVar2 = (**(code **)(param_1[0x14] + 4))
                      (param_1,*param_2,(float)(*(int *)(iVar4 + 100) + -1),
                       *(uint *)(iVar4 + 0x34));
    fStack_18 = (float)iVar2;
  }
  *param_2 = *(int *)(iVar4 + 0x34);
  *param_3 = fStack_18;
  return uVar5;
}
