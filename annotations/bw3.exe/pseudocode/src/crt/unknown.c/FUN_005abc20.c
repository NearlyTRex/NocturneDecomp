// Name: crt_unknown.c_FUN_005abc20
// Address: 005abc20
// Address Range: [[005abc20, 005abc3b]]
// Convention: unknown
// Signature: void crt_unknown_c_FUN_005abc20(void)

#include "nocturne.h"

void FUN_005abc20(void)

{
  if (g_IOControlBlock != (SIOControlBlock *)0x0) {
    debugFree(g_IOControlBlock);
    g_IOControlBlock = (SIOControlBlock *)0x0;
  }
  return;
}
