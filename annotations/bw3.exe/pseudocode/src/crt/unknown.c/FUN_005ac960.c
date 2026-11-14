// Name: crt_unknown.c_FUN_005ac960
// Address: 005ac960
// Address Range: [[005ac960, 005ac9bf]]
// Convention: unknown
// Signature: int crt_unknown_c_FUN_005ac960(byte *param_1,int param_2)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int FUN_005ac960(byte *param_1,int param_2)

{
  int iVar1;
  int iVar2;
  
  iVar2 = 0;
  for (; (iVar1 = FUN_005af2a0(param_1), iVar1 == 0 && (param_2 != 0));
      param_2 = param_2 + -1) {
    if ((_DAT_02d25930 == 0) || ((*(byte *)(*param_1 + 0x2d25941) & 1) == 0)) {
      iVar2 = iVar2 + 1;
    }
    else {
      if (param_1[1] == 0) {
        return iVar2;
      }
      iVar1 = FUN_005aca50(param_1);
      iVar2 = iVar2 + iVar1;
    }
    param_1 = (byte *)FUN_005aca00(param_1);
  }
  return iVar2;
}
