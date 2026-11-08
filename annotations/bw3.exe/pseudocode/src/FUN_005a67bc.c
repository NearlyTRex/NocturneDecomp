// Name: FUN_005a67bc
// Address: 005a67bc
// Address Range: [[005a67bc, 005a6837]]
// Convention: unknown
// Signature: int FUN_005a67bc(short *param_1,undefined4 param_2,int param_3)

#include "nocturne.h"

int FUN_005a67bc(short *param_1,uint param_2,int param_3)

{
  short sVar1;
  int iVar2;
  int iVar3;
  byte local_14 [8];
  
  iVar3 = 0;
  if (param_3 == -1) {
    while (sVar1 = *param_1, sVar1 != 0) {
      param_1 = param_1 + 1;
      iVar2 = FUN_005ad320(local_14,sVar1);
      if (iVar2 != -1) {
        iVar3 = iVar3 + iVar2;
      }
    }
  }
  else {
    while ((sVar1 = *param_1, sVar1 != 0 && (iVar3 <= param_3))) {
      param_1 = param_1 + 1;
      iVar2 = FUN_005ad320(local_14,sVar1);
      if (iVar2 != -1) {
        iVar3 = iVar3 + iVar2;
      }
    }
    if (param_3 < iVar3) {
      return param_3;
    }
  }
  return iVar3;
}
