// Name: FUN_0056da30
// Address: 0056da30
// Address Range: [[0056da30, 0056da4d]]
// Convention: unknown
// Signature: void FUN_0056da30(undefined4 param_1,char *param_2)

#include "nocturne.h"

void FUN_0056da30(uint param_1,char *param_2)

{
  char cVar1;
  
  cVar1 = (char)((uint)param_1 >> 8);
  if (cVar1 != '\0') {
    param_2[1] = (char)param_1;
    *param_2 = cVar1;
    return;
  }
  *param_2 = (char)param_1;
  return;
}
