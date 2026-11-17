// Name: crt_unknown.c_FUN_005aceb0
// Address: 005aceb0
// Address Range: [[005aceb0, 005acebe]]
// Convention: unknown
// Signature: void crt_unknown_c_FUN_005aceb0(void)

#include "nocturne.h"

void FUN_005aceb0(void)

{
  FileListNode *pFVar1;
  
  FUN_005acecc(0);
  while (g_FreeListHeadPointer != (FileListNode *)0x0) {
    pFVar1 = g_FreeListHeadPointer->next;
    debugFree(g_FreeListHeadPointer);
    g_FreeListHeadPointer = pFVar1;
  }
  return;
}
