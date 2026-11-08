// Name: FUN_004a2730
// Address: 004a2730
// Address Range: [[004a2730, 004a277a]]
// Convention: unknown
// Signature: int * FUN_004a2730(int *param_1,int param_2,int param_3)

#include "nocturne.h"

int * FUN_004a2730(int *param_1,int param_2,int param_3)

{
  int *piVar1;
  int *piVar2;
  int iVar3;
  
  iVar3 = 0;
  piVar2 = param_1;
  if (0 < *param_1) {
    do {
      piVar1 = (int *)piVar2[1];
      if ((((*piVar1 <= param_2) && (param_2 < *piVar1 + piVar1[2])) && (piVar1[1] <= param_3)) &&
         (param_3 < piVar1[1] + piVar1[3])) {
        return piVar1;
      }
      iVar3 = iVar3 + 1;
      piVar2 = piVar2 + 1;
    } while (iVar3 < *param_1);
  }
  return (int *)0x0;
}
