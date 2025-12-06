// Name: crt_stdio.c_fseek_FUN_005ffacc
// Address: 005ffacc
// Address Range: [[005ffacc, 005ffcb2]]
// Convention: __cdecl
// Signature: int crt_stdio.c_fseek_FUN_005ffacc(FILE * file, long offset, int whence)

#include "nocturne.h"

/* WARNING: Removing unreachable block (ram,0x005ffb98) */

int __cdecl crt_stdio_c_fseek_FUN_005ffacc(FILE *file,long offset,int whence)

{
  byte bVar1;
  char *pcVar2;
  int iVar3;
  int iVar4;
  long lVar5;
  
  (*PTR_crt_sync_c_EnterCriticalSection_FUN_00602434_00684ee8)(file->_handle);
  bVar1 = (byte)file->_flag;
  if ((bVar1 & 6) != 0) {
    if ((file->_flag & 0x1000) == 0) {
      if (whence == 1) {
        offset = offset - file->_cnt;
      }
      pcVar2 = file->_link->__reserve_end;
      file->_cnt = 0;
      file->_ptr = pcVar2;
    }
    else {
      iVar3 = crt_stdio_c_fflushInternal_FUN_006039d0(file);
      if (iVar3 != 0) {
        if ((whence == 0) && (offset < 0)) {
          crt_errno_c_setErrno_FUN_00602790(9);
        }
        (*PTR_crt_sync_c_ExitCriticalSection_FUN_00602434_00684eec)(file->_handle);
        return -1;
      }
    }
    *(byte *)&file->_flag = (byte)file->_flag & 0xeb;
    iVar3 = crt_stdio_c_lseek_FUN_00606690(file->_handle,offset,whence);
    if (iVar3 == -1) {
      (*PTR_crt_sync_c_ExitCriticalSection_FUN_00602434_00684eec)(file->_handle);
      return -1;
    }
    goto LAB_005ffc9f;
  }
  if (whence == 0) {
    lVar5 = crt_io_c_tell_FUN_00606720(file->_handle);
    iVar3 = crt_stdio_c_seek_within_buffer_FUN_005ffa70(offset - (lVar5 - file->_cnt),file);
    if (iVar3 == 0) goto LAB_005ffc9f;
    iVar3 = crt_stdio_c_lseek_FUN_00606690(file->_handle,offset,0);
    if (iVar3 == -1) {
      (*PTR_crt_sync_c_ExitCriticalSection_FUN_00602434_00684eec)(file->_handle);
      return -1;
    }
  }
  else {
    if (1 < (uint)whence) {
      if (whence != 2) {
        crt_errno_c_setErrno_FUN_00602790(9);
        (*PTR_crt_sync_c_ExitCriticalSection_FUN_00602434_00684eec)(file->_handle);
        return -1;
      }
      *(byte *)&file->_flag = bVar1 & 0xef;
      pcVar2 = file->_link->__reserve_end;
      file->_cnt = 0;
      file->_ptr = pcVar2;
      iVar3 = crt_stdio_c_lseek_FUN_00606690(file->_handle,offset,2);
      if (iVar3 == -1) {
        (*PTR_crt_sync_c_ExitCriticalSection_FUN_00602434_00684eec)(file->_handle);
        return -1;
      }
      goto LAB_005ffc9f;
    }
    iVar3 = file->_cnt;
    iVar4 = crt_stdio_c_seek_within_buffer_FUN_005ffa70(offset,file);
    if (iVar4 == 0) goto LAB_005ffc9f;
    iVar3 = crt_stdio_c_lseek_FUN_00606690(file->_handle,offset - iVar3,whence);
    if (iVar3 == -1) {
      (*PTR_crt_sync_c_ExitCriticalSection_FUN_00602434_00684eec)(file->_handle);
      return -1;
    }
  }
  crt_stdio_c_seek_within_buffer_FUN_005ffa70(file);
LAB_005ffc9f:
  (*PTR_crt_sync_c_ExitCriticalSection_FUN_00602434_00684eec)(file->_handle);
  return 0;
}
