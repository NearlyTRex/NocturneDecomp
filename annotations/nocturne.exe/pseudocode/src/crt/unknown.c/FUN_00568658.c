// Name: crt_unknown.c_FUN_00568658
// Address: 00568658
// Address Range: [[00568658, 0056867d]]
// Convention: unknown
// Signature: void crt_unknown_c_FUN_00568658(void)

#include "nocturne.h"

void FUN_00568658(void)

{
  FileListNode *pFVar1;
  
  while (g_FileListNode_PTR_02de4e24 != (FileListNode *)0x0) {
    pFVar1 = g_FileListNode_PTR_02de4e24->next;
    free(g_FileListNode_PTR_02de4e24);
    g_FileListNode_PTR_02de4e24 = pFVar1;
  }
  return;
}
