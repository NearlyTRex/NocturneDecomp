// Name: FUN_0056d308
// Address: 0056d308
// Address Range: [[0056d308, 0056d33b]]
// Convention: unknown
// Signature: undefined4 FUN_0056d308(int *param_1,int *param_2)

#include "nocturne.h"

uint FUN_0056d308(int *param_1,int *param_2)

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
