// Name: FUN_10005ae0
// Address: 10005ae0
// Address Range: [[10005ae0, 10005b07]]
// Convention: unknown
// Signature: void FUN_10005ae0(int param_1,int param_2)

#include "nocturne.h"

void FUN_10005ae0(int param_1,int param_2)

{
  if (param_1 < 0x14) {
    FUN_10005a10(param_1 + 0x1c);
    return;
  }
  LeaveCriticalSection((LPCRITICAL_SECTION)(param_2 + 0x20));
  return;
}
