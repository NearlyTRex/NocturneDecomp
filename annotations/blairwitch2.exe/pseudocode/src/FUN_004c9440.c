// Name: FUN_004c9440
// Address: 004c9440
// Address Range: [[004c9440, 004c94b6]]
// Convention: unknown
// Signature: void FUN_004c9440(void)

#include "nocturne.h"

void FUN_004c9440(void)

{
  int iVar1;
  byte *puVar2;
  
  if ((*(int *)(0x01CB6900 + 0x14) != 0) && (iVar1 = FUN_0046b960(DAT_0060b280), iVar1 == 0)) {
    FUN_00530980(0x01E661B8,0,0,0,0,0);
    puVar2 = (byte *)0x1cb82f4;
    FUN_004c7490(0x1cb82f4);
    do {
      if (0.0 < *(float *)(puVar2 + 0x24)) {
        (**(code **)(*(int *)(puVar2 + 0x3c) + 8))(puVar2);
      }
      puVar2 = puVar2 + 0x48;
    } while (puVar2 != &DAT_01cbcaf4);
  }
  return;
}
