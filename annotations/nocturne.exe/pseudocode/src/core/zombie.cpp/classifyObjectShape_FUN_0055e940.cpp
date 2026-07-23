// Name: core_zombie.cpp_classifyObjectShape_FUN_0055e940
// Address: 0055e940
// Address Range: [[0055e940, 0055ea89]]
// Convention: __cdecl
// Signature: undefined4 __cdecl core_zombie_cpp_classifyObjectShape_FUN_0055e940(float *param_1)

#include "nocturne.h"

uint __cdecl core_zombie_cpp_classifyObjectShape_FUN_0055e940(float *param_1)

{
  if ((((((float)2 <= *param_1) || ((float)2 <= param_1[1])) ||
       ((float)2 <= param_1[2])) ||
      ((*param_1 <= (float)0.69999999999999996 || (param_1[1] <= (float)0.69999999999999996)))) ||
     (param_1[2] <= (float)0.69999999999999996)) {
    if (((*param_1 < 1.0) && (param_1[1] < 1.0)) &&
       (((float)2 < param_1[2] &&
        (((param_1[2] < (float)6 && (*param_1 <= param_1[2])) &&
         (param_1[1] <= param_1[2])))))) {
      return 1;
    }
    if ((((*param_1 < 1.0) && (param_1[1] < 1.0)) &&
        ((1.0 < param_1[2] && ((param_1[2] < (float)2 && (*param_1 < param_1[2]))))))
       && (param_1[1] < param_1[2])) {
      return 3;
    }
  }
  return 0;
}
