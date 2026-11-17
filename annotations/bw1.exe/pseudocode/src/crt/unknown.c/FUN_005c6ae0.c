// Name: crt_unknown.c_FUN_005c6ae0
// Address: 005c6ae0
// Address Range: [[005c6ae0, 005c6b16]]
// Convention: unknown
// Signature: void crt_unknown_c_FUN_005c6ae0(_FILE *param_1)

#include "nocturne.h"

void FUN_005c6ae0(_FILE *param_1)

{
  FileListNode *pFVar1;
  FileListNode *pFVar2;
  
  pFVar1 = (FileListNode *)&g_FileListNode_PTR_02c9f050;
  do {
    pFVar2 = pFVar1;
    pFVar1 = pFVar2->next;
    if (pFVar1 == (FileListNode *)0x0) {
      return;
    }
  } while (param_1 != pFVar1->file_struct);
  *(byte *)&param_1->_flag = (byte)pFVar1->file_struct->_flag | 3;
  pFVar2->next = pFVar1->next;
  pFVar1->next = g_FileListNode_PTR_02c9f054;
  g_FileListNode_PTR_02c9f054 = pFVar1;
  return;
}
