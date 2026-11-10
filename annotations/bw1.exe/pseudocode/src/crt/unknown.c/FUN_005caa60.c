// Name: crt_unknown.c_FUN_005caa60
// Address: 005caa60
// Address Range: [[005caa60, 005caac1]]
// Convention: unknown
// Signature: void crt_unknown_c_FUN_005caa60(undefined4 *param_1)

#include "nocturne.h"

void FUN_005caa60(uint *param_1)

{
  DWORD DVar1;
  uint uVar2;
  
  DVar1 = GetCurrentThreadId();
  if (DVar1 != param_1[2]) {
    if (param_1[1] == 0) {
      FUN_005caa60(&DAT_02c9ff30);
      if (param_1[1] == 0) {
        uVar2 = FUN_005ca924();
        param_1[1] = 1;
        *param_1 = uVar2;
      }
      FUN_005caac4(&DAT_02c9ff30);
    }
    EnterCriticalSection((LPCRITICAL_SECTION)*param_1);
    param_1[2] = DVar1;
  }
  param_1[3] = param_1[3] + 1;
  return;
}
