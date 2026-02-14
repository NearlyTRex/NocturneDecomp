// Name: crt_stdio.c_fputc_FUN_005fea10
// Address: 005fea10
// Address Range: [[005fea10, 005feb2b]]
// Convention: __cdecl
// Signature: int __cdecl crt_stdio_c_fputc_FUN_005fea10(int character,_FILE *stream)

#include "nocturne.h"

int __cdecl _fputc(int character,_FILE *stream)

{
  char *pcVar1;
  
  if (character == -1) {
    return -1;
  }
  (*PTR_crt_sync_c_EnterCriticalSection_FUN_00602434_00684ee8)(stream->_handle);
  pcVar1 = stream->_link->__get_base;
  if (pcVar1 != (char *)0x1) {
    if (pcVar1 != (char *)0x0) {
      (*PTR_crt_sync_c_ExitCriticalSection_FUN_00602434_00684eec)(stream->_handle);
      return -1;
    }
    stream->_link->__get_base = (char *)0x1;
  }
  if ((stream->_flag & 0x1000) != 0) {
    (*PTR_crt_sync_c_ExitCriticalSection_FUN_00602434_00684eec)(stream->_handle);
    return -1;
  }
  if ((stream->_flag & 1) == 0) {
LAB_005fea85:
    (*PTR_crt_sync_c_ExitCriticalSection_FUN_00602434_00684eec)(stream->_handle);
    return -1;
  }
  if (stream->_link->__reserve_end == (char *)0x0) {
    InitializeFileBuffer(stream);
  }
  if (stream->_cnt == 0) {
    stream->_cnt = 1;
    stream->_ptr = stream->_link->__reserve_end + (stream->_bufsize - 1);
    pcVar1 = stream->_ptr;
    *(byte *)&stream->_flag = (byte)stream->_flag | 4;
  }
  else {
    if (stream->_ptr == stream->_link->__reserve_end) goto LAB_005fea85;
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
  (*PTR_crt_sync_c_ExitCriticalSection_FUN_00602434_00684eec)(stream->_handle);
  return character & 0xff;
}
