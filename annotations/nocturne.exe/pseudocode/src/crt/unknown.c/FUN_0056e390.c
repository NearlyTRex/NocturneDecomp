// Name: crt_unknown.c_FUN_0056e390
// Address: 0056e390
// Address Range: [[0056e390, 0056e3f1]]
// Convention: unknown
// Signature: void crt_unknown_c_FUN_0056e390(undefined4 *param_1)

#include "nocturne.h"

void FUN_0056e390(uint *param_1)

{
  DWORD DVar1;
  uint uVar2;
  
  DVar1 = GetCurrentThreadId();
  if (DVar1 != param_1[2]) {
    if (param_1[1] == 0) {
      FUN_0056e390(&DAT_02de5be0);
      if (param_1[1] == 0) {
        uVar2 = FUN_0056e254();
        param_1[1] = 1;
        *param_1 = uVar2;
      }
      FUN_0056e3f4(&DAT_02de5be0);
    }
    EnterCriticalSection((LPCRITICAL_SECTION)*param_1);
    param_1[2] = DVar1;
  }
  param_1[3] = param_1[3] + 1;
  return;
}
