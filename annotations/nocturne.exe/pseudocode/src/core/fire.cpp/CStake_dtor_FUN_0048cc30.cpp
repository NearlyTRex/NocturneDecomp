// Name: core_fire.cpp_CStake_dtor_FUN_0048cc30
// Address: 0048cc30
// Address Range: [[0048cc30, 0048cc45]]
// Convention: unknown
// Signature: int * core_fire_cpp_CStake_dtor_FUN_0048cc30(int param_1)

#include "nocturne.h"

int * core_fire_cpp_CStake_dtor_FUN_0048cc30(int param_1)

{
  CBox *pCVar1;
  
  pCVar1 = core_box_cpp_CBox_dtor_FUN_0041a6c0((CBox *)(param_1 + 4),0);
  return &pCVar1[-1].is_valid;
}
