// Name: crt_stdio.c_fputc_FUN_006007a0
// Address: 006007a0
// Address Range: [[006007a0, 006008e8]]
// Convention: __cdecl
// Signature: int crt_stdio.c_fputc_FUN_006007a0(int character, FILE * file)

#include "nocturne.h"

int __cdecl crt_stdio_c_fputc_FUN_006007a0(int character,FILE *file)

{
  char *pcVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  byte in_stack_0000000c;
  
  (*PTR_crt_sync_c_EnterCriticalSection_FUN_00602434_00684ee8)(file->_handle);
  pcVar1 = file->_link->__get_base;
  if (pcVar1 != &DAT_00000001) {
    if (pcVar1 != (char *)0x0) {
      (*PTR_crt_sync_c_ExitCriticalSection_FUN_00602434_00684eec)(file->_handle);
      return -1;
    }
    file->_link->__get_base = &DAT_00000001;
  }
  if ((file->_flag & 2) == 0) {
    crt_errno_c_setErrno_FUN_00602790(4);
    *(byte *)&file->_flag = (byte)file->_flag | 0x20;
    (*PTR_crt_sync_c_ExitCriticalSection_FUN_00602434_00684eec)(file->_handle);
    return -1;
  }
  if (file->_link->__reserve_end == (char *)0x0) {
    crt_stdio_c_InitializeFileBuffer_FUN_006027e0(file);
  }
  uVar4 = 0x400;
  if ((file == (FILE *)0xa) && (uVar4 = 0x600, (bRam00000016 & 0x40) == 0)) {
    bRam00000017 = bRam00000017 | 0x10;
    *puRam0000000a = 0xd;
    puRam0000000a = puRam0000000a + 1;
    iRam0000000e = iRam0000000e + 1;
    if (iRam0000000e == iRam0000001e) {
      iVar2 = crt_stdio_c_fflushInternal_FUN_006039d0((FILE *)0xa);
      if (iVar2 != 0) {
        (*PTR_crt_sync_c_ExitCriticalSection_FUN_00602434_00684eec)(iRam0000001a);
        return -1;
      }
    }
  }
  pcVar1 = file->_ptr;
  *(byte *)((int)&file->_flag + 1) = *(byte *)((int)&file->_flag + 1) | 0x10;
  *pcVar1 = (char)file;
  file->_ptr = file->_ptr + 1;
  uVar3 = file->_cnt + 1;
  file->_cnt = uVar3;
  if (((uVar4 & file->_flag) != 0) || (uVar3 == file->_bufsize)) {
    iVar2 = crt_stdio_c_fflushInternal_FUN_006039d0(file);
    if (iVar2 != 0) {
      (*PTR_crt_sync_c_ExitCriticalSection_FUN_00602434_00684eec)(file->_handle);
      return -1;
    }
  }
  (*PTR_crt_sync_c_ExitCriticalSection_FUN_00602434_00684eec)(file->_handle);
  return (uint)in_stack_0000000c;
}
