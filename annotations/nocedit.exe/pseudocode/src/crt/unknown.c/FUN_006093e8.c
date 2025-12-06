// Name: crt_unknown.c_FUN_006093e8
// Address: 006093e8
// Address Range: [[006093e8, 0060940d]]
// Convention: unknown
// Signature: undefined crt_unknown.c_FUN_006093e8()

#include "nocturne.h"

void crt_unknown_c_FUN_006093e8(void)

{
  int *piVar1;
  
  if (g_FreeListHeadPointer != (int *)0x0) {
    do {
      piVar1 = (int *)*g_FreeListHeadPointer;
      crt_memory_c_free_FUN_00601cd0(g_FreeListHeadPointer);
      g_FreeListHeadPointer = piVar1;
    } while (piVar1 != (int *)0x0);
  }
  return;
}
