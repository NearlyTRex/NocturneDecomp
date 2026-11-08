// Name: FUN_0057d810
// Address: 0057d810
// Address Range: [[0057d810, 0057d871]]
// Convention: unknown
// Signature: void FUN_0057d810(undefined4 param_1,char *param_2)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0057d810(uint param_1,char *param_2)

{
  char cVar1;
  char *pcVar2;
  
  FUN_0057d9d0(param_1,_DAT_02c832a0);
  pcVar2 = &DAT_02c83278;
  do {
    cVar1 = *param_2;
    *pcVar2 = cVar1;
    if (cVar1 == '\0') break;
    cVar1 = param_2[1];
    param_2 = param_2 + 2;
    pcVar2[1] = cVar1;
    pcVar2 = pcVar2 + 2;
  } while (cVar1 != '\0');
  if (_DAT_02c832a4 == 0) {
    return;
  }
  _DAT_02c832a0 = FUN_0057d880(param_1,0x01E82168,&DAT_02c83278);
  return;
}
