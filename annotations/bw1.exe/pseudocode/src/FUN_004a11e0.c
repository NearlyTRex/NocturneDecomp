// Name: FUN_004a11e0
// Address: 004a11e0
// Address Range: [[004a11e0, 004a120c]]
// Convention: unknown
// Signature: undefined4 FUN_004a11e0(undefined4 param_1,undefined4 param_2,char *param_3)

#include "nocturne.h"

uint FUN_004a11e0(uint param_1,uint param_2,char *param_3)

{
  char cVar1;
  char *pcVar2;
  
  pcVar2 = &DAT_01c56ed0;
  do {
    cVar1 = *param_3;
    *pcVar2 = cVar1;
    if (cVar1 == '\0') {
      return 0xffffffff;
    }
    cVar1 = param_3[1];
    param_3 = param_3 + 2;
    pcVar2[1] = cVar1;
    pcVar2 = pcVar2 + 2;
  } while (cVar1 != '\0');
  return 0xffffffff;
}
