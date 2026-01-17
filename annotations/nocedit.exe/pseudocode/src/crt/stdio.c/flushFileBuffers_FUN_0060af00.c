// Name: crt_stdio.c_flushFileBuffers_FUN_0060af00
// Address: 0060af00
// Address Range: [[0060af00, 0060af5c]]
// Convention: __watcallStack
// Signature: int crt_stdio.c_flushFileBuffers_FUN_0060af00(int file_handle_index)

#include "nocturne.h"

int __watcallStack crt_stdio_c_flushFileBuffers_FUN_0060af00(int file_handle_index)

{
  BOOL BVar1;
  int iVar2;
  
  iVar2 = 0;
  if ((-1 < file_handle_index) && ((uint)file_handle_index <= g_MaxHandleCount)) {
    (*PTR_crt_sync_c_EnterCriticalSection_FUN_00602434_00684ee8)(file_handle_index);
    BVar1 = (*g_FlushFileBuffersFunc)(g_IOControlBlock->standard_handles[file_handle_index]);
    if (BVar1 == 0) {
      crt_errno_c_getLastErrorAndSetErrno_FUN_006083fc();
      iVar2 = -1;
    }
    (*PTR_crt_sync_c_ExitCriticalSection_FUN_00602434_00684eec)(file_handle_index);
    return iVar2;
  }
  crt_errno_c_setErrno_FUN_00602790(4);
  return -1;
}
