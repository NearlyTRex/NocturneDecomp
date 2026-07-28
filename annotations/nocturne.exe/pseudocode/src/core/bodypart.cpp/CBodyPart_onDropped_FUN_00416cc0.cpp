// Name: core_bodypart.cpp_CBodyPart_onDropped_FUN_00416cc0
// Address: 00416cc0
// Address Range: [[00416cc0, 00416d2a]]
// Convention: unknown
// Signature: void core_bodypart_cpp_CBodyPart_onDropped_FUN_00416cc0(int param_1,CVector3f *param_2)

#include "nocturne.h"

void core_bodypart_cpp_CBodyPart_onDropped_FUN_00416cc0(int param_1,CVector3f *param_2)

{
  CVector3f local_10;
  
  *(uint *)(param_1 + 0xf10) = 0;
  core_bodypart_cpp_CBodyPart_setupPhysicsBox_FUN_00417d70(param_1);
  if (param_2 == (CVector3f *)0x0) {
    *(uint *)(param_1 + 0xca4) = 0x41200000;
    return;
  }
  local_10.z = 0.0;
  local_10.y = 0.0;
  local_10.x = 9.424778;
  core_box_cpp_CBox_setupVelocities_FUN_0041cb40((CBox *)(param_1 + 0xcb4),param_2,&local_10);
  *(uint *)(param_1 + 0xca4) = 0x41200000;
  return;
}
