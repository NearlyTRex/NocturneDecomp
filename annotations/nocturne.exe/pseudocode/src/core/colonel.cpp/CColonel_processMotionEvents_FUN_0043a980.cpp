// Name: core_colonel.cpp_CColonel_processMotionEvents_FUN_0043a980
// Address: 0043a980
// Address Range: [[0043a980, 0043a9dd]]
// Convention: unknown
// Signature: ushort core_colonel_cpp_CColonel_processMotionEvents_FUN_0043a980(int param_1,float param_2)

#include "nocturne.h"

ushort core_colonel_cpp_CColonel_processMotionEvents_FUN_0043a980(int param_1,float param_2)

{
  uint uVar1;
  
  do {
    uVar1 = core_motion_cpp_CMotionController_advance_FUN_004e11c0(param_1 + 0x150,&param_2);
    if (uVar1 < 100) {
      core_charactr_cpp_CCharacter_processMotion_FUN_0042add0(param_1,uVar1);
    }
    else if ((100 < uVar1) && (uVar1 != 0x65)) {
      core_charactr_cpp_CCharacter_processMotion_FUN_0042add0(param_1,uVar1);
    }
  } while (0.0 < param_2);
  return (ushort)(0.0 < param_2) << 8 | (ushort)NAN(param_2) << 10 | (ushort)(param_2 == 0.0) << 0xe
  ;
}
