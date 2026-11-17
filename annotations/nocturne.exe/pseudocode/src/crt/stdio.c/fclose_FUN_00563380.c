// Name: crt_stdio.c_fclose_FUN_00563380
// Address: 00563380
// Address Range: [[00563380, 005633c0]]
// Convention: __cdecl
// Signature: int __cdecl crt_stdio_c_fclose_FUN_00563380(_FILE *file_handle)

#include "nocturne.h"

int __cdecl _fclose(_FILE *file_handle)

{
  FileListNode *pFVar1;
  int iVar2;
  
  (*(code *)PTR_crt_sync_c_CriticalSectionStub_FUN_005671e4_005c1ad0)();
  pFVar1 = g_FileListNode_PTR_02de4e20;
  while( true ) {
    if (pFVar1 == (FileListNode *)0x0) {
      (*(code *)PTR_crt_sync_c_CriticalSectionStub_FUN_005671e4_005c1ad4)();
      return -1;
    }
    if (file_handle == pFVar1->file_struct) break;
    pFVar1 = pFVar1->next;
  }
  (*(code *)PTR_crt_sync_c_CriticalSectionStub_FUN_005671e4_005c1ad4)();
  iVar2 = __CClose(file_handle,1);
  return iVar2;
}
