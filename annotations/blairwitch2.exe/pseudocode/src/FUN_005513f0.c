// Name: FUN_005513f0
// Address: 005513f0
// Address Range: [[005513f0, 00551415]]
// Convention: unknown
// Signature: int FUN_005513f0(void)

#include "nocturne.h"

int FUN_005513f0(void)

{
  byte *puVar1;
  int iVar2;
  
  puVar1 = (byte *)0x263cf1c;
  iVar2 = 0;
  do {
    if ((*(int *)(puVar1 + 0x68) != 0) && (*(int *)(puVar1 + 100) != 0)) {
      iVar2 = iVar2 + 1;
    }
    puVar1 = puVar1 + 0x11c;
  } while (puVar1 != &DAT_0264161c);
  return iVar2;
}
