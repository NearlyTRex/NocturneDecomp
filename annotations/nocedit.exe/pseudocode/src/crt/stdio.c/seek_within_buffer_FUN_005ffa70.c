// Name: crt_stdio.c_seek_within_buffer_FUN_005ffa70
// Address: 005ffab4
// Address Range: [[005ffab4, 005ffacb]]
// Convention: __cdecl
// Signature: int crt_stdio.c_seek_within_buffer_FUN_005ffa70(FILE * file)

#include "nocturne.h"

int __cdecl crt_stdio_c_seek_within_buffer_FUN_005ffa70(FILE *file)

{
  char *pcVar1;
  
  *(byte *)&file->_flag = (byte)file->_flag & 0xef;
  pcVar1 = file->_link->__reserve_end;
  file->_cnt = 0;
  file->_ptr = pcVar1;
  return (int)file;
}
