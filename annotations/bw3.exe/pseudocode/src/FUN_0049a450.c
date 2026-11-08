// Name: FUN_0049a450
// Address: 0049a450
// Address Range: [[0049a450, 0049a47f]]
// Convention: unknown
// Signature: void FUN_0049a450(int *param_1)

#include "nocturne.h"

void FUN_0049a450(int *param_1)

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
  FUN_004a2010(0x01C73654,param_1 + 1);
  return;
}
