// Name: FUN_004fca90
// Address: 004fca90
// Address Range: [[004fca90, 004fcafa]]
// Convention: unknown
// Signature: void FUN_004fca90(undefined4 *param_1,char *param_2)

#include "nocturne.h"

void FUN_004fca90(uint *param_1,char *param_2)

{
  char cVar1;
  char *pcVar2;
  
  pcVar2 = (char *)(param_1 + 2);
  param_1[1] = 1;
  do {
    cVar1 = *param_2;
    *pcVar2 = cVar1;
    if (cVar1 == '\0') break;
    cVar1 = param_2[1];
    param_2 = param_2 + 2;
    pcVar2[1] = cVar1;
    pcVar2 = pcVar2 + 2;
  } while (cVar1 != '\0');
  *param_1 = 0;
  FUN_004fc640(param_1);
  FUN_00521630(0x01E65CD0);
  FUN_004fc350(param_1);
  *param_1 = 0xffffffff;
  FUN_004fc6b0(param_1,0);
  return;
}
