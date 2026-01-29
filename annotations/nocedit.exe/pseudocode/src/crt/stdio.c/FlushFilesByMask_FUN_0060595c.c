// Name: crt_stdio.c_FlushFilesByMask_FUN_0060595c
// Address: 0060595c
// Address Range: [[0060595c, 006059a0]]
// Convention: __watcallStack
// Signature: int __watcallStack crt_stdio_c_FlushFilesByMask_FUN_0060595c(uint file_mode_mask)

#include "nocturne.h"

int __watcallStack FlushFilesByMask(uint file_mode_mask)

{
  _FILE *file_handle;
  FileListNode *pFVar1;
  int iVar2;
  
  (*PTR_crt_sync_c_EnterCriticalSection_FUN_00602434_00684ef8)();
  iVar2 = 0;
  for (pFVar1 = g_AllocatedListHead; pFVar1 != (FileListNode *)0x0; pFVar1 = pFVar1->next) {
    file_handle = pFVar1->file_struct;
    if (((file_handle->_flag & file_mode_mask) != 0) &&
       (iVar2 = iVar2 + 1, (file_handle->_flag & 0x1000) != 0)) {
      fflushInternal(file_handle);
    }
  }
  (*PTR_crt_sync_c_ExitCriticalSection_FUN_00602434_00684efc)();
  return iVar2;
}
