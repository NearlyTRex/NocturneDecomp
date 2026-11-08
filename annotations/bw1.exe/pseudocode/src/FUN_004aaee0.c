// Name: FUN_004aaee0
// Address: 004aaee0
// Address Range: [[004aaee0, 004aaf21]]
// Convention: unknown
// Signature: int FUN_004aaee0(int *param_1)

#include "nocturne.h"

int FUN_004aaee0(int *param_1)

{
  int iVar1;
  int iVar2;
  int *piVar3;
  
  iVar2 = 0;
  if (0 < *param_1) {
    piVar3 = param_1 + 1;
    do {
      iVar1 = FUN_004a6c30(0x01C51D80,piVar3);
      if (iVar1 != 0) {
        return iVar2;
      }
      iVar2 = iVar2 + 1;
      piVar3 = piVar3 + 0x19;
    } while (iVar2 < *param_1);
  }
  return -1;
}
