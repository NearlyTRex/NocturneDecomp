// Name: FUN_004d8d80
// Address: 004d8d80
// Address Range: [[004d8d80, 004d8da2]]
// Convention: unknown
// Signature: int FUN_004d8d80(int param_1)

#include "nocturne.h"

int FUN_004d8d80(int param_1)

{
  int iVar1;
  int iVar2;
  
  iVar2 = 0;
  for (iVar1 = *(int *)(param_1 + 0x514); iVar1 != 0; iVar1 = *(int *)(iVar1 + 0x144)) {
    iVar2 = iVar2 + 1;
  }
  return iVar2;
}
