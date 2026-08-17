// Name: crt_stdio.c_ungetc_FUN_00564740
// Address: 00564740
// Address Range: [[00564740, 0056485b]]
// Convention: __cdecl
// Signature: int __cdecl crt_stdio_c_ungetc_FUN_00564740(int character,_FILE *stream)

#include "nocturne.h"

int __cdecl _ungetc(int character,_FILE *stream)

{
  char *pcVar1;
  char *unaff_EBP;
  SIZE_T unaff_ESI;
  int unaff_EDI;
  
  if (character == -1) {
    return -1;
  }
  (*(code *)PTR_crt_sync_c_CriticalSectionStub_FUN_005671e4_005c1ac0)(stream->_handle);
  pcVar1 = stream->_link->__get_base;
  if (pcVar1 != (char *)0x1) {
    if (pcVar1 != (char *)0x0) {
      (*(code *)PTR_crt_sync_c_CriticalSectionStub_FUN_005671e4_005c1ac4)(stream->_handle);
      return -1;
    }
    stream->_link->__get_base = (char *)0x1;
  }
  if ((stream->_flag & 0x1000) != 0) {
    (*(code *)PTR_crt_sync_c_CriticalSectionStub_FUN_005671e4_005c1ac4)(stream->_handle);
    return -1;
  }
  if ((stream->_flag & 1) == 0) {
LAB_005647b5:
    (*(code *)PTR_crt_sync_c_CriticalSectionStub_FUN_005671e4_005c1ac4)(stream->_handle);
    return -1;
  }
  if (stream->_link->__reserve_end == (char *)0x0) {
    _setvbuf(stream,unaff_EBP,unaff_EDI,unaff_ESI);
  }
  if (stream->_cnt == 0) {
    stream->_cnt = 1;
    stream->_ptr = stream->_link->__reserve_end + (stream->_bufsize - 1);
    pcVar1 = stream->_ptr;
    *(byte *)&stream->_flag = (byte)stream->_flag | 4;
  }
  else {
    if (stream->_ptr == stream->_link->__reserve_end) goto LAB_005647b5;
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
  (*(code *)PTR_crt_sync_c_CriticalSectionStub_FUN_005671e4_005c1ac4)(stream->_handle);
  return character & 0xff;
}
