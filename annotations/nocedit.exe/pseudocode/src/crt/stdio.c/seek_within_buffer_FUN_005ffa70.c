// Name: crt_stdio.c_seek_within_buffer_FUN_005ffa70
// Address: 005ffa70
// Address Range: [[005ffa70, 005ffab3]]
// Convention: __cdecl
// Signature: int __cdecl crt_stdio_c_seek_within_buffer_FUN_005ffa70(int offset,FILE *file)

#include "nocturne.h"

int __cdecl crt_stdio_c_seek_within_buffer_FUN_005ffa70(int offset,FILE *file)

{
  if ((offset <= file->_cnt) && ((int)file->_link->__reserve_end - (int)file->_ptr <= offset)) {
    *(byte *)&file->_flag = (byte)file->_flag & 0xef;
    file->_ptr = file->_ptr + offset;
    file->_cnt = file->_cnt - offset;
    return 0;
  }
  return 1;
}
