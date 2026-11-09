// Name: crt_unknown.c_FUN_005c426c
// Address: 005c426c
// Address Range: [[005c426c, 005c428e]]
// Convention: unknown
// Signature: void crt_unknown_c_FUN_005c426c(byte *param_1)

#include "nocturne.h"

void FUN_005c426c(byte *param_1)

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
