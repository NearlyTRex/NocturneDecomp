// Name: FUN_00475db0
// Address: 00475db0
// Address Range: [[00475db0, 00475f0b]]
// Convention: unknown
// Signature: void FUN_00475db0(int *param_1)

#include "nocturne.h"

void FUN_00475db0(int *param_1)

{
  int iVar1;
  
  if (*param_1 <= param_1[0x46]) {
    param_1[0x46] = *param_1 + -1;
  }
  if (param_1[0x46] < 0) {
    param_1[0x46] = 0;
  }
  while (param_1[0x47] < 0) {
    param_1[0x47] = param_1[0x47] + param_1[0x49];
  }
  while (*param_1 <= param_1[0x47]) {
    param_1[0x47] = param_1[0x47] - param_1[0x49];
  }
  if (param_1[0x47] < 0) {
    param_1[0x47] = 0;
  }
  if (param_1[0x46] < *param_1) {
    while (iVar1 = param_1[0x47], param_1[0x46] < iVar1) {
      if (param_1[0x4b] == 1) {
        param_1[0x47] = iVar1 + -1;
      }
      else {
        param_1[0x47] = iVar1 - param_1[0x49];
      }
      if (param_1[0x47] < 0) {
        param_1[0x47] = 0;
      }
    }
    while (param_1[0x47] + param_1[0x48] <= param_1[0x46]) {
      if (param_1[0x4b] == 1) {
        param_1[0x47] = param_1[0x47] + 1;
      }
      else {
        param_1[0x47] = param_1[0x47] + param_1[0x49];
      }
    }
  }
  if ((param_1[0x4b] == 1) && (*param_1 - param_1[0x49] < param_1[0x47])) {
    param_1[0x47] = *param_1 - param_1[0x49];
  }
  if (param_1[0x47] < 0) {
    param_1[0x47] = 0;
    return;
  }
  return;
}
