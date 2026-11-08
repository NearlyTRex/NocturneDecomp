// Name: FUN_005b1890
// Address: 005b1890
// Address Range: [[005b1890, 005b18df]]
// Convention: unknown
// Signature: void FUN_005b1890(int *param_1,undefined4 *param_2)

#include "nocturne.h"

void FUN_005b1890(int *param_1,uint *param_2)

{
  int iVar1;
  int *piVar2;
  int iVar3;
  
  iVar3 = 0;
  piVar2 = param_1;
  if (0 < *param_1) {
    do {
      while( true ) {
        iVar1 = piVar2[0x65];
        if ((uint *)(iVar1 + 0x3ab24) == param_2) break;
        *(uint *)(iVar1 + 0x3ab24) = *param_2;
        *(uint *)(iVar1 + 0x3ab28) = param_2[1];
        *(uint *)(iVar1 + 0x3ab2c) = param_2[2];
        iVar3 = iVar3 + 1;
        piVar2 = piVar2 + 1;
        if (*param_1 <= iVar3) {
          return;
        }
      }
      iVar3 = iVar3 + 1;
      piVar2 = piVar2 + 1;
    } while (iVar3 < *param_1);
  }
  return;
}
