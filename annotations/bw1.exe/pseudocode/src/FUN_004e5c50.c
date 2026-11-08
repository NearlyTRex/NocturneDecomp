// Name: FUN_004e5c50
// Address: 004e5c50
// Address Range: [[004e5c50, 004e5cc6]]
// Convention: unknown
// Signature: void FUN_004e5c50(void)

#include "nocturne.h"

void FUN_004e5c50(void)

{
  int iVar1;
  byte *puVar2;
  
  if ((*(int *)(0x01CCF390 + 0x14) != 0) && (iVar1 = FUN_00483e60(DAT_00612560), iVar1 == 0)) {
    FUN_00551c30(0x01E82168,0,0,0,0,0);
    puVar2 = (byte *)0x1cd0eac;
    FUN_004e3e50(0x1cd0eac);
    do {
      if (0.0 < *(float *)(puVar2 + 0x24)) {
        (**(code **)(*(int *)(puVar2 + 0x3c) + 8))(puVar2);
      }
      puVar2 = puVar2 + 0x48;
    } while (puVar2 != &DAT_01cd56ac);
  }
  return;
}
