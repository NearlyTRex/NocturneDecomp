// Name: crt_io.c_tell_FUN_00606720
// Address: 00606720
// Address Range: [[00606720, 0060677f]]
// Convention: __watcallStack
// Signature: long crt_io.c_tell_FUN_00606720(int file_handle_index)

#include "nocturne.h"

long __watcallStack crt_io_c_tell_FUN_00606720(int file_handle_index)

{
  HANDLE hFile;
  DWORD DVar1;
  uint uStack00000010;
  uint uStack00000020;
  
  if ((-1 < file_handle_index) && ((uint)file_handle_index <= g_MaxHandleCount)) {
    hFile = g_IOControlBlock->standard_handles[file_handle_index];
    (*PTR_crt_sync_c_EnterCriticalSection_FUN_00602434_00684ee8)(file_handle_index);
    DVar1 = (*SetFilePointer)(hFile,0,(PLONG)0x0,1);
    uStack00000010 = 0x60676e;
    (*PTR_crt_sync_c_ExitCriticalSection_FUN_00602434_00684eec)(file_handle_index);
    if (DVar1 == 0xffffffff) {
      uStack00000020 = 0x60677b;
      crt_errno_c_getLastErrorAndSetErrno_FUN_006083fc();
    }
    return DVar1;
  }
  crt_errno_c_setErrno_FUN_00602790(4);
  return -1;
}
