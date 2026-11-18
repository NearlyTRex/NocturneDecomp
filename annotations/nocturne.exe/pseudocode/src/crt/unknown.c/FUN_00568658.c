// Name: crt_unknown.c_FUN_00568658
// Address: 00568658
// Address Range: [[00568658, 0056867d]]
// Convention: unknown
// Signature: void crt_unknown_c_FUN_00568658(void)

#include "nocturne.h"

void FUN_00568658(void)

{
  FileListNode *pFVar1;
  
  while (g_FreeListHeadPointer != (FileListNode *)0x0) {
    pFVar1 = g_FreeListHeadPointer->next;
    free(g_FreeListHeadPointer);
    g_FreeListHeadPointer = pFVar1;
  }
  return;
}
