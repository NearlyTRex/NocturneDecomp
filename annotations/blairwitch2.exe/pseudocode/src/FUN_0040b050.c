// Name: FUN_0040b050
// Address: 0040b050
// Address Range: [[0040b050, 0040b095]]
// Convention: unknown
// Signature: undefined8 FUN_0040b050(int param_1)

#include "nocturne.h"

ulonglong FUN_0040b050(int param_1)

{
  char cVar1;
  int iVar2;
  uint uVar3;
  uint in_EDX;
  char *pcVar4;
  
  uVar3 = 0xffffffff;
  pcVar4 = &DAT_00609590;
  do {
    if (uVar3 == 0) break;
    uVar3 = uVar3 - 1;
    cVar1 = *pcVar4;
    pcVar4 = pcVar4 + 1;
  } while (cVar1 != '\0');
  param_1 = param_1 + (~uVar3 - 1);
  if (param_1 < 0) {
    param_1 = 0;
  }
  uVar3 = in_EDX & 0xffffff00;
  (&DAT_00609590)[param_1] = 0;
  if (0 < param_1) {
    uVar3 = CONCAT22((short)(in_EDX >> 0x10),0x900);
    iVar2 = param_1;
    do {
      param_1 = iVar2 + -1;
      (&DAT_0060958f)[iVar2] = 9;
      iVar2 = param_1;
    } while (0 < param_1);
  }
  return CONCAT44(uVar3,param_1);
}
