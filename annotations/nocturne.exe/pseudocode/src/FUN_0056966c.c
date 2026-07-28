// Name: FUN_0056966c
// Address: 0056966c
// Address Range: [[0056966c, 005696e7]]
// Convention: unknown
// Signature: int FUN_0056966c(ushort *param_1,undefined4 param_2,int param_3)

#include "nocturne.h"

int FUN_0056966c(ushort *param_1,uint param_2,int param_3)

{
  ushort uVar1;
  int iVar2;
  int iVar3;
  byte local_14 [8];
  
  iVar3 = 0;
  if (param_3 == -1) {
    while (uVar1 = *param_1, uVar1 != 0) {
      param_1 = param_1 + 1;
      iVar2 = WideCharToSingleByte((wchar_t)local_14,(char *)(uint)uVar1);
      if (iVar2 != -1) {
        iVar3 = iVar3 + iVar2;
      }
    }
  }
  else {
    while ((uVar1 = *param_1, uVar1 != 0 && (iVar3 <= param_3))) {
      param_1 = param_1 + 1;
      iVar2 = WideCharToSingleByte((wchar_t)local_14,(char *)(uint)uVar1);
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
