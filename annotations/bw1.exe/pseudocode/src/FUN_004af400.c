// Name: FUN_004af400
// Address: 004af400
// Address Range: [[004af400, 004af42f]]
// Convention: unknown
// Signature: void FUN_004af400(int *param_1)

#include "nocturne.h"

void FUN_004af400(int *param_1)

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
  FUN_004b5620(0x01C57074,param_1 + 1);
  return;
}
