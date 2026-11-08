// Name: FUN_00505900
// Address: 00505900
// Address Range: [[00505900, 00505945]]
// Convention: unknown
// Signature: int FUN_00505900(int param_1,int *param_2)

#include "nocturne.h"

int FUN_00505900(int param_1,int *param_2)

{
  int *piVar1;
  int iVar2;
  
  iVar2 = 0;
  if (0 < *(int *)(param_1 + 0x1c)) {
    piVar1 = (int *)(param_1 + 0x3c);
    do {
      if (((short)piVar1[1] == (short)param_2[1]) && (*param_2 == *piVar1)) {
        return iVar2;
      }
      iVar2 = iVar2 + 1;
      piVar1 = piVar1 + 0x20;
    } while (iVar2 < *(int *)(param_1 + 0x1c));
  }
  return -1;
}
