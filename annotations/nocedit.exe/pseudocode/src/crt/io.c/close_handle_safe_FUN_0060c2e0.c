// Name: crt_io.c_close_handle_safe_FUN_0060c2e0
// Address: 0060c2e0
// Address Range: [[0060c2e0, 0060c331]]
// Convention: __cdecl
// Signature: int __cdecl crt_io_c_close_handle_safe_FUN_0060c2e0(int handle_index)

#include "nocturne.h"

int __cdecl crt_io_c_close_handle_safe_FUN_0060c2e0(int handle_index)

{
  int iVar1;
  
  if ((-1 < handle_index) && ((uint)handle_index <= g_MaxHandleCount)) {
    (*PTR_crt_sync_c_EnterCriticalSection_FUN_00602434_00684ee8)(handle_index);
    iVar1 = crt_io_c_close_FUN_00609bd0(handle_index);
    (*PTR_crt_sync_c_ExitCriticalSection_FUN_00602434_00684eec)(handle_index);
    (*PTR_crt_sync_c_InvalidateHandle_FUN_00602448_00684ef4)(handle_index);
    return iVar1;
  }
  crt_errno_c_setErrno_FUN_00602790(4);
  return -1;
}
