// Name: crt_stdio.c_fclose_force_FUN_00601fd0
// Address: 00601fd0
// Address Range: [[00601fd0, 006020c1]]
// Convention: __cdecl
// Signature: int __cdecl crt_stdio_c_fclose_force_FUN_00601fd0(FILE *file_handle,int force_close_flag)

#include "nocturne.h"

int __cdecl crt_stdio_c_fclose_force_FUN_00601fd0(FILE *file_handle,int force_close_flag)

{
  uint uVar1;
  long distance_to_move;
  uint uVar2;
  int in_stack_0000000c;
  int in_stack_00000010;
  
  if (file_handle->_flag == 0) {
    uVar1 = 0xffffffff;
  }
  else {
    uVar1 = 0;
    if ((file_handle->_flag & 0x1000) != 0) {
      uVar1 = crt_stdio_c_fflushInternal_FUN_006039d0(file_handle);
    }
    (*PTR_crt_sync_c_EnterCriticalSection_FUN_00602434_00684ee8)(file_handle->_handle);
    distance_to_move = crt_stdio_c_ftell_FUN_00601560(file_handle);
    if (distance_to_move != -1) {
      crt_stdio_c_lseek_FUN_00606690(file_handle->_handle,distance_to_move,0);
    }
    if (in_stack_0000000c != 0) {
      uVar2 = crt_io_c_close_FUN_00609bd0(file_handle->_handle);
      uVar1 = uVar1 | uVar2;
    }
    if ((file_handle->_flag & 8) != 0) {
      crt_memory_c_free_FUN_00601cd0(file_handle->_link->__reserve_end);
      file_handle->_link->__reserve_end = (char *)0x0;
    }
    if ((file_handle->_flag & 0x800) != 0) {
      crt_io_c_generateTempFilename_FUN_00601f1c
                (&stack0xfffffee0,(uint)*(byte *)&file_handle->_link->__get_ptr);
      crt_io_c_deleteFile_FUN_005ff9d0(&stack0xfffffee0);
    }
    (*PTR_crt_sync_c_ExitCriticalSection_FUN_00602434_00684eec)(file_handle->_handle);
    if (in_stack_00000010 != 0) {
      (*PTR_crt_sync_c_InvalidateHandle_FUN_00602448_00684ef4)(file_handle->_handle);
    }
  }
  return uVar1;
}
