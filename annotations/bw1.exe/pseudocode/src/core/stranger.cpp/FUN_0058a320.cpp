// Name: core_stranger.cpp_FUN_0058a320
// Address: 0058a320
// Address Range: [[0058a320, 0058a354]]
// Convention: unknown
// Signature: void core_stranger_cpp_FUN_0058a320(CCharacter *param_1,CVector3f *param_2,int param_3)

#include "nocturne.h"

void core_stranger_cpp_FUN_0058a320(CCharacter *param_1,CVector3f *param_2,int param_3)

{
  CVector3f CStack_18;
  
  CStack_18._4_4_ = *(uint *)(param_3 + 4);
  CStack_18._0_4_ = 0;
  CStack_18._8_4_ = 0;
  core_charactr_cpp_CCharacter_setPositionAndOrientation_FUN_0042cbe0(param_1,param_2,&CStack_18);
  return;
}
