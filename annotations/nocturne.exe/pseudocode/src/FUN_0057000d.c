// Name: FUN_0057000d
// Address: 0057000d
// Address Range: [[0057000d, 00570074]]
// Convention: unknown
// Signature: int FUN_0057000d(int param_1,int param_2)

#include "nocturne.h"

int FUN_0057000d(int param_1,int param_2)

{
  int iVar1;
  int iVar2;
  
  if ((*(byte *)(param_1 + 0x3c) & 2) == 0) {
    return -1;
  }
  if ((*(byte *)(param_1 + 0x3c) & 4) == 0) {
    iVar2 = (**(code **)(*(int *)(param_1 + 0x28) + 0x28))(param_1);
    if (iVar2 != -1) {
      if (param_2 != -1) {
        **(byte **)(param_1 + 0x20) = (byte)param_2;
        *(int *)(param_1 + 0x20) = *(int *)(param_1 + 0x20) + 1;
      }
      return 0;
    }
  }
  else {
    iVar1 = *(int *)(param_1 + 0x20);
    *(int *)(param_1 + 0x20) = *(int *)(param_1 + 0x18);
    *(int *)(param_1 + 0x1c) = *(int *)(param_1 + 0x1c) + 0x200;
    iVar2 = 0;
    *(int *)(param_1 + 0x20) = *(int *)(param_1 + 0x20) + (iVar1 - *(int *)(param_1 + 0x18));
  }
  return iVar2;
}
