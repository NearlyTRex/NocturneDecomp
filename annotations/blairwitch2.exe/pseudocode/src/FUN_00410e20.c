// Name: FUN_00410e20
// Address: 00410e20
// Address Range: [[00410e20, 00410e5c]]
// Convention: unknown
// Signature: undefined4 FUN_00410e20(int param_1,int *param_2)

#include "nocturne.h"

uint FUN_00410e20(int param_1,int *param_2)

{
  int iVar1;
  
  if (*param_2 != 0) {
    return 0;
  }
  if (*(char *)(param_1 + 0x2c4) != '\0') {
    iVar1 = FUN_0040c840(DAT_007bbff4,param_1 + 0x2c4);
    if (iVar1 == 0) {
      return 0;
    }
  }
  return 1;
}
