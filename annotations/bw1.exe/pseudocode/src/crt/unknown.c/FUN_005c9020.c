// Name: crt_unknown.c_FUN_005c9020
// Address: 005c9020
// Address Range: [[005c9020, 005c907f]]
// Convention: unknown
// Signature: int crt_unknown_c_FUN_005c9020(byte *param_1,int param_2)

#include "nocturne.h"

int FUN_005c9020(byte *param_1,int param_2)

{
  int iVar1;
  int iVar2;
  
  iVar2 = 0;
  for (; (iVar1 = FUN_005cc560(param_1), iVar1 == 0 && (param_2 != 0));
      param_2 = param_2 + -1) {
    if ((g_MultibyteLocaleActive == 0) || ((g_LeadByteTable[*param_1] & 1U) == 0)) {
      iVar2 = iVar2 + 1;
    }
    else {
      if (param_1[1] == 0) {
        return iVar2;
      }
      iVar1 = FUN_005c9110(param_1);
      iVar2 = iVar2 + iVar1;
    }
    param_1 = (byte *)FUN_005c90c0(param_1);
  }
  return iVar2;
}
