// Name: core_colonel.cpp_FUN_00445140
// Address: 00445140
// Address Range: [[00445140, 0044519d]]
// Convention: unknown
// Signature: ushort core_colonel_cpp_FUN_00445140(CCharacter *param_1,float param_2)

#include "nocturne.h"

ushort core_colonel_cpp_FUN_00445140(CCharacter *param_1,float param_2)

{
  uint bone_index;
  
  do {
    bone_index = core_motion_cpp_CMotionController_advance_FUN_00524270
                           (&(param_1->model).base,&param_2);
    if (bone_index < 100) {
      core_charactr_cpp_CCharacter_processMotion_FUN_00434a80(param_1,bone_index);
    }
    else if ((100 < bone_index) && (bone_index != 0x65)) {
      core_charactr_cpp_CCharacter_processMotion_FUN_00434a80(param_1,bone_index);
    }
  } while (0.0 < param_2);
  return (ushort)(0.0 < param_2) << 8 | (ushort)NAN(param_2) << 10 | (ushort)(param_2 == 0.0) << 0xe
  ;
}
