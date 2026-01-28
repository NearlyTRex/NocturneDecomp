// Name: crt_stdio.c_ftell_FUN_00601560
// Address: 00601560
// Address Range: [[00601560, 006015c6]]
// Convention: __cdecl
// Signature: long __cdecl crt_stdio_c_ftell_FUN_00601560(FILE *file_handle)

#include "nocturne.h"

long __cdecl crt_stdio_c_ftell_FUN_00601560(FILE *file_handle)

{
  int iVar1;
  int iVar2;
  
  if (((file_handle->_flag & 0x80) != 0) && ((file_handle->_flag & 0x1000) != 0)) {
    crt_stdio_c_fflush_FUN_00601540(file_handle);
  }
  iVar2 = crt_io_c_tell_FUN_00606720(file_handle->_handle);
  if (iVar2 != -1) {
    (*PTR_crt_sync_c_EnterCriticalSection_FUN_00602434_00684ee8)(file_handle->_handle);
    iVar1 = file_handle->_cnt;
    if (iVar1 != 0) {
      if ((file_handle->_flag & 0x1000) == 0) {
        iVar2 = iVar2 - iVar1;
      }
      else {
        iVar2 = iVar2 + iVar1;
      }
    }
    (*PTR_crt_sync_c_ExitCriticalSection_FUN_00602434_00684eec)(file_handle->_handle);
  }
  return iVar2;
}
