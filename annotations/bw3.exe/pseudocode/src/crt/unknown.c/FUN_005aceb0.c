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
  while (g_FileListNode_PTR_02d252a4 != (FileListNode *)0x0) {
    pFVar1 = g_FileListNode_PTR_02d252a4->next;
    debugFree(g_FileListNode_PTR_02d252a4);
    g_FileListNode_PTR_02d252a4 = pFVar1;
  }
  return;
}
