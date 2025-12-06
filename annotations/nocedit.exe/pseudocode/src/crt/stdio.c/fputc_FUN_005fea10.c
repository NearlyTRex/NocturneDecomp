// Name: crt_stdio.c_fputc_FUN_005fea10
// Address: 005fea10
// Address Range: [[005fea10, 005feb2b]]
// Convention: __watcallStack
// Signature: int crt_stdio.c_fputc_FUN_005fea10(int character, FILE * stream)

#include "nocturne.h"

int __watcallStack crt_stdio_c_fputc_FUN_005fea10(int character,FILE *stream)

{
  char *pcVar1;
  char cStack00000014;
  byte in_stack_00000020;
  
  if (character == -1) {
    return -1;
  }
  (*PTR_crt_sync_c_EnterCriticalSection_FUN_00602434_00684ee8)(stream->_handle);
  pcVar1 = stream->_link->__get_base;
  if (pcVar1 != &DAT_00000001) {
    if (pcVar1 != (char *)0x0) {
      (*PTR_crt_sync_c_ExitCriticalSection_FUN_00602434_00684eec)(stream->_handle);
      return -1;
    }
    stream->_link->__get_base = &DAT_00000001;
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
    crt_stdio_c_InitializeFileBuffer_FUN_006027e0(stream);
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
    if ((byte)pcVar1[-1] != _cStack00000014) {
      *(byte *)&stream->_flag = (byte)stream->_flag | 4;
    }
    pcVar1 = stream->_ptr;
  }
  *pcVar1 = cStack00000014;
  *(byte *)&stream->_flag = (byte)stream->_flag & 0xef;
  (*PTR_crt_sync_c_ExitCriticalSection_FUN_00602434_00684eec)(stream->_handle);
  return (uint)in_stack_00000020;
}
