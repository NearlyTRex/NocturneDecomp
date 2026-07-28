// Name: cockpit_ckptutil.c_blitRectangleClipped_FUN_0042db50
// Address: 0042db50
// Address Range: [[0042db50, 0042dcb5]]
// Convention: unknown
// Signature: int cockpit_ckptutil_c_blitRectangleClipped_FUN_0042db50(int param_1,int param_2,int param_3,int param_4,int param_5)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int cockpit_ckptutil_c_blitRectangleClipped_FUN_0042db50(int param_1,int param_2,int param_3,int param_4,int param_5)

{
  int iVar1;
  int iVar2;
  code *pcVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  
  iVar1 = _DAT_01c00c60 - param_2;
  iVar2 = _DAT_01bd2fa4 - _DAT_01bd2fa0;
  iVar6 = _DAT_01c00c58 - param_2;
  iVar4 = iVar2;
  if (param_1 != 0) {
    pcVar3 = (code *)cockpit_ckptutil_c_FUN_0042d130();
    iVar4 = param_4 + -1;
    if (DAT_005b7624 == 8) {
      param_2 = *(int *)(&DAT_01bd2fa0 + param_3 * 4) + param_2;
      iVar5 = 0;
      if (((iVar6 < 1) || (iVar5 = iVar6, iVar6 <= iVar4)) &&
         (((iVar6 = iVar4, iVar4 <= iVar1 || (iVar6 = iVar1, iVar5 <= iVar1)) &&
          (iVar1 = 0, iVar4 = param_5, 0 < param_5)))) {
        do {
          (*pcVar3)(param_2 + iVar5,param_1 + iVar5,(iVar6 - iVar5) + 1);
          iVar1 = iVar1 + 1;
          param_2 = param_2 + iVar2;
          param_1 = param_1 + param_4;
        } while (iVar1 < param_5);
        return iVar2;
      }
    }
    else {
      iVar7 = *(int *)(&DAT_01bd2fa0 + param_3 * 4) + param_2 * 2;
      iVar5 = 0;
      if (((iVar6 < 1) || (iVar5 = iVar6, iVar6 <= iVar4)) &&
         ((iVar6 = iVar4, iVar4 <= iVar1 || (iVar4 = iVar1, iVar6 = iVar1, iVar5 <= iVar1)))) {
        iVar1 = 0;
        iVar4 = param_5;
        if (0 < param_5) {
          do {
            (*pcVar3)(iVar5 * 2 + iVar7,param_1 + iVar5,(iVar6 - iVar5) + 1);
            iVar1 = iVar1 + 1;
            iVar7 = iVar7 + (iVar2 / 2) * 2;
            param_1 = param_1 + param_4;
          } while (iVar1 < param_5);
          return param_4;
        }
      }
    }
  }
  return iVar4;
}
