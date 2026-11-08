// Name: FUN_005c4894
// Address: 005c4894
// Address Range: [[005c4894, 005c48ab]]
// Convention: unknown
// Signature: void FUN_005c4894(void)

#include "nocturne.h"

void FUN_005c4894(void)

{
  ushort in_AX;
  char cVar1;
  byte bVar2;
  char *unaff_EBX;
  
  bVar2 = (byte)in_AX;
  cVar1 = (char)(in_AX >> 8);
  if (9 < bVar2) {
    cVar1 = (char)(in_AX / 10);
    bVar2 = (byte)(in_AX % 10);
  }
  *unaff_EBX = cVar1 + '0';
  unaff_EBX[1] = bVar2 + 0x30;
  return;
}
