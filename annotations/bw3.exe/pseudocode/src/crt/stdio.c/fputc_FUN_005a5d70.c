// Name: crt_stdio.c_fputc_FUN_005a5d70
// Address: 005a5d70
// Address Range: [[005a5d70, 005a5eb8]]
// Convention: __cdecl
// Signature: int __cdecl crt_stdio_c_fputc_FUN_005a5d70(int character,_FILE *file)

#include "nocturne.h"

int __cdecl _fputc(int character,_FILE *file)

{
  char *pcVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  
  (*(code *)PTR_crt_unknown_c_FUN_005a7f44_006079a4)(file->_handle);
  pcVar1 = file->_link->__get_base;
  if (pcVar1 != (char *)0x1) {
    if (pcVar1 != (char *)0x0) {
      (*(code *)PTR_crt_unknown_c_FUN_005a7f44_006079a8)(file->_handle);
      return -1;
    }
    file->_link->__get_base = (char *)0x1;
  }
  if ((file->_flag & 2) == 0) {
    setErrno(4);
    *(byte *)&file->_flag = (byte)file->_flag | 0x20;
    (*(code *)PTR_crt_unknown_c_FUN_005a7f44_006079a8)(file->_handle);
    return -1;
  }
  if (file->_link->__reserve_end == (char *)0x0) {
    FUN_005a9310(file);
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
      iVar2 = FUN_005a9bc0(file);
      if (iVar2 != 0) {
        (*(code *)PTR_crt_unknown_c_FUN_005a7f44_006079a8)(file->_handle);
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
    iVar2 = FUN_005a9bc0(file);
    if (iVar2 != 0) {
      (*(code *)PTR_crt_unknown_c_FUN_005a7f44_006079a8)(file->_handle);
      return -1;
    }
  }
  (*(code *)PTR_crt_unknown_c_FUN_005a7f44_006079a8)(file->_handle);
  return character & 0xff;
}
