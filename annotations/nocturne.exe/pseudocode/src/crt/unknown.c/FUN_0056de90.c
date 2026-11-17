// Name: crt_unknown.c_FUN_0056de90
// Address: 0056de90
// Address Range: [[0056de90, 0056de9e]]
// Convention: unknown
// Signature: void crt_unknown_c_FUN_0056de90(void)

#include "nocturne.h"

void FUN_0056de90(void)

{
  FileListNode *pFVar1;
  
  FUN_0056deac(0);
  while (g_FreeListHeadPointer != (FileListNode *)0x0) {
    pFVar1 = g_FreeListHeadPointer->next;
    free(g_FreeListHeadPointer);
    g_FreeListHeadPointer = pFVar1;
  }
  return;
}
