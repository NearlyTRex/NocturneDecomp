// Name: crt_unknown.c_FUN_005ca040
// Address: 005ca040
// Address Range: [[005ca040, 005ca04e]]
// Convention: unknown
// Signature: void crt_unknown_c_FUN_005ca040(void)

#include "nocturne.h"

void FUN_005ca040(void)

{
  FileListNode *pFVar1;
  
  FUN_005ca05c(0);
  while (g_FreeListHeadPointer != (FileListNode *)0x0) {
    pFVar1 = g_FreeListHeadPointer->next;
    debugFree(g_FreeListHeadPointer);
    g_FreeListHeadPointer = pFVar1;
  }
  return;
}
