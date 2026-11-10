// Name: core_fire.cpp_FUN_0049eb8e
// Address: 0049eb8e
// Address Range: [[0049eb8e, 0049ebd0]]
// Convention: unknown
// Signature: void core_fire_cpp_FUN_0049eb8e(undefined4 param_1,SProjectedVertex *param_2,float *param_3)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void core_fire_cpp_FUN_0049eb8e(uint param_1,SProjectedVertex *param_2,float *param_3)

{
  CVector3i CStack_10;
  
  CStack_10.x = (int)ROUND(*param_3 * _DAT_005f64e4);
  CStack_10.y = (int)ROUND(param_3[1] * _DAT_005f64e4);
  CStack_10.z = (int)ROUND(param_3[2] * _DAT_005f64e4);
  engine_special_cpp_FUN_0055d9ec(param_2,&CStack_10);
  return;
}
