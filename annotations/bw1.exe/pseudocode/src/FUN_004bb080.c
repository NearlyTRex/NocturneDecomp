// Name: FUN_004bb080
// Address: 004bb080
// Address Range: [[004bb080, 004bb0b8]]
// Convention: unknown
// Signature: void FUN_004bb080(int *param_1)

#include "nocturne.h"

void FUN_004bb080(int *param_1)

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
