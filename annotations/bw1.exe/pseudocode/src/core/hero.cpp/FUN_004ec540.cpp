// Name: core_hero.cpp_FUN_004ec540
// Address: 004ec540
// Address Range: [[004ec540, 004ec565]]
// Convention: unknown
// Signature: void core_hero_cpp_FUN_004ec540(CCharacter *param_1,int param_2,CVector3f *param_3,float param_4)

#include "nocturne.h"

void core_hero_cpp_FUN_004ec540(CCharacter *param_1,int param_2,CVector3f *param_3,float param_4)

{
  *(uint *)(param_1 + 1) = 0;
  core_charactr_cpp_FUN_0042d5f0(param_1,param_2,param_3,param_4);
  return;
}
