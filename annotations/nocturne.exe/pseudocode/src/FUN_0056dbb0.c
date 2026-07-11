// Name: FUN_0056dbb0
// Address: 0056dbb0
// Address Range: [[0056dbb0, 0056dc0f]]
// Convention: unknown
// Signature: int FUN_0056dbb0(byte *param_1,int param_2)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int FUN_0056dbb0(byte *param_1,int param_2)

{
  int iVar1;
  int iVar2;
  
  iVar2 = 0;
  for (; (iVar1 = FUN_00570ca0(param_1), iVar1 == 0 && (param_2 != 0)); param_2 = param_2 + -1) {
    if ((_DAT_02de5c30 == 0) || ((*(byte *)(*param_1 + 0x2de5c41) & 1) == 0)) {
      iVar2 = iVar2 + 1;
    }
    else {
      if (param_1[1] == 0) {
        return iVar2;
      }
      iVar1 = FUN_0056da50(param_1);
      iVar2 = iVar2 + iVar1;
    }
    param_1 = (byte *)FUN_0056da80(param_1);
  }
  return iVar2;
}
