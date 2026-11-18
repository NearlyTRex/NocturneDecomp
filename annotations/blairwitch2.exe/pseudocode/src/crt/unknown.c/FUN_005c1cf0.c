// Name: crt_unknown.c_FUN_005c1cf0
// Address: 005c1cf0
// Address Range: [[005c1cf0, 005c1cfe]]
// Convention: unknown
// Signature: void crt_unknown_c_FUN_005c1cf0(void)

#include "nocturne.h"

void FUN_005c1cf0(void)

{
  FileListNode *pFVar1;
  
  FUN_005c1d0c(0);
  while (g_FreeListHeadPointer != (FileListNode *)0x0) {
    pFVar1 = g_FreeListHeadPointer->next;
    debugFree(g_FreeListHeadPointer);
    g_FreeListHeadPointer = pFVar1;
  }
  return;
}
