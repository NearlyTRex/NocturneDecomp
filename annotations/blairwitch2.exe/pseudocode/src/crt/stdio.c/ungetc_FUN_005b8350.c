// Name: crt_stdio.c_ungetc_FUN_005b8350
// Address: 005b8350
// Address Range: [[005b8350, 005b846b]]
// Convention: __cdecl
// Signature: int __cdecl crt_stdio_c_ungetc_FUN_005b8350(int character,_FILE *stream)

#include "nocturne.h"

int __cdecl _ungetc(int character,_FILE *stream)

{
  char *pcVar1;
  
  if (character == -1) {
    return -1;
  }
  (*(code *)PTR_crt_unknown_c_FUN_005bce04_0061f2a8)(stream->_handle);
  pcVar1 = stream->_link->__get_base;
  if (pcVar1 != (char *)0x1) {
    if (pcVar1 != (char *)0x0) {
      (*(code *)PTR_crt_unknown_c_FUN_005bce04_0061f2ac)(stream->_handle);
      return -1;
    }
    stream->_link->__get_base = (char *)0x1;
  }
  if ((stream->_flag & 0x1000) != 0) {
    (*(code *)PTR_crt_unknown_c_FUN_005bce04_0061f2ac)(stream->_handle);
    return -1;
  }
  if ((stream->_flag & 1) == 0) {
LAB_005b83c5:
    (*(code *)PTR_crt_unknown_c_FUN_005bce04_0061f2ac)(stream->_handle);
    return -1;
  }
  if (stream->_link->__reserve_end == (char *)0x0) {
    FUN_005be1d0(stream);
  }
  if (stream->_cnt == 0) {
    stream->_cnt = 1;
    stream->_ptr = stream->_link->__reserve_end + (stream->_bufsize - 1);
    pcVar1 = stream->_ptr;
    *(byte *)&stream->_flag = (byte)stream->_flag | 4;
  }
  else {
    if (stream->_ptr == stream->_link->__reserve_end) goto LAB_005b83c5;
    pcVar1 = stream->_ptr;
    stream->_cnt = stream->_cnt + 1;
    stream->_ptr = pcVar1 + -1;
    if ((uint)(byte)pcVar1[-1] != character) {
      *(byte *)&stream->_flag = (byte)stream->_flag | 4;
    }
    pcVar1 = stream->_ptr;
  }
  *pcVar1 = (char)character;
  *(byte *)&stream->_flag = (byte)stream->_flag & 0xef;
  (*(code *)PTR_crt_unknown_c_FUN_005bce04_0061f2ac)(stream->_handle);
  return character & 0xff;
}
