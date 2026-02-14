// Name: crt_stdio.c__fclose_FUN_00601fd0
// Address: 00601fd0
// Address Range: [[00601fd0, 006020c1]]
// Convention: __cdecl
// Signature: int __cdecl crt_stdio_c__fclose_FUN_00601fd0(_FILE *file_handle,int force_close_flag)

#include "nocturne.h"

int __cdecl _fclose(_FILE *file_handle,int force_close_flag)

{
  uint uVar1;
  long distance_to_move;
  uint uVar2;
  char acStack_124 [276];
  
  if (file_handle->_flag == 0) {
    uVar1 = 0xffffffff;
  }
  else {
    uVar1 = 0;
    if ((file_handle->_flag & 0x1000) != 0) {
      uVar1 = fflushInternal(file_handle);
    }
    (*PTR_crt_sync_c_EnterCriticalSection_FUN_00602434_00684ee8)(file_handle->_handle);
    distance_to_move = _ftell(file_handle);
    if (distance_to_move != -1) {
      lseek(file_handle->_handle,distance_to_move,0);
    }
    if (force_close_flag != 0) {
      uVar2 = close(file_handle->_handle);
      uVar1 = uVar1 | uVar2;
    }
    if ((file_handle->_flag & 8) != 0) {
      free(file_handle->_link->__reserve_end);
      file_handle->_link->__reserve_end = (char *)0x0;
    }
    if ((file_handle->_flag & 0x800) != 0) {
      _tempnam(acStack_124,(uint)*(byte *)&file_handle->_link->__get_ptr);
      remove(acStack_124);
    }
    (*PTR_crt_sync_c_ExitCriticalSection_FUN_00602434_00684eec)(file_handle->_handle);
    if (force_close_flag != 0) {
      (*PTR_crt_sync_c_InvalidateHandle_FUN_00602448_00684ef4)(file_handle->_handle);
    }
  }
  return uVar1;
}
