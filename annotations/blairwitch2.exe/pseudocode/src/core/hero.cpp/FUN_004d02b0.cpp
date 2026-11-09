// Name: core_hero.cpp_FUN_004d02b0
// Address: 004d02b0
// Address Range: [[004d02b0, 004d02d5]]
// Convention: unknown
// Signature: void core_hero_cpp_FUN_004d02b0(CCharacter *param_1,int param_2,CVector3f *param_3,float param_4)

#include "nocturne.h"

void core_hero_cpp_FUN_004d02b0(CCharacter *param_1,int param_2,CVector3f *param_3,float param_4)

{
  *(uint *)(param_1 + 1) = 0;
  core_charactr_cpp_FUN_00423900(param_1,param_2,param_3,param_4);
  return;
}
