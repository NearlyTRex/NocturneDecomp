// Name: crt_unknown.c_FUN_005be810
// Address: 005be810
// Address Range: [[005be810, 005be846]]
// Convention: unknown
// Signature: void crt_unknown_c_FUN_005be810(_FILE *param_1)

#include "nocturne.h"

void FUN_005be810(_FILE *param_1)

{
  FileListNode *pFVar1;
  FileListNode *pFVar2;
  
  pFVar1 = (FileListNode *)&g_AllocatedListHead;
  do {
    pFVar2 = pFVar1;
    pFVar1 = pFVar2->next;
    if (pFVar1 == (FileListNode *)0x0) {
      return;
    }
  } while (param_1 != pFVar1->file_struct);
  *(byte *)&param_1->_flag = (byte)pFVar1->file_struct->_flag | 3;
  pFVar2->next = pFVar1->next;
  pFVar1->next = g_FreeListHeadPointer;
  g_FreeListHeadPointer = pFVar1;
  return;
}
