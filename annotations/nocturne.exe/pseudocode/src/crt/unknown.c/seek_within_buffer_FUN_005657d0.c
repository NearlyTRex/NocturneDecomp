// Name: crt_unknown.c_seek_within_buffer_FUN_005657d0
// Address: 005657d0
// Address Range: [[005657d0, 00565813]]
// Convention: __cdecl
// Signature: int __cdecl crt_unknown_c_seek_within_buffer_FUN_005657d0(int offset,_FILE *file)

#include "nocturne.h"

int __cdecl seek_within_buffer(int offset,_FILE *file)

{
  if ((offset <= file->_cnt) && ((int)file->_link->__reserve_end - (int)file->_ptr <= offset)) {
    *(byte *)&file->_flag = (byte)file->_flag & 0xef;
    file->_ptr = file->_ptr + offset;
    file->_cnt = file->_cnt - offset;
    return 0;
  }
  return 1;
}
