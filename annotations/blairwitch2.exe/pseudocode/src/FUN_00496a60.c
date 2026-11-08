// Name: FUN_00496a60
// Address: 00496a60
// Address Range: [[00496a60, 00496a8f]]
// Convention: unknown
// Signature: void FUN_00496a60(int *param_1)

#include "nocturne.h"

void FUN_00496a60(int *param_1)

{
  int iVar1;
  
  iVar1 = *param_1 + -1;
  *param_1 = iVar1;
  if (iVar1 < 0) {
    *param_1 = 0;
    return;
  }
  if (iVar1 != 1) {
    return;
  }
  FUN_0049ccd0(0x01C3DEB4,param_1 + 1);
  return;
}
