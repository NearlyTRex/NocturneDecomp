// Name: FUN_0056c6b8
// Address: 0056c6b8
// Address Range: [[0056c6b8, 0056c6cc]]
// Convention: unknown
// Signature: void FUN_0056c6b8(DWORD param_1,int param_2)

#include "nocturne.h"

void FUN_0056c6b8(DWORD param_1,int param_2)

{
  if (param_2 != 0) {
    convertWindowsErrorToErrno(param_1);
  }
  return;
}
