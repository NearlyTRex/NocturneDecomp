// Name: crt_unknown.c__tempnam_FUN_005633fc
// Address: 005633fc
// Address Range: [[005633fc, 005634ac]]
// Convention: __watcallStack
// Signature: void __watcallStack crt_unknown_c__tempnam_FUN_005633fc(char *buffer,int file_handle)

#include "nocturne.h"

void __watcallStack _tempnam(char *buffer,int file_handle)

{
  byte uVar1;
  char cVar2;
  uint3 extraout_var;
  undefined3 extraout_var_00;
  uint uVar3;
  char *pcVar4;
  uint uVar5;
  char *pcVar6;
  char *pcVar7;
  byte bVar8;
  
  bVar8 = 0;
  uVar1 = getpid();
  uVar5 = (uint)(extraout_var >> 8) | CONCAT31(extraout_var,uVar1);
  uVar1 = getTempDirectory();
  pcVar6 = (char *)CONCAT31(extraout_var_00,uVar1);
  pcVar7 = buffer;
  do {
    cVar2 = *pcVar6;
    *pcVar7 = cVar2;
    if (cVar2 == '\0') break;
    cVar2 = pcVar6[1];
    pcVar6 = pcVar6 + 2;
    pcVar7[1] = cVar2;
    pcVar7 = pcVar7 + 2;
  } while (cVar2 != '\0');
  uVar3 = 0xffffffff;
  pcVar7 = buffer;
  do {
    if (uVar3 == 0) break;
    uVar3 = uVar3 - 1;
    cVar2 = *pcVar7;
    pcVar7 = pcVar7 + (uint)bVar8 * -2 + 1;
  } while (cVar2 != '\0');
  pcVar7 = buffer + (~uVar3 - 1);
  *pcVar7 = 't';
  pcVar6 = pcVar7 + 4;
  do {
    uVar3 = uVar5 & 0xf;
    pcVar4 = pcVar6 + -1;
    uVar5 = uVar5 >> 4;
    cVar2 = hexDigitToChar(uVar3);
    *pcVar6 = cVar2;
    pcVar6 = pcVar4;
  } while (pcVar4 != pcVar7);
  pcVar7[5] = '_';
  cVar2 = hexDigitToChar(file_handle >> 4 & 0xf);
  pcVar7[6] = cVar2;
  cVar2 = hexDigitToChar(file_handle & 0xf);
  pcVar7[8] = '.';
  pcVar7[9] = 't';
  pcVar7[10] = 'm';
  pcVar7[0xb] = 'p';
  pcVar7[0xc] = '\0';
  pcVar7[7] = cVar2;
  return;
}
