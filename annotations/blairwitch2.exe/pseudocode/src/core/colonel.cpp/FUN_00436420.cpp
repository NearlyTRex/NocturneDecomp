// Name: core_colonel.cpp_FUN_00436420
// Address: 00436420
// Address Range: [[00436420, 0043647d]]
// Convention: unknown
// Signature: ushort core_colonel_cpp_FUN_00436420(CCharacter *param_1,float param_2)

#include "nocturne.h"

ushort core_colonel_cpp_FUN_00436420(CCharacter *param_1,float param_2)

{
  uint bone_index;
  
  do {
    bone_index = core_motion_cpp_CMotionController_advance_FUN_005030c0
                           ((CMotionController *)&param_1->field_0x2b4,&param_2);
    if (bone_index < 100) {
      core_charactr_cpp_CCharacter_processMotion_FUN_0042aa00(param_1,bone_index);
    }
    else if ((100 < bone_index) && (bone_index != 0x65)) {
      core_charactr_cpp_CCharacter_processMotion_FUN_0042aa00(param_1,bone_index);
    }
  } while (0.0 < param_2);
  return (ushort)(0.0 < param_2) << 8 | (ushort)NAN(param_2) << 10 | (ushort)(param_2 == 0.0) << 0xe
  ;
}
