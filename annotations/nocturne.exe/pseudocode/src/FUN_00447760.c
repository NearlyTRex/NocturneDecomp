// Name: FUN_00447760
// Address: 00447760
// Address Range: [[00447760, 004477e4]]
// Convention: unknown
// Signature: void FUN_00447760(int param_1,int param_2)

#include "nocturne.h"

void FUN_00447760(int param_1,int param_2)

{
  uint uVar1;
  byte bVar2;
  byte bVar3;
  
  bVar3 = DAT_01c0063c;
  if ((*(byte *)(param_2 + 0x13) & 0x80) != 0) {
    *(uint *)(param_2 + 0x28) = 0;
    *(uint *)(param_2 + 0x24) = *(uint *)(param_2 + 0x28);
    *(uint *)(param_2 + 0x20) = *(uint *)(param_2 + 0x28);
    return;
  }
  uVar1 = *(uint *)(*(int *)(param_1 + 0x158) +
                   ((*(int *)(param_2 + 0x10) >> 0x10) +
                   (*(int *)(param_2 + 0x14) >> 0x10) * *(int *)(param_1 + 0x13c)) * 4);
  bVar2 = DAT_01c00630 & 0x1f;
  *(uint *)(param_2 + 0x20) = (uVar1 >> (DAT_01c00624 & 0x1f) & 0xff) << 8;
  *(uint *)(param_2 + 0x24) = (uVar1 >> bVar2 & 0xff) << 8;
  *(uint *)(param_2 + 0x28) = (uVar1 >> (bVar3 & 0x1f) & 0xff) << 8;
  return;
}
