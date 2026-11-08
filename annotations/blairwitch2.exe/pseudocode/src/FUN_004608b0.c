// Name: FUN_004608b0
// Address: 004608b0
// Address Range: [[004608b0, 004608f6]]
// Convention: unknown
// Signature: void FUN_004608b0(char *param_1,char *param_2,char *param_3)

#include "nocturne.h"

void FUN_004608b0(char *param_1,char *param_2,char *param_3)

{
  char cVar1;
  
  if ((param_2 != (char *)0x0) && (*param_2 != '\0')) {
    FUN_005b7790(param_1,"%s\\%s",param_2,param_3);
    return;
  }
  do {
    cVar1 = *param_3;
    *param_1 = cVar1;
    if (cVar1 == '\0') {
      return;
    }
    cVar1 = param_3[1];
    param_3 = param_3 + 2;
    param_1[1] = cVar1;
    param_1 = param_1 + 2;
  } while (cVar1 != '\0');
  return;
}
