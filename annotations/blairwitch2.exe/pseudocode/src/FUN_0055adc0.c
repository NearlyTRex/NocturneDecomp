// Name: FUN_0055adc0
// Address: 0055adc0
// Address Range: [[0055adc0, 0055ae21]]
// Convention: unknown
// Signature: void FUN_0055adc0(undefined4 param_1,char *param_2)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0055adc0(uint param_1,char *param_2)

{
  char cVar1;
  char *pcVar2;
  
  FUN_0055af80(param_1,_DAT_0264bad0);
  pcVar2 = &DAT_0264baa8;
  do {
    cVar1 = *param_2;
    *pcVar2 = cVar1;
    if (cVar1 == '\0') break;
    cVar1 = param_2[1];
    param_2 = param_2 + 2;
    pcVar2[1] = cVar1;
    pcVar2 = pcVar2 + 2;
  } while (cVar1 != '\0');
  if (_DAT_0264bad4 == 0) {
    return;
  }
  _DAT_0264bad0 = FUN_0055ae30(param_1,0x01E661B8,&DAT_0264baa8);
  return;
}
