// Name: crt_stdio.c_fgetc_FUN_005fe840
// Address: 005fe840
// Address Range: [[005fe840, 005fe90d]]
// Convention: __watcallStack
// Signature: int crt_stdio.c_fgetc_FUN_005fe840(FILE * file)

#include "nocturne.h"

int __watcallStack crt_stdio_c_fgetc_FUN_005fe840(FILE *file)

{
  char *pcVar1;
  int iVar2;
  int unaff_EBX;
  uint uVar3;
  
  (*PTR_crt_sync_c_EnterCriticalSection_FUN_00602434_00684ee8)(file->_handle);
  pcVar1 = file->_link->__get_base;
  if (pcVar1 != &DAT_00000001) {
    if (pcVar1 != (char *)0x0) {
      uVar3 = 0xffffffff;
      goto LAB_005fe8fe;
    }
    file->_link->__get_base = &DAT_00000001;
  }
  if ((file->_flag & 1) == 0) {
    crt_errno_c_setErrno_FUN_00602790(4);
    uVar3 = 0xffffffff;
    *(byte *)&file->_flag = (byte)file->_flag | 0x20;
  }
  else {
    iVar2 = file->_cnt + -1;
    file->_cnt = iVar2;
    if (iVar2 < 0) {
      uVar3 = crt_stdio_c_FillBufferAndGetChar_FUN_005fe910(file);
    }
    else {
      uVar3 = (uint)(byte)*file->_ptr;
      file->_ptr = file->_ptr + 1;
    }
  }
  if ((file->_flag & 0x40) == 0) {
    if (uVar3 == 0xd) {
      iVar2 = file->_cnt + -1;
      file->_cnt = iVar2;
      if (iVar2 < 0) {
        uVar3 = crt_stdio_c_FillBufferAndGetChar_FUN_005fe910(file);
      }
      else {
        uVar3 = (uint)(byte)*file->_ptr;
        file->_ptr = file->_ptr + 1;
      }
    }
    if (uVar3 == 0x1a) {
      uVar3 = 0xffffffff;
      *(byte *)&file->_flag = (byte)file->_flag | 0x10;
    }
  }
  unaff_EBX = file->_handle;
LAB_005fe8fe:
  (*PTR_crt_sync_c_ExitCriticalSection_FUN_00602434_00684eec)(unaff_EBX);
  return uVar3;
}
