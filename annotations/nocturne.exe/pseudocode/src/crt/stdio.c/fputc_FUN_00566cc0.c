// Name: crt_stdio.c_fputc_FUN_00566cc0
// Address: 00566cc0
// Address Range: [[00566cc0, 00566e08]]
// Convention: __cdecl
// Signature: int __cdecl crt_stdio_c_fputc_FUN_00566cc0(int character,_FILE *file)

#include "nocturne.h"

int __cdecl _fputc(int character,_FILE *file)

{
  char *pcVar1;
  int iVar2;
  uint uVar3;
  char *unaff_EBP;
  SIZE_T unaff_ESI;
  uint uVar4;
  int unaff_EDI;
  
  (*(code *)PTR_crt_sync_c_CriticalSectionStub_FUN_005671e4_005c1ac0)(file->_handle);
  pcVar1 = file->_link->__get_base;
  if (pcVar1 != (char *)0x1) {
    if (pcVar1 != (char *)0x0) {
      (*(code *)PTR_crt_sync_c_CriticalSectionStub_FUN_005671e4_005c1ac4)(file->_handle);
      return -1;
    }
    file->_link->__get_base = (char *)0x1;
  }
  if ((file->_flag & 2) == 0) {
    setErrno(4);
    *(byte *)&file->_flag = (byte)file->_flag | 0x20;
    (*(code *)PTR_crt_sync_c_CriticalSectionStub_FUN_005671e4_005c1ac4)(file->_handle);
    return -1;
  }
  if (file->_link->__reserve_end == (char *)0x0) {
    _setvbuf(file,unaff_EBP,unaff_EDI,unaff_ESI);
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
      iVar2 = FUN_00568890(file);
      if (iVar2 != 0) {
        (*(code *)PTR_crt_sync_c_CriticalSectionStub_FUN_005671e4_005c1ac4)(file->_handle);
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
    iVar2 = FUN_00568890(file);
    if (iVar2 != 0) {
      (*(code *)PTR_crt_sync_c_CriticalSectionStub_FUN_005671e4_005c1ac4)(file->_handle);
      return -1;
    }
  }
  (*(code *)PTR_crt_sync_c_CriticalSectionStub_FUN_005671e4_005c1ac4)(file->_handle);
  return character & 0xff;
}
