// Name: FUN_004eb3f0
// Address: 004eb3f0
// Address Range: [[004eb3f0, 004eb433]]
// Convention: unknown
// Signature: int FUN_004eb3f0(int param_1,int *param_2)

#include "nocturne.h"

int FUN_004eb3f0(int param_1,int *param_2)

{
  int *piVar1;
  int iVar2;
  
  iVar2 = 0;
  if (0 < *(int *)(param_1 + 0x1c)) {
    piVar1 = (int *)(param_1 + 0x3c);
    do {
      if (((short)piVar1[1] == (short)param_2[1]) && (*piVar1 == *param_2)) {
        return iVar2;
      }
      iVar2 = iVar2 + 1;
      piVar1 = piVar1 + 0x1e;
    } while (iVar2 < *(int *)(param_1 + 0x1c));
  }
  return -1;
}
