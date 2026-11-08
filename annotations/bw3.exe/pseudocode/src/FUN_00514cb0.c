// Name: FUN_00514cb0
// Address: 00514cb0
// Address Range: [[00514cb0, 00514cff]]
// Convention: unknown
// Signature: undefined4 FUN_00514cb0(int *param_1,undefined4 param_2)

#include "nocturne.h"

uint FUN_00514cb0(int *param_1,uint param_2)

{
  int iVar1;
  int *piVar2;
  int iVar3;
  
  iVar3 = 0;
  piVar2 = param_1;
  if (0 < *param_1) {
    do {
      iVar1 = FUN_00513c30(piVar2[1],param_2);
      if (-1 < iVar1) {
        FUN_00513ca0(piVar2[1],iVar1,param_2);
        return 1;
      }
      iVar3 = iVar3 + 1;
      piVar2 = piVar2 + 1;
    } while (iVar3 < *param_1);
  }
  return 0;
}
