// Name: FUN_005b37b0
// Address: 005b37b0
// Address Range: [[005b37b0, 005b37c1]]
// Convention: unknown
// Signature: void FUN_005b37b0(HANDLE param_1)

#include "nocturne.h"

void FUN_005b37b0(HANDLE param_1)

{
  if (param_1 == (HANDLE)0x0) {
    return;
  }
  ReleaseMutex(param_1);
  return;
}
