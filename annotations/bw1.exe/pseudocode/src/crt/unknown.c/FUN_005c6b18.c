// Name: crt_unknown.c_FUN_005c6b18
// Address: 005c6b18
// Address Range: [[005c6b18, 005c6b3d]]
// Convention: unknown
// Signature: void crt_unknown_c_FUN_005c6b18(void)

#include "nocturne.h"

void FUN_005c6b18(void)

{
  FileListNode *pFVar1;
  
  while (g_FreeListHeadPointer != (FileListNode *)0x0) {
    pFVar1 = g_FreeListHeadPointer->next;
    debugFree(g_FreeListHeadPointer);
    g_FreeListHeadPointer = pFVar1;
  }
  return;
}
