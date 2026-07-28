// Name: crt_unknown.c_seek_within_buffer_FUN_00565814
// Address: 00565814
// Address Range: [[00565814, 0056582b]]
// Convention: __cdecl
// Signature: int __cdecl crt_unknown_c_seek_within_buffer_FUN_00565814(_FILE *file)

#include "nocturne.h"

int __cdecl seek_within_buffer(_FILE *file)

{
  char *pcVar1;
  
  *(byte *)&file->_flag = (byte)file->_flag & 0xef;
  pcVar1 = file->_link->__reserve_end;
  file->_cnt = 0;
  file->_ptr = pcVar1;
  return (int)file;
}
