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
  while (g_FileListNode_PTR_02680164 != (FileListNode *)0x0) {
    pFVar1 = g_FileListNode_PTR_02680164->next;
    debugFree(g_FileListNode_PTR_02680164);
    g_FileListNode_PTR_02680164 = pFVar1;
  }
  return;
}
