// Name: crt_stdio.c_fflushInternal_FUN_006039d0
// Address: 006039d0
// Address Range: [[006039d0, 00603af6]]
// Convention: __watcallStack
// Signature: int __watcallStack crt_stdio_c_fflushInternal_FUN_006039d0(FILE *file_handle)

#include "nocturne.h"

int __watcallStack crt_stdio_c_fflushInternal_FUN_006039d0(FILE *file_handle)

{
  byte bVar1;
  uint uVar2;
  int iVar3;
  char *pcVar4;
  int iVar5;
  int iVar6;
  
  iVar6 = 0;
  (*PTR_crt_sync_c_EnterCriticalSection_FUN_00602434_00684ee8)(file_handle->_handle);
  bVar1 = *(byte *)((int)&file_handle->_flag + 1);
  if ((bVar1 & 0x10) == 0) {
    if ((file_handle->_link->__reserve_end != (char *)0x0) &&
       (*(byte *)&file_handle->_flag = (byte)file_handle->_flag & 0xef,
       (file_handle->_flag & 0x2000) == 0)) {
      iVar5 = 0;
      if (file_handle->_cnt != 0) {
        iVar5 = crt_stdio_c_lseek_FUN_00606690(file_handle->_handle,-file_handle->_cnt,1);
      }
      if (iVar5 == -1) {
        *(byte *)&file_handle->_flag = (byte)file_handle->_flag | 0x20;
        iVar6 = -1;
      }
    }
  }
  else {
    uVar2 = file_handle->_flag;
    *(byte *)((int)&file_handle->_flag + 1) = bVar1 & 0xef;
    if (((uVar2 & 2) != 0) && (pcVar4 = file_handle->_link->__reserve_end, pcVar4 != (char *)0x0)) {
      iVar5 = file_handle->_cnt;
      while ((iVar5 != 0 && (iVar6 == 0))) {
        iVar3 = crt_stdio_c_write_FUN_006038c0(file_handle->_handle,pcVar4,iVar5);
        if (iVar3 == -1) {
          *(byte *)&file_handle->_flag = (byte)file_handle->_flag | 0x20;
          iVar6 = -1;
        }
        else if (iVar3 == 0) {
          crt_errno_c_setErrno_FUN_00602790(0xc);
          iVar6 = -1;
          *(byte *)&file_handle->_flag = (byte)file_handle->_flag | 0x20;
        }
        pcVar4 = pcVar4 + iVar3;
        iVar5 = iVar5 - iVar3;
      }
    }
  }
  pcVar4 = file_handle->_link->__reserve_end;
  file_handle->_cnt = 0;
  file_handle->_ptr = pcVar4;
  if (((iVar6 == 0) && (((uint)file_handle->_link->__get_end & 1) != 0)) &&
     (iVar5 = crt_stdio_c_flushFileBuffers_FUN_0060af00(file_handle->_handle), iVar5 == -1)) {
    iVar6 = -1;
  }
  (*PTR_crt_sync_c_ExitCriticalSection_FUN_00602434_00684eec)(file_handle->_handle);
  return iVar6;
}
