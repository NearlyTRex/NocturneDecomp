// Name: crt_unknown.c_FUN_005a9988
// Address: 005a9988
// Address Range: [[005a9988, 005a99ad]]
// Convention: unknown
// Signature: void crt_unknown_c_FUN_005a9988(void)

#include "nocturne.h"

void FUN_005a9988(void)

{
  FileListNode *pFVar1;
  
  while (g_FreeListHeadPointer != (FileListNode *)0x0) {
    pFVar1 = g_FreeListHeadPointer->next;
    debugFree(g_FreeListHeadPointer);
    g_FreeListHeadPointer = pFVar1;
  }
  return;
}
