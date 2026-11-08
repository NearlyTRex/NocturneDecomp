// Name: FUN_00543d00
// Address: 00543d00
// Address Range: [[00543d00, 00543d7c]]
// Convention: unknown
// Signature: int FUN_00543d00(int *param_1,undefined4 param_2)

#include "nocturne.h"

int FUN_00543d00(int *param_1,uint param_2)

{
  int iVar1;
  float fVar2;
  int extraout_ECX;
  float10 fVar3;
  
  iVar1 = FUN_0046b960(DAT_0060b280);
  if (iVar1 == 0) {
    iVar1 = 0;
    if (1 < *param_1) {
      fVar2 = (float)FUN_0041ae50(param_2);
      fVar3 = (float10)fVar2;
      FUN_005b7ff0();
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
