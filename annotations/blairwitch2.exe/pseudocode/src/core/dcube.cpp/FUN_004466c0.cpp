// Name: core_dcube.cpp_FUN_004466c0
// Address: 004466c0
// Address Range: [[004466c0, 00446741]]
// Convention: unknown
// Signature: void core_dcube_cpp_FUN_004466c0(int *param_1)

#include "nocturne.h"

void core_dcube_cpp_FUN_004466c0(int *param_1)

{
  if ((void *)param_1[9] != (void *)0x0) {
    FUN_005b7fce((void *)param_1[9]);
    param_1[9] = 0;
  }
  if ((void *)param_1[0xb] != (void *)0x0) {
    FUN_005b7fce((void *)param_1[0xb]);
    param_1[0xb] = 0;
  }
  if (param_1[0xc] != 0) {
    FUN_005b86a0(param_1[0xc]);
    param_1[0xc] = 0;
  }
  if (*param_1 != 0) {
    FUN_005b86a0(*param_1);
    *param_1 = 0;
  }
  if (param_1[1] == 0) {
    return;
  }
  FUN_005b86a0(param_1[1]);
  param_1[1] = 0;
  return;
}
