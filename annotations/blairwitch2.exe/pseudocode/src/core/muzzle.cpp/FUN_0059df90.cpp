// Name: core_muzzle.cpp_FUN_0059df90
// Address: 0059df90
// Address Range: [[0059df90, 0059e099]]
// Convention: unknown
// Signature: undefined4 core_muzzle_cpp_FUN_0059df90(int *param_1,int param_2,int param_3)

#include "nocturne.h"

uint core_muzzle_cpp_FUN_0059df90(int *param_1,int param_2,int param_3)

{
  int *piVar1;
  int local_40;
  int local_3c;
  int local_38;
  int local_34;
  int local_30;
  int local_2c;
  int local_28;
  int local_24;
  int local_20;
  int local_1c;
  int local_18;
  int local_14;
  int local_10;
  int local_c;
  int local_8;
  
  if ((*param_1 != 0) && (param_1[0xf1] < 0x10)) {
    local_20 = 0;
    local_40 = param_2;
    local_1c = 0;
    local_3c = param_3;
    local_18 = 0;
    local_14 = 0;
    local_8 = 0;
    local_10 = 0;
    local_c = 0;
    core_muzzle_cpp_FUN_0059dd00(param_1,&local_40);
    piVar1 = param_1 + param_1[0xf1] * 0xf + 1;
    *piVar1 = local_40;
    piVar1[1] = local_3c;
    if (piVar1 + 2 != &local_38) {
      piVar1[2] = local_38;
      piVar1[3] = local_34;
      piVar1[4] = local_30;
    }
    if (piVar1 + 5 != &local_2c) {
      piVar1[5] = local_2c;
      piVar1[6] = local_28;
      piVar1[7] = local_24;
    }
    piVar1[8] = local_20;
    piVar1[9] = local_1c;
    piVar1[10] = local_18;
    piVar1[0xb] = local_14;
    piVar1[0xc] = local_10;
    piVar1[0xd] = local_c;
    piVar1[0xe] = local_8;
    param_1[0xf1] = param_1[0xf1] + 1;
    return 2;
  }
  return 0xffffffff;
}
