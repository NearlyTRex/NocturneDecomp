// Name: FUN_00581990
// Address: 00581990
// Address Range: [[00581990, 005819a1]]
// Convention: unknown
// Signature: void FUN_00581990(HANDLE param_1)

#include "nocturne.h"

void FUN_00581990(HANDLE param_1)

{
  if (param_1 == (HANDLE)0x0) {
    return;
  }
  ReleaseMutex(param_1);
  return;
}
