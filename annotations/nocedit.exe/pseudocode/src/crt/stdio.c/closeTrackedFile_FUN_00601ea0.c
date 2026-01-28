// Name: crt_stdio.c_closeTrackedFile_FUN_00601ea0
// Address: 00601ea0
// Address Range: [[00601ea0, 00601ee0]]
// Convention: __cdecl
// Signature: int __cdecl crt_stdio_c_closeTrackedFile_FUN_00601ea0(FILE *file_handle)

#include "nocturne.h"

int __cdecl crt_stdio_c_closeTrackedFile_FUN_00601ea0(FILE *file_handle)

{
  FileListNode *pFVar1;
  int iVar2;
  
  (*PTR_crt_sync_c_EnterCriticalSection_FUN_00602434_00684ef8)();
  pFVar1 = g_AllocatedListHead;
  while( true ) {
    if (pFVar1 == (FileListNode *)0x0) {
      (*PTR_crt_sync_c_ExitCriticalSection_FUN_00602434_00684efc)();
      return -1;
    }
    if (file_handle == pFVar1->file_struct) break;
    pFVar1 = pFVar1->next;
  }
  (*PTR_crt_sync_c_ExitCriticalSection_FUN_00602434_00684efc)();
  iVar2 = crt_stdio_c_closeAndDeallocateFile_FUN_00601ee4(file_handle,1);
  return iVar2;
}
