// Name: core_bodypart.cpp_FUN_00416680
// Address: 00416680
// Address Range: [[00416680, 004166ea]]
// Convention: unknown
// Signature: void core_bodypart_cpp_FUN_00416680(int param_1,CVector3f *param_2)

#include "nocturne.h"

void core_bodypart_cpp_FUN_00416680(int param_1,CVector3f *param_2)

{
  CVector3f CStack_10;
  
  *(uint *)(param_1 + 0x133c) = 0;
  core_bodypart_cpp_FUN_004178c0(param_1);
  if (param_2 == (CVector3f *)0x0) {
    *(uint *)(param_1 + 0x10d0) = 0x41200000;
    return;
  }
  CStack_10._8_4_ = 0;
  CStack_10._4_4_ = 0;
  CStack_10._0_4_ = 0x4116cbe4;
  core_box_cpp_CBox_setupVelocities_FUN_005b4610((CBox *)(param_1 + 0x10e0),param_2,&CStack_10);
  *(uint *)(param_1 + 0x10d0) = 0x41200000;
  return;
}
