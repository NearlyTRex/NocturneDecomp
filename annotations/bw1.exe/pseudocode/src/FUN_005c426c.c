// Name: FUN_005c426c
// Address: 005c426c
// Address Range: [[005c426c, 005c428e]]
// Convention: unknown
// Signature: void FUN_005c426c(char *param_1)

#include "nocturne.h"

void FUN_005c426c(char *param_1)

{
  char cVar1;
  
  cVar1 = *param_1;
  while (cVar1 != '\0') {
    cVar1 = FUN_005c12b0(*param_1);
    *param_1 = cVar1;
    cVar1 = param_1[1];
    param_1 = param_1 + 1;
  }
  return;
}
