// Name: core_prye.cpp_FUN_0051e690
// Address: 0051e690
// Address Range: [[0051e690, 0051e6c4]]
// Convention: unknown
// Signature: void core_prye_cpp_FUN_0051e690(CCharacter *param_1,CVector3f *param_2,int param_3)

#include "nocturne.h"

void core_prye_cpp_FUN_0051e690(CCharacter *param_1,CVector3f *param_2,int param_3)

{
  CVector3f CStack_18;
  
  CStack_18._4_4_ = *(uint *)(param_3 + 4);
  CStack_18._0_4_ = 0;
  CStack_18._8_4_ = 0;
  core_charactr_cpp_CCharacter_setPositionAndOrientation_FUN_0042b8d0(param_1,param_2,&CStack_18);
  return;
}
