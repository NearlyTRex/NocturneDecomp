// Name: cockpit_ckptutil.c_FUN_0042df00
// Address: 0042df00
// Address Range: [[0042df00, 0042e050]]
// Convention: unknown
// Signature: void cockpit_ckptutil_c_FUN_0042df00(int param_1,int param_2,int param_3,int param_4,int param_5)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void cockpit_ckptutil_c_FUN_0042df00(int param_1,int param_2,int param_3,int param_4,int param_5)

{
  code *pcVar1;
  int iVar2;
  int iVar3;
  int iStack_1c;
  int iStack_18;
  int iStack_14;
  
  iVar2 = _DAT_01bd2fa4 - _DAT_01bd2fa0;
  if (param_1 != 0) {
    pcVar1 = (code *)cockpit_ckptutil_c_FUN_0042d130();
    param_3 = param_3 * 4;
    if (DAT_005b7624 == 8) {
      param_2 = *(int *)(&DAT_01bd2fa0 + param_3) + param_2;
      iStack_18 = 0;
      if (0 < param_5) {
        do {
          (*pcVar1)(param_2,param_1,param_4);
          param_1 = param_1 + param_4;
          iStack_18 = iStack_18 + 1;
          param_2 = param_2 + iVar2;
        } while (iStack_18 < param_5);
        return;
      }
    }
    else if (DAT_005b7624 == 0x10) {
      iVar3 = *(int *)(&DAT_01bd2fa0 + param_3) + param_2 * 2;
      iStack_14 = 0;
      if (0 < param_5) {
        do {
          (*pcVar1)(iVar3,param_1,param_4);
          param_1 = param_1 + param_4;
          iStack_14 = iStack_14 + 1;
          iVar3 = iVar3 + (iVar2 / 2) * 2;
        } while (iStack_14 < param_5);
        return;
      }
    }
    else {
      iVar3 = *(int *)(&DAT_01bd2fa0 + param_3) + param_2 * 4;
      iStack_1c = 0;
      if (0 < param_5) {
        do {
          (*pcVar1)(iVar3,param_1,param_4);
          param_1 = param_1 + param_4;
          iStack_1c = iStack_1c + 1;
          iVar3 = iVar3 + ((int)((iVar2 + (iVar2 >> 0x1f) * -4) - (uint)((iVar2 >> 0x1f) << 1 < 0))
                          >> 2) * 4;
        } while (iStack_1c < param_5);
        return;
      }
    }
  }
  return;
}
