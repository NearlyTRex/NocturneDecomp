// Name: FUN_004ce5b0
// Address: 004ce5b0
// Address Range: [[004ce5b0, 004ce626]]
// Convention: unknown
// Signature: void FUN_004ce5b0(void)

#include "nocturne.h"

void FUN_004ce5b0(void)

{
  int iVar1;
  byte *puVar2;
  
  if ((*(int *)(0x01D2130C + 0x14) != 0) && (iVar1 = FUN_0046d540(DAT_005f2afc), iVar1 == 0)) {
    FUN_005375c0(0x01ED78C8,0,0,0,0,0);
    puVar2 = (byte *)0x1d22eb4;
    FUN_004ccaf0(0x1d22eb4);
    do {
      if (0.0 < *(float *)(puVar2 + 0x24)) {
        (**(code **)(*(int *)(puVar2 + 0x3c) + 8))(puVar2);
      }
      puVar2 = puVar2 + 0x48;
    } while (puVar2 != &DAT_01d276b4);
  }
  return;
}
