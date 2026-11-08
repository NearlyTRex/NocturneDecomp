// Name: FUN_004a26a0
// Address: 004a26a0
// Address Range: [[004a26a0, 004a26d8]]
// Convention: unknown
// Signature: void FUN_004a26a0(int *param_1)

#include "nocturne.h"

void FUN_004a26a0(int *param_1)

{
  int iVar1;
  int iVar2;
  int *piVar3;
  
  iVar2 = 0;
  piVar3 = param_1;
  if (0 < *param_1) {
    do {
      iVar1 = piVar3[1];
      if (iVar1 != 0) {
        (*(code *)**(uint **)(iVar1 + 0x14))(iVar1,2);
      }
      iVar2 = iVar2 + 1;
      piVar3 = piVar3 + 1;
    } while (iVar2 < *param_1);
  }
  *param_1 = 0;
  return;
}
