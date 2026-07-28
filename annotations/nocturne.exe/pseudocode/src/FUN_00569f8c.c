// Name: FUN_00569f8c
// Address: 00569f8c
// Address Range: [[00569f8c, 00569fae]]
// Convention: unknown
// Signature: void FUN_00569f8c(byte *param_1)

#include "nocturne.h"

void FUN_00569f8c(byte *param_1)

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
