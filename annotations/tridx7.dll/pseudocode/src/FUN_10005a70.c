// Name: FUN_10005a70
// Address: 10005a70
// Address Range: [[10005a70, 10005a97]]
// Convention: unknown
// Signature: void FUN_10005a70(int param_1,int param_2)

#include "nocturne.h"

void FUN_10005a70(int param_1,int param_2)

{
  if (param_1 < 0x14) {
    __lock(param_1 + 0x1c);
    return;
  }
  EnterCriticalSection((LPCRITICAL_SECTION)(param_2 + 0x20));
  return;
}
