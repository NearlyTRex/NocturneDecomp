// Name: cockpit_ckptutil.c_blitHorizontallyClippedSprite_FUN_0042e290
// Address: 0042e290
// Address Range: [[0042e290, 0042e3ca]]
// Convention: unknown
// Signature: undefined8 cockpit_ckptutil_c_blitHorizontallyClippedSprite_FUN_0042e290(int param_1,int param_2,int param_3,int param_4,int param_5,int param_6,int param_7,int param_8)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

ulonglong cockpit_ckptutil_c_blitHorizontallyClippedSprite_FUN_0042e290(int param_1,int param_2,int param_3,int param_4,int param_5,int param_6,int param_7,int param_8)

{
  int iVar1;
  int iVar2;
  code *pcVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  
  iVar1 = (param_4 - param_2) + 1;
  iVar2 = _DAT_01bd2fa4 - _DAT_01bd2fa0;
  iVar4 = iVar2;
  iVar5 = _DAT_01bd2fa0;
  if (param_1 != 0) {
    pcVar3 = (code *)cockpit_ckptutil_c_FUN_0042d130();
    iVar6 = DAT_005b761c / 2 + param_3 * param_8 + param_1 + param_2;
    param_5 = param_5 - param_7;
    iVar4 = (param_3 + param_7) * 4;
    if (DAT_005b7624 == 8) {
      param_2 = *(int *)(&DAT_01bd2fa0 + iVar4) + param_2;
      iVar5 = 8;
      if (param_3 < param_5) {
        do {
          (*pcVar3)(param_2 - param_6,iVar6,iVar1);
          param_3 = param_3 + 1;
          param_2 = param_2 + iVar2;
          iVar6 = iVar6 + param_8;
        } while (param_3 < param_5);
        return CONCAT44(param_5,param_8);
      }
    }
    else {
      iVar7 = *(int *)(&DAT_01bd2fa0 + iVar4) + param_2 * 2;
      iVar4 = (iVar2 / 2) * 2;
      iVar5 = iVar2 >> 0x1f;
      if (param_3 < param_5) {
        do {
          (*pcVar3)(iVar7 + param_6 * -2,iVar6,iVar1);
          param_3 = param_3 + 1;
          iVar7 = iVar7 + iVar4;
          iVar6 = iVar6 + param_8;
        } while (param_3 < param_5);
        return CONCAT44(param_5,param_8);
      }
    }
  }
  return CONCAT44(iVar5,iVar4);
}
