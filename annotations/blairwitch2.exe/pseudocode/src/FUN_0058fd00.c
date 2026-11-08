// Name: FUN_0058fd00
// Address: 0058fd00
// Address Range: [[0058fd00, 0058fd11]]
// Convention: unknown
// Signature: void FUN_0058fd00(HANDLE param_1)

#include "nocturne.h"

void FUN_0058fd00(HANDLE param_1)

{
  if (param_1 == (HANDLE)0x0) {
    return;
  }
  ReleaseMutex(param_1);
  return;
}
