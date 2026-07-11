// Name: FUN_0056e3f4
// Address: 0056e3f4
// Address Range: [[0056e3f4, 0056e41a]]
// Convention: unknown
// Signature: void FUN_0056e3f4(undefined4 *param_1)

#include "nocturne.h"

void FUN_0056e3f4(uint *param_1)

{
  int iVar1;
  
  if (param_1[3] != 0) {
    iVar1 = param_1[3] + -1;
    param_1[3] = iVar1;
    if (iVar1 == 0) {
      param_1[2] = 0;
      LeaveCriticalSection((LPCRITICAL_SECTION)*param_1);
    }
  }
  return;
}
