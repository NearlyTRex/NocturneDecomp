// Name: FUN_10001020
// Address: 10001020
// Address Range: [[10001020, 10001074]]
// Convention: unknown
// Signature: void FUN_10001020(int param_1,int param_2)

#include "nocturne.h"

void FUN_10001020(int param_1,int param_2)

{
  int iVar1;
  int *in_ECX;
  int iVar2;
  int *piVar3;
  int *piVar4;
  
  piVar3 = in_ECX + 4;
  *in_ECX = param_1;
  in_ECX[1] = param_2;
  piVar4 = piVar3;
  for (iVar2 = 0x12000; iVar2 != 0; iVar2 = iVar2 + -1) {
    *piVar4 = 0;
    piVar4 = piVar4 + 1;
  }
  iVar2 = 0;
  in_ECX[2] = 0;
  in_ECX[3] = 0;
  if (0 < *in_ECX) {
    while( true ) {
      iVar1 = FUN_10002f60(in_ECX[1]);
      if (iVar1 == -1) break;
      *piVar3 = iVar1;
      piVar3 = piVar3 + 0x12;
      iVar2 = iVar2 + 1;
      if (*in_ECX <= iVar2) {
        return;
      }
    }
    *in_ECX = iVar2;
  }
  return;
}
