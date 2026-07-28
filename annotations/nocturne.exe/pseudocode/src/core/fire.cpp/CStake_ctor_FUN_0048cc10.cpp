// Name: core_fire.cpp_CStake_ctor_FUN_0048cc10
// Address: 0048cc10
// Address Range: [[0048cc10, 0048cc23]]
// Convention: unknown
// Signature: int * core_fire_cpp_CStake_ctor_FUN_0048cc10(int param_1)

#include "nocturne.h"

int * core_fire_cpp_CStake_ctor_FUN_0048cc10(int param_1)

{
  CBox *pCVar1;
  
  pCVar1 = core_box_cpp_CBox_ctor_FUN_0041a610((CBox *)(param_1 + 4));
  return &pCVar1[-1].is_valid;
}
