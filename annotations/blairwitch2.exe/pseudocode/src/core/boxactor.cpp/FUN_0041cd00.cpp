// Name: core_boxactor.cpp_FUN_0041cd00
// Address: 0041cd00
// Address Range: [[0041cd00, 0041cd56]]
// Convention: unknown
// Signature: void core_boxactor_cpp_FUN_0041cd00(int param_1,CVector3f *param_2)

#include "nocturne.h"

void core_boxactor_cpp_FUN_0041cd00(int param_1,CVector3f *param_2)

{
  CVector3f CStack_10;
  
  *(uint *)(param_1 + 0x474) = 0;
  core_boxactor_cpp_FUN_0041bf10(param_1);
  if (param_2 == (CVector3f *)0x0) {
    return;
  }
  CStack_10._8_4_ = 0;
  CStack_10._4_4_ = 0;
  CStack_10._0_4_ = 0x4116cbe4;
  core_box_cpp_CBox_setupVelocities_FUN_005b4610((CBox *)(param_1 + 0x4f0),param_2,&CStack_10);
  return;
}
