// Name: FUN_00556f80
// Address: 00556f80
// Address Range: [[00556f80, 00556fa5]]
// Convention: unknown
// Signature: int FUN_00556f80(void)

#include "nocturne.h"

int FUN_00556f80(void)

{
  byte *puVar1;
  int iVar2;
  
  puVar1 = (byte *)0x2ce721c;
  iVar2 = 0;
  do {
    if ((*(int *)(puVar1 + 0x68) != 0) && (*(int *)(puVar1 + 100) != 0)) {
      iVar2 = iVar2 + 1;
    }
    puVar1 = puVar1 + 0x11c;
  } while (puVar1 != &DAT_02ceb91c);
  return iVar2;
}
