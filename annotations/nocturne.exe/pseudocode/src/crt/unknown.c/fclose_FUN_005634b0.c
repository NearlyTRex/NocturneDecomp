// Name: crt_unknown.c_fclose_FUN_005634b0
// Address: 005634b0
// Address Range: [[005634b0, 005635a1]]
// Convention: __cdecl
// Signature: int __cdecl crt_unknown_c_fclose_FUN_005634b0(_FILE *file_handle,int force_close_flag)

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
      uVar1 = FUN_00568890(file_handle);
    }
    (*(code *)PTR_crt_sync_c_CriticalSectionStub_FUN_005671e4_005c1ac0)(file_handle->_handle);
    distance_to_move = _ftell(file_handle);
    if (distance_to_move != -1) {
      lseek(file_handle->_handle,distance_to_move,0);
    }
    if (force_close_flag != 0) {
      uVar2 = close(file_handle->_handle);
      uVar1 = uVar1 | uVar2;
    }
    if ((file_handle->_flag & 8) != 0) {
      FUN_005638d0(file_handle->_link->__reserve_end);
      file_handle->_link->__reserve_end = (char *)0x0;
    }
    if ((file_handle->_flag & 0x800) != 0) {
      _tempnam(acStack_124,(uint)*(byte *)&file_handle->_link->__get_ptr)
      ;
      remove(acStack_124);
    }
    (*(code *)PTR_crt_sync_c_CriticalSectionStub_FUN_005671e4_005c1ac4)(file_handle->_handle);
    if (force_close_flag != 0) {
      (*(code *)PTR_crt_io_c_invalidate_handle_wrapper_FUN_005671f8_005c1acc)(file_handle->_handle);
    }
  }
  return uVar1;
}
