// Name: crt_unknown.c_FUN_0056e230
// Address: 0056e230
// Address Range: [[0056e230, 0056e24b]]
// Convention: unknown
// Signature: void crt_unknown_c_FUN_0056e230(void)

#include "nocturne.h"

void FUN_0056e230(void)

{
  if (g_IOControlBlock != (SIOControlBlock *)0x0) {
    free(g_IOControlBlock);
    g_IOControlBlock = (SIOControlBlock *)0x0;
  }
  return;
}
