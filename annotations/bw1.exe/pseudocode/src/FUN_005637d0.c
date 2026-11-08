// Name: FUN_005637d0
// Address: 005637d0
// Address Range: [[005637d0, 005638b6]]
// Convention: unknown
// Signature: void FUN_005637d0(int *param_1)

#include "nocturne.h"

void FUN_005637d0(int *param_1)

{
  int *piVar1;
  int iVar2;
  
  iVar2 = 0;
  piVar1 = param_1;
  if (0 < *param_1) {
    do {
      FUN_005c0336(piVar1[0x10]);
      piVar1[0x10] = 0;
      FUN_005c0336(piVar1[0x1f]);
      piVar1[0x1f] = 0;
      FUN_005c0336(piVar1[0x24]);
      piVar1[0x24] = 0;
      FUN_005c0336(piVar1[0x29]);
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
  FUN_005bfb70(param_1 + 0x30,0,0xb40);
  param_1[0x300] = 0;
  *param_1 = 0;
  *(byte *)(param_1 + 0xd6c) = 0;
  *(byte *)(param_1 + 0xd57) = 0;
  param_1[0xd6b] = 0;
  return;
}
