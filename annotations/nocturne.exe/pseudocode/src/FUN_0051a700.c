// Name: FUN_0051a700
// Address: 0051a700
// Address Range: [[0051a700, 0051a77c]]
// Convention: unknown
// Signature: int FUN_0051a700(int *param_1,undefined4 param_2)

#include "nocturne.h"

int FUN_0051a700(int *param_1,uint param_2)

{
  int iVar1;
  float fVar2;
  int extraout_ECX;
  float10 fVar3;
  
  iVar1 = FUN_00461090(DAT_005ae704);
  if (iVar1 == 0) {
    iVar1 = 0;
    if (1 < *param_1) {
      fVar2 = (float)FUN_0041d450(param_2);
      fVar3 = (float10)fVar2;
      FUN_00563a30();
      iVar1 = extraout_ECX + -1;
      if (0 < iVar1) {
        param_1 = param_1 + iVar1 * 2;
        do {
          if ((param_1[2] == 0) && ((int)ROUND(fVar3) < param_1[1])) {
            return iVar1;
          }
          iVar1 = iVar1 + -1;
          param_1 = param_1 + -2;
        } while (0 < iVar1);
      }
      return iVar1;
    }
  }
  else {
    iVar1 = *param_1 + -1;
  }
  return iVar1;
}
