// Name: core_demnfolk.cpp_FUN_004549e0
// Address: 004549e0
// Address Range: [[004549e0, 00454b29]]
// Convention: unknown
// Signature: undefined4 core_demnfolk_cpp_FUN_004549e0(float *param_1)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint core_demnfolk_cpp_FUN_004549e0(float *param_1)

{
  if ((((((float)_DAT_005ba3a2 <= *param_1) || ((float)_DAT_005ba3a2 <= param_1[1])) ||
       ((float)_DAT_005ba3a2 <= param_1[2])) ||
      ((*param_1 <= (float)_DAT_005ba3aa || (param_1[1] <= (float)_DAT_005ba3aa)))) ||
     (param_1[2] <= (float)_DAT_005ba3aa)) {
    if (((*param_1 < 1.0) && (param_1[1] < 1.0)) &&
       (((float)_DAT_005ba3a2 < param_1[2] &&
        (((param_1[2] < (float)_DAT_005ba3b2 && (*param_1 <= param_1[2])) &&
         (param_1[1] <= param_1[2])))))) {
      return 1;
    }
    if ((((*param_1 < 1.0) && (param_1[1] < 1.0)) &&
        ((1.0 < param_1[2] && ((param_1[2] < (float)_DAT_005ba3a2 && (*param_1 < param_1[2])))))) &&
       (param_1[1] < param_1[2])) {
      return 3;
    }
  }
  return 0;
}
