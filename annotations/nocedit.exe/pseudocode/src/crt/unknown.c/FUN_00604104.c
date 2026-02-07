// Name: crt_unknown.c_FUN_00604104
// Address: 00604104
// Address Range: [[00604104, 0060411b]]
// Convention: unknown
// Signature: void crt_unknown_c_FUN_00604104(ushort param_1,undefined4 param_2,char *unaff_EBX)

#include "nocturne.h"

/* Signature: byte FUN_00604104() */

void FUN_00604104(ushort param_1,uint param_2,char *unaff_EBX)

{
  char cVar1;
  byte bVar2;
  
  bVar2 = (byte)param_1;
  cVar1 = (char)(param_1 >> 8);
  if (9 < bVar2) {
    cVar1 = (char)(param_1 / 10);
    bVar2 = (byte)(param_1 % 10);
  }
  *unaff_EBX = cVar1 + '0';
  unaff_EBX[1] = bVar2 + 0x30;
  return;
}
