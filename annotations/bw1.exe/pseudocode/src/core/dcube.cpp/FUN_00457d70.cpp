// Name: core_dcube.cpp_FUN_00457d70
// Address: 00457d70
// Address Range: [[00457d70, 00457df1]]
// Convention: unknown
// Signature: void core_dcube_cpp_FUN_00457d70(int *param_1)

#include "nocturne.h"

void core_dcube_cpp_FUN_00457d70(int *param_1)

{
  if ((void *)param_1[9] != (void *)0x0) {
    FUN_005c0336((void *)param_1[9]);
    param_1[9] = 0;
  }
  if ((void *)param_1[0xb] != (void *)0x0) {
    FUN_005c0336((void *)param_1[0xb]);
    param_1[0xb] = 0;
  }
  if (param_1[0xc] != 0) {
    FUN_005c09f0(param_1[0xc]);
    param_1[0xc] = 0;
  }
  if (*param_1 != 0) {
    FUN_005c09f0(*param_1);
    *param_1 = 0;
  }
  if (param_1[1] == 0) {
    return;
  }
  FUN_005c09f0(param_1[1]);
  param_1[1] = 0;
  return;
}
