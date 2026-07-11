// Name: FUN_005633fc
// Address: 005633fc
// Address Range: [[005633fc, 005634ac]]
// Convention: unknown
// Signature: void FUN_005633fc(char *param_1,uint param_2)

#include "nocturne.h"

void FUN_005633fc(char *param_1,uint param_2)

{
  char cVar1;
  uint uVar2;
  char *pcVar3;
  uint uVar4;
  char *pcVar5;
  byte bVar6;
  
  bVar6 = 0;
  uVar2 = FUN_00568680();
  uVar2 = uVar2 >> 0x10 | uVar2;
  pcVar3 = (char *)FUN_005687bc();
  pcVar5 = param_1;
  do {
    cVar1 = *pcVar3;
    *pcVar5 = cVar1;
    if (cVar1 == '\0') break;
    cVar1 = pcVar3[1];
    pcVar3 = pcVar3 + 2;
    pcVar5[1] = cVar1;
    pcVar5 = pcVar5 + 2;
  } while (cVar1 != '\0');
  uVar4 = 0xffffffff;
  pcVar5 = param_1;
  do {
    if (uVar4 == 0) break;
    uVar4 = uVar4 - 1;
    cVar1 = *pcVar5;
    pcVar5 = pcVar5 + (uint)bVar6 * -2 + 1;
  } while (cVar1 != '\0');
  param_1 = param_1 + (~uVar4 - 1);
  *param_1 = 't';
  pcVar5 = param_1 + 4;
  do {
    uVar4 = uVar2 & 0xf;
    pcVar3 = pcVar5 + -1;
    uVar2 = uVar2 >> 4;
    cVar1 = FUN_005633ec(uVar4);
    *pcVar5 = cVar1;
    pcVar5 = pcVar3;
  } while (pcVar3 != param_1);
  param_1[5] = '_';
  cVar1 = FUN_005633ec((int)param_2 >> 4 & 0xf);
  param_1[6] = cVar1;
  cVar1 = FUN_005633ec(param_2 & 0xf);
  param_1[8] = '.';
  param_1[9] = 't';
  param_1[10] = 'm';
  param_1[0xb] = 'p';
  param_1[0xc] = '\0';
  param_1[7] = cVar1;
  return;
}
