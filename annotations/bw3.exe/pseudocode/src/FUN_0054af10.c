// Name: FUN_0054af10
// Address: 0054af10
// Address Range: [[0054af10, 0054afaa]]
// Convention: unknown
// Signature: int FUN_0054af10(int *param_1,undefined4 param_2)

#include "nocturne.h"

int FUN_0054af10(int *param_1,uint param_2)

{
  int iVar1;
  float fVar2;
  int extraout_ECX;
  float10 fVar3;
  
  iVar1 = FUN_0046d540(DAT_005f2afc);
  if (iVar1 != 0) {
    return *param_1 + -1;
  }
  if ((*param_1 < 2) || (*(int *)(0x01D2130C + 0x24c) != 0)) {
    return 0;
  }
  fVar2 = (float)FUN_0041e100(param_2);
  fVar3 = (float10)fVar2;
  FUN_005a3120();
  iVar1 = extraout_ECX + -1;
  if (0 < iVar1) {
    param_1 = param_1 + iVar1 * 2;
    do {
      while (param_1[2] == 0) {
        if ((int)ROUND(fVar3) < param_1[1]) {
          return iVar1;
        }
        iVar1 = iVar1 + -1;
        param_1 = param_1 + -2;
        if (iVar1 < 1) {
          return iVar1;
        }
      }
      iVar1 = iVar1 + -1;
      param_1 = param_1 + -2;
    } while (0 < iVar1);
  }
  return iVar1;
}
