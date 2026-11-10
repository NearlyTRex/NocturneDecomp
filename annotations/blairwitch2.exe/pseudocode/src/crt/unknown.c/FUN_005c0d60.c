// Name: crt_unknown.c_FUN_005c0d60
// Address: 005c0d60
// Address Range: [[005c0d60, 005c0dbf]]
// Convention: unknown
// Signature: int crt_unknown_c_FUN_005c0d60(byte *param_1,int param_2)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int FUN_005c0d60(byte *param_1,int param_2)

{
  int iVar1;
  int iVar2;
  
  iVar2 = 0;
  for (; (iVar1 = FUN_005c4260(param_1), iVar1 == 0 && (param_2 != 0));
      param_2 = param_2 + -1) {
    if ((_DAT_026807f0 == 0) || ((*(byte *)(*param_1 + 0x2680801) & 1) == 0)) {
      iVar2 = iVar2 + 1;
    }
    else {
      if (param_1[1] == 0) {
        return iVar2;
      }
      iVar1 = FUN_005c0e50(param_1);
      iVar2 = iVar2 + iVar1;
    }
    param_1 = (byte *)FUN_005c0e00(param_1);
  }
  return iVar2;
}
