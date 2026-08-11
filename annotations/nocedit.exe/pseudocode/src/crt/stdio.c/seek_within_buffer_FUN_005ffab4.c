// Name: crt_stdio.c_seek_within_buffer_FUN_005ffab4
// Address: 005ffab4
// Address Range: [[005ffab4, 005ffacb]]
// Convention: __cdecl
// Signature: int __cdecl crt_stdio_c_seek_within_buffer_FUN_005ffab4(_FILE *file)

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
