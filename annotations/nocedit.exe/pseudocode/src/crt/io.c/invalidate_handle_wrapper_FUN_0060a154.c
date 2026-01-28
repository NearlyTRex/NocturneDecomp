// Name: crt_io.c_invalidate_handle_wrapper_FUN_0060a154
// Address: 0060a154
// Address Range: [[0060a154, 0060a179]]
// Convention: __cdecl
// Signature: void __cdecl crt_io_c_invalidate_handle_wrapper_FUN_0060a154(int handle_index)

#include "nocturne.h"

void __cdecl crt_io_c_invalidate_handle_wrapper_FUN_0060a154(int handle_index)

{
  crt_sync_c_reset_reentrant_critical_section_state_FUN_0060a04c
            ((ReentrantCriticalSection *)(&g_TlsDataBase + (handle_index & 0xfU) * 4));
  crt_io_c_invalidate_handle_FUN_00608af4(handle_index);
  return;
}
