// Name: FUN_0048b7c0
// Address: 0048b7c0
// Address Range: [[0048b7c0, 0048b7ec]]
// Convention: unknown
// Signature: undefined4 FUN_0048b7c0(undefined4 param_1,undefined4 param_2,char *param_3)

#include "nocturne.h"

uint FUN_0048b7c0(uint param_1,uint param_2,char *param_3)

{
  char cVar1;
  char *pcVar2;
  
  pcVar2 = &DAT_01c734b0;
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
