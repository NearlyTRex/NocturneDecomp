// Name: FUN_00479720
// Address: 00479720
// Address Range: [[00479720, 00479763]]
// Convention: unknown
// Signature: undefined4 FUN_00479720(char *param_1,char *param_2)

#include "nocturne.h"

uint FUN_00479720(char *param_1,char *param_2)

{
  char cVar1;
  char *pcVar2;
  
  pcVar2 = (char *)FUN_005c2500(param_1,param_2,0x100);
  if (pcVar2 == param_1) {
    return 1;
  }
  do {
    cVar1 = *param_2;
    *param_1 = cVar1;
    if (cVar1 == '\0') {
      return 0;
    }
    cVar1 = param_2[1];
    param_2 = param_2 + 2;
    param_1[1] = cVar1;
    param_1 = param_1 + 2;
  } while (cVar1 != '\0');
  return 0;
}
