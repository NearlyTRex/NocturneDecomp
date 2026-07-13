// Name: FUN_10005a10
// Address: 10005a10
// Address Range: [[10005a10, 10005a26]]
// Convention: unknown
// Signature: void FUN_10005a10(int param_1)

#include "nocturne.h"

void FUN_10005a10(int param_1)

{
  LeaveCriticalSection((LPCRITICAL_SECTION)(&DAT_10016c78)[param_1]);
  return;
}
