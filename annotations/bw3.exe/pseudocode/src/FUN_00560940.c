// Name: FUN_00560940
// Address: 00560940
// Address Range: [[00560940, 005609a1]]
// Convention: unknown
// Signature: void FUN_00560940(undefined4 param_1,char *param_2)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00560940(uint param_1,char *param_2)

{
  char cVar1;
  char *pcVar2;
  
  FUN_00560b00(param_1,_DAT_02cf5ec0);
  pcVar2 = &DAT_02cf5e98;
  do {
    cVar1 = *param_2;
    *pcVar2 = cVar1;
    if (cVar1 == '\0') break;
    cVar1 = param_2[1];
    param_2 = param_2 + 2;
    pcVar2[1] = cVar1;
    pcVar2 = pcVar2 + 2;
  } while (cVar1 != '\0');
  if (_DAT_02cf5ec4 == 0) {
    return;
  }
  _DAT_02cf5ec0 = FUN_005609b0(param_1,0x01ED78C8,&DAT_02cf5e98);
  return;
}
