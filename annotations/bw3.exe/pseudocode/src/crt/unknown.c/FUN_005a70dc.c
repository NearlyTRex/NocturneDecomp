// Name: crt_unknown.c_FUN_005a70dc
// Address: 005a70dc
// Address Range: [[005a70dc, 005a70fe]]
// Convention: unknown
// Signature: void crt_unknown_c_FUN_005a70dc(byte *param_1)

#include "nocturne.h"

void FUN_005a70dc(byte *param_1)

{
  byte bVar1;
  int iVar2;
  
  bVar1 = *param_1;
  while (bVar1 != 0) {
    iVar2 = toupper((uint)*param_1);
    *param_1 = (byte)iVar2;
    bVar1 = param_1[1];
    param_1 = param_1 + 1;
  }
  return;
}
