// Name: FUN_00429390
// Address: 00429390
// Address Range: [[00429390, 00429412]]
// Convention: unknown
// Signature: void FUN_00429390(int param_1)

#include "nocturne.h"

void FUN_00429390(int param_1)

{
  int iVar1;
  uint *puVar2;
  uint *puVar3;
  byte bVar4;
  uint local_3c [6];
  uint local_24;
  uint local_20;
  uint local_1c;
  uint local_18;
  uint local_14;
  uint local_10;
  
  bVar4 = 0;
  if (*(char *)(param_1 + 0x2514) != '\0') {
    FUN_005487d0(param_1 + 0x2b4);
    puVar2 = local_3c;
    puVar3 = &local_24;
    for (iVar1 = 6; iVar1 != 0; iVar1 = iVar1 + -1) {
      *puVar3 = *puVar2;
      puVar2 = puVar2 + (uint)bVar4 * -2 + 1;
      puVar3 = puVar3 + (uint)bVar4 * -2 + 1;
    }
    if ((uint *)(param_1 + 0x27f4) != &local_24) {
      *(uint *)(param_1 + 0x27f4) = local_24;
      *(uint *)(param_1 + 0x27f8) = local_20;
      *(uint *)(param_1 + 0x27fc) = local_1c;
    }
    if ((uint *)(param_1 + 0x2800) != &local_18) {
      *(uint *)(param_1 + 0x2800) = local_18;
      *(uint *)(param_1 + 0x2804) = local_14;
      *(uint *)(param_1 + 0x2808) = local_10;
      return;
    }
  }
  return;
}
