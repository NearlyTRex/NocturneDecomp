// Name: FUN_005c9db8
// Address: 005c9db8
// Address Range: [[005c9db8, 005c9deb]]
// Convention: unknown
// Signature: undefined4 FUN_005c9db8(int *param_1,int *param_2)

#include "nocturne.h"

uint FUN_005c9db8(int *param_1,int *param_2)

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
