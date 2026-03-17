// Name: crt_unknown.c_FUN_006093e8
// Address: 006093e8
// Address Range: [[006093e8, 0060940d]]
// Convention: unknown
// Signature: void crt_unknown_c_FUN_006093e8(void)

#include "nocturne.h"

void FUN_006093e8(void)

{
  FileListNode *pFVar1;
  
  while (g_FreeListHeadPointer != (FileListNode *)0x0) {
    pFVar1 = g_FreeListHeadPointer->next;
    free(g_FreeListHeadPointer);
    g_FreeListHeadPointer = pFVar1;
  }
  return;
}
