// Name: crt_stdio.c_fgetc_FUN_005c0530
// Address: 005c0530
// Address Range: [[005c0530, 005c05fd]]
// Convention: __cdecl
// Signature: int __cdecl crt_stdio_c_fgetc_FUN_005c0530(_FILE *file)

#include "nocturne.h"

int __cdecl _fgetc(_FILE *file)

{
  char *pcVar1;
  int iVar2;
  uint uVar3;
  
  (*(code *)PTR_crt_unknown_c_FUN_005c50d4_00626600)(file->_handle);
  pcVar1 = file->_link->__get_base;
  if (pcVar1 != (char *)0x1) {
    if (pcVar1 != (char *)0x0) {
      iVar2 = file->_handle;
      uVar3 = 0xffffffff;
      goto LAB_005c05ee;
    }
    file->_link->__get_base = (char *)0x1;
  }
  if ((file->_flag & 1) == 0) {
    setErrno(4);
    uVar3 = 0xffffffff;
    *(byte *)&file->_flag = (byte)file->_flag | 0x20;
  }
  else {
    iVar2 = file->_cnt + -1;
    file->_cnt = iVar2;
    if (iVar2 < 0) {
      uVar3 = FUN_005c0600(file);
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
        uVar3 = FUN_005c0600(file);
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
  iVar2 = file->_handle;
LAB_005c05ee:
  (*(code *)PTR_crt_unknown_c_FUN_005c50d4_00626604)(iVar2);
  return uVar3;
}
