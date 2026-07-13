// Name: FUN_10005b30
// Address: 10005b30
// Address Range: [[10005b30, 10005b47]]
// Convention: unknown
// Signature: void FUN_10005b30(LPVOID param_1)

#include "nocturne.h"

void FUN_10005b30(LPVOID param_1)

{
  if (param_1 != (LPVOID)0x0) {
    HeapFree(DAT_10241974,0,param_1);
  }
  return;
}
