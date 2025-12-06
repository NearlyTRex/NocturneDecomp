// Name: crt_io.c_generateTempFilename_FUN_00601f1c
// Address: 00601f1c
// Address Range: [[00601f1c, 00601fcc]]
// Convention: __watcallStack
// Signature: void crt_io.c_generateTempFilename_FUN_00601f1c(char * buffer, int file_handle)

#include "nocturne.h"

void __watcallStack crt_io_c_generateTempFilename_FUN_00601f1c(char *buffer,int file_handle)

{
  char cVar1;
  uint uVar2;
  char *pcVar3;
  uint uVar4;
  char *pcVar5;
  char *pcVar6;
  byte bVar7;
  int in_stack_00000014;
  uint in_stack_00000018;
  
  bVar7 = 0;
  uVar2 = crt_process_c_getpid_FUN_006099c0();
  uVar2 = uVar2 >> 0x10 | uVar2;
  pcVar3 = (char *)crt_io_c_getTempDirectory_FUN_00609afc();
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
    cVar1 = crt_string_c_hexDigitToChar_FUN_00601f0c(uVar4);
    *pcVar3 = cVar1;
    pcVar3 = pcVar5;
  } while (pcVar5 != pcVar6);
  pcVar6[5] = '_';
  cVar1 = crt_string_c_hexDigitToChar_FUN_00601f0c(in_stack_00000014 >> 4 & 0xf);
  pcVar6[6] = cVar1;
  cVar1 = crt_string_c_hexDigitToChar_FUN_00601f0c(in_stack_00000018 & 0xf);
  pcVar6[8] = '.';
  pcVar6[9] = 't';
  pcVar6[10] = 'm';
  pcVar6[0xb] = 'p';
  pcVar6[0xc] = '\0';
  pcVar6[7] = cVar1;
  return;
}
