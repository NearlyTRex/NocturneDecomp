// Name: crt_unknown.c_FUN_005c57ad
// Address: 005c57ad
// Address Range: [[005c57ad, 005c5800]]
// Convention: unknown
// Signature: undefined8 crt_unknown_c_FUN_005c57ad(int *param_1)

#include "nocturne.h"

ulonglong FUN_005c57ad(int *param_1)

{
  int iVar1;
  
  iVar1 = (*(code *)PTR_crt_unknown_c_FUN_005c5e14_0061f7ec)(param_1);
  if (iVar1 == 0) {
    FUN_005c5760(*param_1,param_1[1]);
    if (*param_1 == 1) {
      FUN_005be190();
    }
    else {
      FUN_005be19c();
    }
  }
  return *(ulonglong *)(param_1 + 6);
}
