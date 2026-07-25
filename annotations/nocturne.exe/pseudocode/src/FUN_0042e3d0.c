// Name: FUN_0042e3d0
// Address: 0042e3d0
// Address Range: [[0042e3d0, 0042e4a7]]
// Convention: unknown
// Signature: int FUN_0042e3d0(int param_1,undefined4 param_2,int param_3,int param_4,int param_5,int param_6)

#include "nocturne.h"

int FUN_0042e3d0(int param_1,uint param_2,int param_3,int param_4,int param_5,int param_6)

{
  int *piVar1;
  int iVar2;
  code *pcVar3;
  int iVar4;
  int iVar5;
  
  iVar2 = (param_5 - param_3) + 1;
  iVar5 = iVar2;
  if (param_1 != 0) {
    pcVar3 = (code *)FUN_0042d130();
    iVar5 = param_4 * 4;
    if (DAT_005b7624 == 8) {
      if (param_4 < param_6) {
        do {
          iVar4 = DAT_005b761c * param_4;
          piVar1 = (int *)(&DAT_01bd2fa0 + iVar5);
          iVar5 = iVar5 + 4;
          param_4 = param_4 + 1;
          iVar4 = (*pcVar3)(*piVar1 + param_3,param_1 + iVar4 + param_3,iVar2);
        } while (param_4 < param_6);
        return iVar4;
      }
    }
    else if (param_4 < param_6) {
      do {
        iVar4 = DAT_005b761c * param_4;
        piVar1 = (int *)(&DAT_01bd2fa0 + iVar5);
        iVar5 = iVar5 + 4;
        param_4 = param_4 + 1;
        iVar4 = (*pcVar3)(*piVar1 + param_3 * 2,iVar4 + param_3 + param_1,iVar2);
      } while (param_4 < param_6);
      return iVar4;
    }
  }
  return iVar5;
}
