// Name: FUN_0055d0e0
// Address: 0055d0e0
// Address Range: [[0055d0e0, 0055d18f] [0055d191, 0055d19e]]
// Convention: unknown
// Signature: undefined1 FUN_0055d0e0(int param_1,int param_2)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

byte FUN_0055d0e0(int param_1,int param_2)

{
  char cVar1;
  byte uVar2;
  char *pcVar3;
  char *pcVar4;
  float10 fVar5;
  
  if ((uint *)(param_2 + 4) != (uint *)(param_1 + 0x104)) {
    *(uint *)(param_2 + 4) = *(uint *)(param_1 + 0x104);
    *(uint *)(param_2 + 8) = *(uint *)(param_1 + 0x108);
    *(uint *)(param_2 + 0xc) = *(uint *)(param_1 + 0x10c);
  }
  FUN_0045f3e0(param_2 + 0x10,param_1 + 0x110);
  *(uint *)(param_2 + 0x38) = *(uint *)(param_1 + 0x11c);
  fVar5 = (float10)*(float *)(param_1 + 0x120) * (float10)_DAT_005f1309;
  FUN_005c03a0();
  *(int *)(param_2 + 0x2fa4) = (int)ROUND(fVar5);
  pcVar3 = (char *)(param_1 + 4);
  FUN_00465da0(param_2,*(uint *)(param_1 + 0x124));
  *(uint *)(param_1 + 0x11e8) = 0;
  pcVar4 = (char *)(param_2 + 0x40);
  *(uint *)(param_1 + 0x1894) = 0;
  do {
    cVar1 = *pcVar3;
    *pcVar4 = cVar1;
    if (cVar1 == '\0') break;
    cVar1 = pcVar3[1];
    pcVar3 = pcVar3 + 2;
    pcVar4[1] = cVar1;
    pcVar4 = pcVar4 + 2;
  } while (cVar1 != '\0');
  if (*(int *)(param_1 + 0x17f4) == 0) {
    return 0;
  }
  uVar2 = FUN_00463de0(param_2);
  return uVar2;
}
