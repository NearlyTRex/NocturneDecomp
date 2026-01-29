// Name: crt_io.c__tempnam_FUN_00601f1c
// Address: 00601f1c
// Address Range: [[00601f1c, 00601fcc]]
// Convention: __watcallStack
// Signature: void __watcallStack crt_io_c__tempnam_FUN_00601f1c(char *buffer,int file_handle)

#include "nocturne.h"

void __watcallStack _tempnam(char *buffer,int file_handle)

{
  char cVar1;
  uint uVar2;
  char *pcVar3;
  uint uVar4;
  char *pcVar5;
  char *pcVar6;
  byte bVar7;
  
  bVar7 = 0;
  uVar2 = getpid();
  uVar2 = uVar2 >> 0x10 | uVar2;
  pcVar3 = (char *)getTempDirectory();
  pcVar6 = buffer;
  do {
    cVar1 = *pcVar3;
    *pcVar6 = cVar1;
    if (cVar1 == '\0') break;
    cVar1 = pcVar3[1];
    pcVar3 = pcVar3 + 2;
    pcVar6[1] = cVar1;
    pcVar6 = pcVar6 + 2;
  } while (cVar1 != '\0');
  uVar4 = 0xffffffff;
  pcVar6 = buffer;
  do {
    if (uVar4 == 0) break;
    uVar4 = uVar4 - 1;
    cVar1 = *pcVar6;
    pcVar6 = pcVar6 + (uint)bVar7 * -2 + 1;
  } while (cVar1 != '\0');
  pcVar6 = buffer + (~uVar4 - 1);
  *pcVar6 = 't';
  pcVar3 = pcVar6 + 4;
  do {
    uVar4 = uVar2 & 0xf;
    pcVar5 = pcVar3 + -1;
    uVar2 = uVar2 >> 4;
    cVar1 = hexDigitToChar(uVar4);
    *pcVar3 = cVar1;
    pcVar3 = pcVar5;
  } while (pcVar5 != pcVar6);
  pcVar6[5] = '_';
  cVar1 = hexDigitToChar(file_handle >> 4 & 0xf);
  pcVar6[6] = cVar1;
  cVar1 = hexDigitToChar(file_handle & 0xf);
  pcVar6[8] = '.';
  pcVar6[9] = 't';
  pcVar6[10] = 'm';
  pcVar6[0xb] = 'p';
  pcVar6[0xc] = '\0';
  pcVar6[7] = cVar1;
  return;
}
