// Name: crt_unknown.c_FUN_005be848
// Address: 005be848
// Address Range: [[005be848, 005be86d]]
// Convention: unknown
// Signature: void crt_unknown_c_FUN_005be848(void)

#include "nocturne.h"

void FUN_005be848(void)

{
  FileListNode *pFVar1;
  
  while (g_FileListNode_PTR_02680164 != (FileListNode *)0x0) {
    pFVar1 = g_FileListNode_PTR_02680164->next;
    debugFree(g_FileListNode_PTR_02680164);
    g_FileListNode_PTR_02680164 = pFVar1;
  }
  return;
}
