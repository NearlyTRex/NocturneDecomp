// Name: crt_unknown.c_FUN_0060ccb4
// Address: 0060cd20
// Address Range: [[0060cd20, 0060cd24]]
// Convention: unknown
// Signature: undefined crt_unknown.c_FUN_0060ccb4()
// Cross-references:
//   crt_unknown.c_staticFinal_FUN_0060a4cc (0060a4cc) at 0060a50b [UNCONDITIONAL_CALL]

#include "nocturne.h"

void crt_unknown_c_FUN_0060ccb4(void)

{
  ThreadRegistryEntry *pTVar1;
  ThreadRegistryEntry *ptr;
  
  ptr = g_ThreadDataRegistryList;
  if (g_ThreadDataRegistryList != (ThreadRegistryEntry *)0x0) {
    do {
      pTVar1 = ptr->next;
      if (ptr->shouldFreeData != 0) {
        crt_memory_c_free_FUN_00601cd0(ptr->dataBuffer);
      }
      crt_memory_c_free_FUN_00601cd0(ptr);
      ptr = pTVar1;
    } while (pTVar1 != (ThreadRegistryEntry *)0x0);
  }
  return;
}


// Assembly code:
// 0060cd20: JMP 0x0060ccb4
//   Label: crt_unknown.c_FUN_0060ccb4
//   XREF to: 0060ccb4 (UNCONDITIONAL_JUMP)
