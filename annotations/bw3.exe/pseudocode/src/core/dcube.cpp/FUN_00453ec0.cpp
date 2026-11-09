// Name: core_dcube.cpp_FUN_00453ec0
// Address: 00453ec0
// Address Range: [[00453ec0, 00453f41]]
// Convention: unknown
// Signature: void core_dcube_cpp_FUN_00453ec0(int *param_1)

#include "nocturne.h"

void core_dcube_cpp_FUN_00453ec0(int *param_1)

{
  if ((void *)param_1[9] != (void *)0x0) {
    FUN_005a30b6((void *)param_1[9]);
    param_1[9] = 0;
  }
  if ((void *)param_1[0xb] != (void *)0x0) {
    FUN_005a30b6((void *)param_1[0xb]);
    param_1[0xb] = 0;
  }
  if (param_1[0xc] != 0) {
    FUN_005a3770(param_1[0xc]);
    param_1[0xc] = 0;
  }
  if (*param_1 != 0) {
    FUN_005a3770(*param_1);
    *param_1 = 0;
  }
  if (param_1[1] == 0) {
    return;
  }
  FUN_005a3770(param_1[1]);
  param_1[1] = 0;
  return;
}
