// Name: FUN_00569f8c
// Address: 00569f8c
// Address Range: [[00569f8c, 00569fae]]
// Convention: unknown
// Signature: void FUN_00569f8c(char *param_1)

#include "nocturne.h"

void FUN_00569f8c(char *param_1)

{
  char cVar1;
  
  cVar1 = *param_1;
  while (cVar1 != '\0') {
    cVar1 = toupper(*param_1);
    *param_1 = cVar1;
    cVar1 = param_1[1];
    param_1 = param_1 + 1;
  }
  return;
}
