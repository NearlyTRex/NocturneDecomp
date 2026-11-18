// Name: crt_stdio.c_fclose_FUN_005a3a90
// Address: 005a3a90
// Address Range: [[005a3a90, 005a3ad0]]
// Convention: __cdecl
// Signature: int __cdecl crt_stdio_c_fclose_FUN_005a3a90(_FILE *file_handle)

#include "nocturne.h"

int __cdecl _fclose(_FILE *file_handle)

{
  FileListNode *pFVar1;
  int iVar2;
  
  (*(code *)PTR_crt_unknown_c_FUN_005a7f44_006079b4)();
  pFVar1 = g_AllocatedListHead;
  while( true ) {
    if (pFVar1 == (FileListNode *)0x0) {
      (*(code *)PTR_crt_unknown_c_FUN_005a7f44_006079b8)();
      return -1;
    }
    if (file_handle == pFVar1->file_struct) break;
    pFVar1 = pFVar1->next;
  }
  (*(code *)PTR_crt_unknown_c_FUN_005a7f44_006079b8)();
  iVar2 = FUN_005a3ad4(file_handle,1);
  return iVar2;
}
