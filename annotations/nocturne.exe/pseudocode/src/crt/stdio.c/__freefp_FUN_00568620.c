// Name: crt_stdio.c___freefp_FUN_00568620
// Address: 00568620
// Address Range: [[00568620, 00568656]]
// Convention: __cdecl
// Signature: void __cdecl crt_stdio_c___freefp_FUN_00568620(_FILE *file_handle)

#include "nocturne.h"

void __cdecl __freefp(_FILE *file_handle)

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
  } while (file_handle != pFVar1->file_struct);
  *(byte *)&file_handle->_flag = (byte)pFVar1->file_struct->_flag | 3;
  pFVar2->next = pFVar1->next;
  pFVar1->next = g_FreeListHeadPointer;
  g_FreeListHeadPointer = pFVar1;
  return;
}
