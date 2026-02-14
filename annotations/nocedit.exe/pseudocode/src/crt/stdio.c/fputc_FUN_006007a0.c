// Name: crt_stdio.c_fputc_FUN_006007a0
// Address: 006007a0
// Address Range: [[006007a0, 006008e8]]
// Convention: __cdecl
// Signature: int __cdecl crt_stdio_c_fputc_FUN_006007a0(int character,_FILE *file)

#include "nocturne.h"

int __cdecl _fputc(int character,_FILE *file)

{
  char *pcVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  
  (*PTR_crt_sync_c_EnterCriticalSection_FUN_00602434_00684ee8)(file->_handle);
  pcVar1 = file->_link->__get_base;
  if (pcVar1 != (char *)0x1) {
    if (pcVar1 != (char *)0x0) {
      (*PTR_crt_sync_c_ExitCriticalSection_FUN_00602434_00684eec)(file->_handle);
      return -1;
    }
    file->_link->__get_base = (char *)0x1;
  }
  if ((file->_flag & 2) == 0) {
    setErrno(4);
    *(byte *)&file->_flag = (byte)file->_flag | 0x20;
    (*PTR_crt_sync_c_ExitCriticalSection_FUN_00602434_00684eec)(file->_handle);
    return -1;
  }
  if (file->_link->__reserve_end == (char *)0x0) {
    InitializeFileBuffer(file);
  }
  uVar4 = 0x400;
  if ((character == 10) && (uVar4 = 0x600, (file->_flag & 0x40) == 0)) {
    pcVar1 = file->_ptr;
    *(byte *)((int)&file->_flag + 1) = *(byte *)((int)&file->_flag + 1) | 0x10;
    *pcVar1 = '\r';
    file->_ptr = file->_ptr + 1;
    uVar3 = file->_cnt + 1;
    file->_cnt = uVar3;
    if (uVar3 == file->_bufsize) {
      iVar2 = fflushInternal(file);
      if (iVar2 != 0) {
        (*PTR_crt_sync_c_ExitCriticalSection_FUN_00602434_00684eec)(file->_handle);
        return -1;
      }
    }
  }
  pcVar1 = file->_ptr;
  *(byte *)((int)&file->_flag + 1) = *(byte *)((int)&file->_flag + 1) | 0x10;
  *pcVar1 = (char)character;
  file->_ptr = file->_ptr + 1;
  uVar3 = file->_cnt + 1;
  file->_cnt = uVar3;
  if (((uVar4 & file->_flag) != 0) || (uVar3 == file->_bufsize)) {
    iVar2 = fflushInternal(file);
    if (iVar2 != 0) {
      (*PTR_crt_sync_c_ExitCriticalSection_FUN_00602434_00684eec)(file->_handle);
      return -1;
    }
  }
  (*PTR_crt_sync_c_ExitCriticalSection_FUN_00602434_00684eec)(file->_handle);
  return character & 0xff;
}
