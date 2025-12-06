// Name: crt_stdio.c_OpenFileAndInitialize_FUN_0060190c
// Address: 0060190c
// Address Range: [[0060190c, 00601a1d]]
// Convention: __cdecl
// Signature: FILE * crt_stdio.c_OpenFileAndInitialize_FUN_0060190c(char * filename, char mode_char, int parsed_mode_flags, int stage1_result, int additional_flags, FILE * file_struct)

#include "nocturne.h"

FILE * __cdecl
crt_stdio_c_OpenFileAndInitialize_FUN_0060190c
          (char *filename,char mode_char,int parsed_mode_flags,int stage1_result,
          int additional_flags,FILE *file_struct)

{
  byte bVar1;
  ushort uVar2;
  int iVar3;
  uint uVar4;
  undefined3 in_stack_00000009;
  uint uVar5;
  
  *(byte *)&file_struct->_flag = (byte)file_struct->_flag & 0xfc;
  file_struct->_flag = file_struct->_flag | parsed_mode_flags;
  iVar3 = crt_ctype_c_tolower_FUN_005feb30((uint)(byte)mode_char);
  if ((char)iVar3 == 'r') {
    uVar4 = 0;
    if ((stage1_result & 2U) != 0) {
      uVar4 = 2;
    }
    if ((stage1_result & 0x40U) == 0) {
      uVar4 = uVar4 | 0x100;
    }
    else {
      uVar4 = uVar4 | 0x200;
    }
    uVar5 = 0;
  }
  else {
    bVar1 = ((stage1_result & 1U) != 0) + 0x21;
    if ((stage1_result & 0x80U) == 0) {
      bVar1 = bVar1 | 0x40;
    }
    else {
      bVar1 = bVar1 | 0x10;
    }
    if ((stage1_result & 0x40U) == 0) {
      uVar2 = CONCAT11 /* combine 2-byte values */(1,bVar1);
    }
    else {
      uVar2 = CONCAT11 /* combine 2-byte values */(2,bVar1);
    }
    uVar4 = (uint)uVar2;
    uVar5 = 0x180;
  }
  iVar3 = crt_stdio_c_CreateFileVariadic_FUN_00609074(_mode_char,uVar4,(int)file_struct,uVar5);
  file_struct->_handle = iVar3;
  if (file_struct->_handle == -1) {
    crt_stdio_c_DeallocateFileStruct_FUN_006093b0(file_struct);
    return (FILE *)0x0;
  }
  file_struct->_cnt = 0;
  file_struct->_bufsize = 0;
  file_struct->_link->__get_base = (char *)0x0;
  file_struct->_link->__get_end = (char *)file_struct;
  *(uint *)((int)&file_struct->_link->__get_ptr + 1) = 0;
  file_struct->_link->__reserve_end = (char *)0x0;
  if ((additional_flags & 0x80U) != 0) {
    crt_stdio_c_fseek_FUN_005ffacc(file_struct,0,2);
  }
  crt_stdio_c_DetectDeviceAndSetBuffering_FUN_00608ee0(file_struct);
  return file_struct;
}
