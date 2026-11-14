// Name: crt_unknown.c_FUN_005b083d
// Address: 005b083d
// Address Range: [[005b083d, 005b0890]]
// Convention: unknown
// Signature: undefined8 crt_unknown_c_FUN_005b083d(int *param_1)

#include "nocturne.h"

ulonglong FUN_005b083d(int *param_1)

{
  int iVar1;
  
  iVar1 = (*(code *)PTR_crt_unknown_c_FUN_005b0ea4_00607f10)(param_1);
  if (iVar1 == 0) {
    FUN_005b07f0(*param_1,param_1[1]);
    if (*param_1 == 1) {
      FUN_005a92d0();
    }
    else {
      FUN_005a92dc();
    }
  }
  return *(ulonglong *)(param_1 + 6);
}
