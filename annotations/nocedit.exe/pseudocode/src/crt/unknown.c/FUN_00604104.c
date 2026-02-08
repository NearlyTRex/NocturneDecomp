// Name: crt_unknown.c_FUN_00604104
// Address: 00604104
// Address Range: [[00604104, 0060411b]]
// Convention: __cdecl
// Signature: void __cdecl crt_unknown_c_FUN_00604104(ushort param_1,undefined4 param_2,char *unaff_EBX)

#include "nocturne.h"

void __cdecl FUN_00604104(ushort param_1,uint param_2,char *unaff_EBX)

{
  ushort in_AX;
  char cVar1;
  byte bVar2;
  char *unaff_EBX_00;
  
  bVar2 = (byte)in_AX;
  cVar1 = (char)(in_AX >> 8);
  if (9 < bVar2) {
    cVar1 = (char)(in_AX / 10);
    bVar2 = (byte)(in_AX % 10);
  }
  *unaff_EBX_00 = cVar1 + '0';
  unaff_EBX_00[1] = bVar2 + 0x30;
  return;
}
