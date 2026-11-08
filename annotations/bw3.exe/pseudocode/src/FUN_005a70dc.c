// Name: FUN_005a70dc
// Address: 005a70dc
// Address Range: [[005a70dc, 005a70fe]]
// Convention: unknown
// Signature: void FUN_005a70dc(char *param_1)

#include "nocturne.h"

void FUN_005a70dc(char *param_1)

{
  char cVar1;
  
  cVar1 = *param_1;
  while (cVar1 != '\0') {
    cVar1 = FUN_005a4120(*param_1);
    *param_1 = cVar1;
    cVar1 = param_1[1];
    param_1 = param_1 + 1;
  }
  return;
}
