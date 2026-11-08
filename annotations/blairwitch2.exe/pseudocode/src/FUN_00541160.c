// Name: FUN_00541160
// Address: 00541160
// Address Range: [[00541160, 00541246]]
// Convention: unknown
// Signature: void FUN_00541160(int *param_1)

#include "nocturne.h"

void FUN_00541160(int *param_1)

{
  int *piVar1;
  int iVar2;
  
  iVar2 = 0;
  piVar1 = param_1;
  if (0 < *param_1) {
    do {
      FUN_005b7fce(piVar1[0x10]);
      piVar1[0x10] = 0;
      FUN_005b7fce(piVar1[0x1f]);
      piVar1[0x1f] = 0;
      FUN_005b7fce(piVar1[0x24]);
      piVar1[0x24] = 0;
      FUN_005b7fce(piVar1[0x29]);
      piVar1[0x29] = 0;
      piVar1[0xb] = 0;
      piVar1[0x15] = 0;
      piVar1[0x1a] = 0;
      iVar2 = iVar2 + 1;
      piVar1 = piVar1 + 1;
    } while (iVar2 < *param_1);
  }
  param_1[0x2e] = 0;
  param_1[0x2f] = 0;
  FUN_005b77c0(param_1 + 0x30,0,0xb40);
  param_1[0x300] = 0;
  *param_1 = 0;
  *(byte *)(param_1 + 0xa9c) = 0;
  *(byte *)(param_1 + 0xa87) = 0;
  param_1[0xa9b] = 0;
  return;
}
