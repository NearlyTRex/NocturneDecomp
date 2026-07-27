// Name: cockpit_ckptutil.c_FUN_0042e220
// Address: 0042e220
// Address Range: [[0042e220, 0042e28d]]
// Convention: unknown
// Signature: void cockpit_ckptutil_c_FUN_0042e220(int param_1,int param_2,undefined4 param_3,int param_4,int param_5,int param_6,int param_7,int param_8)

#include "nocturne.h"

void cockpit_ckptutil_c_FUN_0042e220(int param_1,int param_2,uint param_3,int param_4,int param_5,int param_6,int param_7,int param_8)

{
  code *pcVar1;
  int iVar2;
  
  if ((param_4 != 0) && (param_1 != 0)) {
    pcVar1 = (code *)cockpit_ckptutil_c_FUN_0042d150();
    param_1 = param_1 + param_8 * param_2 + param_7;
    iVar2 = 0;
    if (0 < param_6) {
      do {
        iVar2 = iVar2 + 1;
        (*pcVar1)(param_1,param_4,param_5);
        param_4 = param_4 + param_5;
        param_1 = param_1 + param_2;
      } while (iVar2 < param_6);
      return;
    }
  }
  return;
}
