// Name: crt_unknown.c_MultipleDoNothingCalls_FUN_00601a94
// Address: 00601a94
// Address Range: [[00601a94, 00601b12]]
// Convention: unknown
// Signature: _FILE * crt_unknown_c_MultipleDoNothingCalls_FUN_00601a94(_FILE *param_1)

#include "nocturne.h"

_FILE * MultipleDoNothingCalls(_FILE *param_1)

{
  _FILE *file_handle;
  FileListNode *pFVar1;
  FileListNode *pFVar2;
  
  (*PTR_crt_sync_c_EnterCriticalSection_FUN_00602434_00684ef8)();
  for (pFVar1 = g_AllocatedListHead; pFVar1 != (FileListNode *)0x0; pFVar1 = pFVar1->next) {
    file_handle = pFVar1->file_struct;
    if (param_1 == file_handle) {
      if ((file_handle->_flag & 3) != 0) {
        _fclose(file_handle,1);
      }
      (*PTR_crt_sync_c_ExitCriticalSection_FUN_00602434_00684efc)();
      return param_1;
    }
  }
  pFVar1 = (FileListNode *)&g_FreeListHeadPointer;
  do {
    pFVar2 = pFVar1;
    pFVar1 = pFVar2->next;
    if (pFVar1 == (FileListNode *)0x0) {
      setErrno(4);
      (*PTR_crt_sync_c_ExitCriticalSection_FUN_00602434_00684efc)();
      return (_FILE *)0x0;
    }
  } while (param_1 != pFVar1->file_struct);
  pFVar2->next = pFVar1->next;
  pFVar1->next = g_AllocatedListHead;
  g_AllocatedListHead = pFVar1;
  (*PTR_crt_sync_c_ExitCriticalSection_FUN_00602434_00684efc)();
  return param_1;
}
