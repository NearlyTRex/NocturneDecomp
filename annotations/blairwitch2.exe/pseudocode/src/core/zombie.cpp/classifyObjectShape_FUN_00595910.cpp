// Name: core_zombie.cpp_classifyObjectShape_FUN_00595910
// Address: 00595910
// Address Range: [[00595910, 00595a59]]
// Convention: __cdecl
// Signature: undefined4 __cdecl core_zombie_cpp_classifyObjectShape_FUN_00595910(float *param_1)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint __cdecl core_zombie_cpp_classifyObjectShape_FUN_00595910(float *param_1)

{
  if ((((((float)_DAT_005eee2a <= *param_1) || ((float)_DAT_005eee2a <= param_1[1])) ||
       ((float)_DAT_005eee2a <= param_1[2])) ||
      ((*param_1 <= (float)_DAT_005eee32 || (param_1[1] <= (float)_DAT_005eee32)))) ||
     (param_1[2] <= (float)_DAT_005eee32)) {
    if (((*param_1 < 1.0) && (param_1[1] < 1.0)) &&
       (((float)_DAT_005eee2a < param_1[2] &&
        (((param_1[2] < (float)_DAT_005eee3a && (*param_1 <= param_1[2])) &&
         (param_1[1] <= param_1[2])))))) {
      return 1;
    }
    if ((((*param_1 < 1.0) && (param_1[1] < 1.0)) &&
        ((1.0 < param_1[2] && ((param_1[2] < (float)_DAT_005eee2a && (*param_1 < param_1[2])))))) &&
       (param_1[1] < param_1[2])) {
      return 3;
    }
  }
  return 0;
}
