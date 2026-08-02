// Name: crt_unknown.c_FUN_0056a6c4
// Address: 0056a6c4
// Address Range: [[0056a6c4, 0056a6db]]
// Convention: unknown
// Signature: void crt_unknown_c_FUN_0056a6c4(void)

#include "nocturne.h"

void FUN_0056a6c4(void)

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
