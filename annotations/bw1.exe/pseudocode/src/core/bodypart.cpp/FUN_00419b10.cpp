// Name: core_bodypart.cpp_FUN_00419b10
// Address: 00419b10
// Address Range: [[00419b10, 00419b7a]]
// Convention: unknown
// Signature: void core_bodypart_cpp_FUN_00419b10(int param_1,CVector3f *param_2)

#include "nocturne.h"

void core_bodypart_cpp_FUN_00419b10(int param_1,CVector3f *param_2)

{
  CVector3f CStack_10;
  
  *(uint *)(param_1 + 0xf2c) = 0;
  core_bodypart_cpp_FUN_0041ad40(param_1);
  if (param_2 == (CVector3f *)0x0) {
    *(uint *)(param_1 + 0xcbc) = 0x41200000;
    return;
  }
  CStack_10._8_4_ = 0;
  CStack_10._4_4_ = 0;
  CStack_10._0_4_ = 0x4116cbe4;
  core_box_cpp_CBox_setupVelocities_FUN_00420450((CBox *)(param_1 + 0xcd0),param_2,&CStack_10);
  *(uint *)(param_1 + 0xcbc) = 0x41200000;
  return;
}
