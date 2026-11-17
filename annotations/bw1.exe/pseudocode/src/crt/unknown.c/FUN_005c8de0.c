// Name: crt_unknown.c_FUN_005c8de0
// Address: 005c8de0
// Address Range: [[005c8de0, 005c8dfb]]
// Convention: unknown
// Signature: void crt_unknown_c_FUN_005c8de0(void)

#include "nocturne.h"

void FUN_005c8de0(void)

{
  if (g_SIOControlBlock_PTR_00626838 != (SIOControlBlock *)0x0) {
    debugFree(g_SIOControlBlock_PTR_00626838);
    g_SIOControlBlock_PTR_00626838 = (SIOControlBlock *)0x0;
  }
  return;
}
