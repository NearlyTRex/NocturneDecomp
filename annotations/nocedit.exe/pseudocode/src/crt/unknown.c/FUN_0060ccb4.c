// Name: crt_unknown.c_FUN_0060ccb4
// Address: 0060ccb4
// Address Range: [[0060ccb4, 0060cce6]]
// Convention: unknown
// Signature: void crt_unknown_c_FUN_0060ccb4(void)

#include "nocturne.h"

void FUN_0060ccb4(void)

{
  ThreadRegistryEntry *pTVar1;
  ThreadRegistryEntry *ptr;
  
  ptr = g_ThreadDataRegistryList;
  while (ptr != (ThreadRegistryEntry *)0x0) {
    pTVar1 = ptr->next;
    if (ptr->shouldFreeData != 0) {
      free(ptr->dataBuffer);
    }
    free(ptr);
    ptr = pTVar1;
  }
  return;
}
