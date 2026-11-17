// Name: crt_unknown.c_FUN_005a9988
// Address: 005a9988
// Address Range: [[005a9988, 005a99ad]]
// Convention: unknown
// Signature: void crt_unknown_c_FUN_005a9988(void)

#include "nocturne.h"

void FUN_005a9988(void)

{
  FileListNode *pFVar1;
  
  while (g_FileListNode_PTR_02d252a4 != (FileListNode *)0x0) {
    pFVar1 = g_FileListNode_PTR_02d252a4->next;
    debugFree(g_FileListNode_PTR_02d252a4);
    g_FileListNode_PTR_02d252a4 = pFVar1;
  }
  return;
}
