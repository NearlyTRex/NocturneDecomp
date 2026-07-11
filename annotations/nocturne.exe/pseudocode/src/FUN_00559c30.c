// Name: FUN_00559c30
// Address: 00559c30
// Address Range: [[00559c30, 00559c41]]
// Convention: unknown
// Signature: void FUN_00559c30(HANDLE param_1)

#include "nocturne.h"

void FUN_00559c30(HANDLE param_1)

{
  if (param_1 == (HANDLE)0x0) {
    return;
  }
  ReleaseMutex(param_1);
  return;
}
