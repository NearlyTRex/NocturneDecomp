// Name: FUN_005bbf9c
// Address: 005bbf9c
// Address Range: [[005bbf9c, 005bbfbe]]
// Convention: unknown
// Signature: void FUN_005bbf9c(char *param_1)

#include "nocturne.h"

void FUN_005bbf9c(char *param_1)

{
  char cVar1;
  
  cVar1 = *param_1;
  while (cVar1 != '\0') {
    cVar1 = FUN_005b8e40(*param_1);
    *param_1 = cVar1;
    cVar1 = param_1[1];
    param_1 = param_1 + 1;
  }
  return;
}
