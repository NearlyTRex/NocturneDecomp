// Name: FUN_00403a50
// Address: 00403a50
// Address Range: [[00403a50, 00403a9b]]
// Convention: unknown
// Signature: int FUN_00403a50(int param_1)

#include "nocturne.h"

int FUN_00403a50(int param_1)

{
  int iVar1;
  uint *puVar2;
  
  puVar2 = (uint *)(param_1 + 0xc);
  iVar1 = 0;
  if (0 < *(int *)(param_1 + 8)) {
    do {
      (&DAT_0062902c)[(*(int *)(param_1 + 4) + iVar1) * 0xc] = *puVar2;
      *(uint *)(&DAT_00629030 + (*(int *)(param_1 + 4) + iVar1) * 0x30) = puVar2[1];
      iVar1 = iVar1 + 1;
      puVar2 = puVar2 + 2;
    } while (iVar1 < *(int *)(param_1 + 8));
  }
  return *(int *)(param_1 + 8) * 8 + param_1 + 0xc;
}
