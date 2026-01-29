// Name: crt_io.c_tell_FUN_00606720
// Address: 00606720
// Address Range: [[00606720, 0060677f]]
// Convention: __watcallStack
// Signature: long __watcallStack crt_io_c_tell_FUN_00606720(int file_handle_index)

#include "nocturne.h"

long __watcallStack tell(int file_handle_index)

{
  HANDLE hFile;
  DWORD DVar1;
  
  if ((-1 < file_handle_index) && ((uint)file_handle_index <= g_MaxHandleCount)) {
    hFile = g_IOControlBlock->standard_handles[file_handle_index];
    (*PTR_crt_sync_c_EnterCriticalSection_FUN_00602434_00684ee8)(file_handle_index);
    DVar1 = (*g_SetFilePointerFunc)(hFile,0,(PLONG)0x0,1);
    (*PTR_crt_sync_c_ExitCriticalSection_FUN_00602434_00684eec)(file_handle_index);
    if (DVar1 == 0xffffffff) {
      __set_errno();
    }
    return DVar1;
  }
  setErrno(4);
  return -1;
}
