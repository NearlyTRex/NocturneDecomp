// Name: crt_stdio.c_FormatHexWithPadding_FUN_00602ff8
// Address: 00602ff8
// Address Range: [[00602ff8, 0060305a]]
// Convention: __cdecl
// Signature: void __cdecl crt_stdio_c_FormatHexWithPadding_FUN_00602ff8(int value,char *buffer,int width)

#include "nocturne.h"

void __cdecl FormatHexWithPadding(int value,char *buffer,int width)

{
  char *pcVar1;
  char cVar2;
  int iVar3;
  uint uVar4;
  char *pcVar5;
  char *pcVar6;
  byte bVar7;
  
  bVar7 = 0;
  IntegerToString(value,buffer,0x10);
  uVar4 = 0xffffffff;
  pcVar5 = buffer;
  do {
    if (uVar4 == 0) break;
    uVar4 = uVar4 - 1;
    cVar2 = *pcVar5;
    pcVar5 = pcVar5 + (uint)bVar7 * -2 + 1;
  } while (cVar2 != '\0');
  iVar3 = width + -1;
  if (~uVar4 - 1 != 0) {
    pcVar5 = buffer + (~uVar4 - 1);
    pcVar6 = buffer + iVar3;
    do {
      pcVar1 = pcVar5 + -1;
      pcVar5 = pcVar5 + -1;
      iVar3 = iVar3 + -1;
      *pcVar6 = *pcVar1;
      pcVar6 = pcVar6 + -1;
    } while (pcVar5 != buffer);
  }
  pcVar5 = buffer + iVar3;
  for (; -1 < iVar3; iVar3 = iVar3 + -1) {
    *pcVar5 = '0';
    pcVar5 = pcVar5 + -1;
  }
  buffer[width] = '\0';
  return;
}
