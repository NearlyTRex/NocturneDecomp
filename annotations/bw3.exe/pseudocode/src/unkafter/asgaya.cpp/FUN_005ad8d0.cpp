// Name: unkafter_asgaya.cpp_FUN_005ad8d0
// Address: 005ad8d0
// Address Range: [[005ad8d0, 005ad931]]
// Convention: unknown
// Signature: void unkafter_asgaya_cpp_FUN_005ad8d0(undefined4 *param_1)

#include "nocturne.h"

void unkafter_asgaya_cpp_FUN_005ad8d0(uint *param_1)

{
  DWORD DVar1;
  uint uVar2;
  
  DVar1 = GetCurrentThreadId();
  if (DVar1 != param_1[2]) {
    if (param_1[1] == 0) {
      unkafter_asgaya_cpp_FUN_005ad8d0(&DAT_02d26180);
      if (param_1[1] == 0) {
        uVar2 = unkafter_asgaya_cpp_FUN_005ad794();
        param_1[1] = 1;
        *param_1 = uVar2;
      }
      unkafter_asgaya_cpp_FUN_005ad934(&DAT_02d26180);
    }
    EnterCriticalSection((LPCRITICAL_SECTION)*param_1);
    param_1[2] = DVar1;
  }
  param_1[3] = param_1[3] + 1;
  return;
}
