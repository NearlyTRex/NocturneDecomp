// Name: crt_unknown.c_FUN_005c0b20
// Address: 005c0b20
// Address Range: [[005c0b20, 005c0b3b]]
// Convention: unknown
// Signature: void crt_unknown_c_FUN_005c0b20(void)

#include "nocturne.h"

void FUN_005c0b20(void)

{
  if (g_IOControlBlock != (SIOControlBlock *)0x0) {
    debugFree(g_IOControlBlock);
    g_IOControlBlock = (SIOControlBlock *)0x0;
  }
  return;
}
