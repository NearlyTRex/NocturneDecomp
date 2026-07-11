// Name: FUN_00544e60
// Address: 00544e60
// Address Range: [[00544e60, 00544ee2]]
// Convention: unknown
// Signature: void FUN_00544e60(undefined4 *param_1)

#include "nocturne.h"

void FUN_00544e60(uint *param_1)

{
  uint *puVar1;
  int iVar2;
  uint *puVar3;
  
  param_1[0x34c02] = 0;
  iVar2 = 0;
  puVar1 = param_1;
  puVar3 = param_1;
  if (0 < (int)param_1[1]) {
    do {
      *(byte *)(puVar3 + 0xc02) = 0;
      puVar1[2] = 0;
      if (puVar1[0x402] != 0) {
        FUN_005638d0(puVar1[0x402]);
        puVar1[0x402] = 0;
      }
      if (puVar1[0x802] != 0) {
        FUN_005638d0(puVar1[0x802]);
        puVar1[0x802] = 0;
      }
      iVar2 = iVar2 + 1;
      puVar1 = puVar1 + 1;
      puVar3 = puVar3 + 0x10;
    } while (iVar2 < (int)param_1[1]);
  }
  *param_1 = 0;
  return;
}
