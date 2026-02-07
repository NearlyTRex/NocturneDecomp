// Name: crt_unknown.c_FUN_006093e8
// Address: 006093e8
// Address Range: [[006093e8, 0060940d]]
// Convention: unknown
// Signature: void crt_unknown_c_FUN_006093e8(void)

#include "nocturne.h"

void FUN_006093e8(void)

{
  uint *puVar1;
  
  while (g_FreeListHeadPointer != (uint *)0x0) {
    puVar1 = (uint *)*g_FreeListHeadPointer;
    free(g_FreeListHeadPointer);
    g_FreeListHeadPointer = puVar1;
  }
  return;
}
