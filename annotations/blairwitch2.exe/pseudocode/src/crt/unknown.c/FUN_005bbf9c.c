// Name: crt_unknown.c_FUN_005bbf9c
// Address: 005bbf9c
// Address Range: [[005bbf9c, 005bbfbe]]
// Convention: unknown
// Signature: void crt_unknown_c_FUN_005bbf9c(byte *param_1)

#include "nocturne.h"

void FUN_005bbf9c(byte *param_1)

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
