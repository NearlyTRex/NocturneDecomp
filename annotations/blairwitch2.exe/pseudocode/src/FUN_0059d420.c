// Name: FUN_0059d420
// Address: 0059d420
// Address Range: [[0059d420, 0059d434]]
// Convention: unknown
// Signature: void FUN_0059d420(int *param_1)

#include "nocturne.h"

void FUN_0059d420(int *param_1)

{
  int iVar1;
  
  iVar1 = *param_1;
  *param_1 = iVar1 + -1;
  if (-1 < iVar1 + -1) {
    return;
  }
  *param_1 = 0;
  return;
}
