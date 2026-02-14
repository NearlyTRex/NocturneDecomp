// Name: crt_stdio.c_OpenFileAndInitialize_FUN_0060190c
// Address: 0060190c
// Address Range: [[0060190c, 00601a1d]]
// Convention: __cdecl
// Signature: _FILE * __cdecl crt_stdio_c_OpenFileAndInitialize_FUN_0060190c(char *filename,char mode_char,int parsed_mode_flags,int stage1_result,int additional_flags,_FILE *file_struct)

#include "nocturne.h"

_FILE * __cdecl OpenFileAndInitialize(char *filename,char mode_char,int parsed_mode_flags,int stage1_result,int additional_flags,_FILE *file_struct)

{
  byte bVar1;
  ushort uVar2;
  int iVar3;
  uint uVar4;
  uint uVar5;
  
  *(byte *)&file_struct->_flag = (byte)file_struct->_flag & 0xfc;
  file_struct->_flag = file_struct->_flag | parsed_mode_flags;
  iVar3 = tolower((uint)(byte)mode_char);
  if ((char)iVar3 == 'r') {
    uVar4 = 0;
    if ((parsed_mode_flags & 2U) != 0) {
      uVar4 = 2;
    }
    if ((parsed_mode_flags & 0x40U) == 0) {
      uVar4 = uVar4 | 0x100;
    }
    else {
      uVar4 = uVar4 | 0x200;
    }
    uVar5 = 0;
  }
  else {
    bVar1 = ((parsed_mode_flags & 1U) != 0) + 0x21;
    if ((parsed_mode_flags & 0x80U) == 0) {
      bVar1 = bVar1 | 0x40;
    }
    else {
      bVar1 = bVar1 | 0x10;
    }
    if ((parsed_mode_flags & 0x40U) == 0) {
      uVar2 = CONCAT11(1,bVar1);
    }
    else {
      uVar2 = CONCAT11(2,bVar1);
    }
    uVar4 = (uint)uVar2;
    uVar5 = 0x180;
  }
  iVar3 = CreateFileVariadic(filename,uVar4,additional_flags,uVar5);
  file_struct->_handle = iVar3;
  if (file_struct->_handle == -1) {
    __freefp(file_struct);
    return (_FILE *)0x0;
  }
  file_struct->_cnt = 0;
  file_struct->_bufsize = 0;
  file_struct->_link->__get_base = (char *)0x0;
  file_struct->_link->__get_end = (char *)stage1_result;
  *(uint *)((int)&file_struct->_link->__get_ptr + 1) = 0;
  file_struct->_link->__reserve_end = (char *)0x0;
  if ((parsed_mode_flags & 0x80U) != 0) {
    _fseek(file_struct,0,2);
  }
  DetectDeviceAndSetBuffering(file_struct);
  return file_struct;
}
