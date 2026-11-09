// Name: crt_unknown.c_FUN_005c1af8
// Address: 005c1af8
// Address Range: [[005c1af8, 005c1b2b]]
// Convention: unknown
// Signature: undefined4 crt_unknown_c_FUN_005c1af8(int *param_1,int *param_2)

#include "nocturne.h"

uint FUN_005c1af8(int *param_1,int *param_2)

{
  uint uVar1;
  
  uVar1 = 0;
  if ((param_1[2] < param_2[2]) ||
     ((param_1[2] == param_2[2] &&
      ((param_1[1] < param_2[1] || ((param_1[1] == param_2[1] && (*param_1 < *param_2)))))))) {
    uVar1 = 1;
  }
  return uVar1;
}
