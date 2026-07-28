// Name: core_colonel.cpp_CColonel_processMotionEvents_FUN_0043a980
// Address: 0043a980
// Address Range: [[0043a980, 0043a9dd]]
// Convention: unknown
// Signature: ushort core_colonel_cpp_CColonel_processMotionEvents_FUN_0043a980(CCharacter *param_1,float param_2)

#include "nocturne.h"

ushort core_colonel_cpp_CColonel_processMotionEvents_FUN_0043a980(CCharacter *param_1,float param_2)

{
  uint bone_index;
  
  do {
    bone_index = core_motion_cpp_CMotionController_advance_FUN_004e11c0
                           (&(param_1->model).motion_controller,&param_2);
    if (bone_index < 100) {
      core_charactr_cpp_CCharacter_processMotion_FUN_0042add0(param_1,bone_index);
    }
    else if ((100 < bone_index) && (bone_index != 0x65)) {
      core_charactr_cpp_CCharacter_processMotion_FUN_0042add0(param_1,bone_index);
    }
  } while (0.0 < param_2);
  return (ushort)(0.0 < param_2) << 8 | (ushort)NAN(param_2) << 10 | (ushort)(param_2 == 0.0) << 0xe
  ;
}
