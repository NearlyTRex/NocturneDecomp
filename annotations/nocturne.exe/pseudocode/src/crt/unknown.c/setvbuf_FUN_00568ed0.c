// Name: crt_unknown.c_setvbuf_FUN_00568ed0
// Address: 00568ed0
// Address Range: [[00568ed0, 00568f60]]
// Convention: __cdecl
// Signature: int __cdecl crt_unknown_c_setvbuf_FUN_00568ed0(_FILE *stream_ptr,char *buffer_ptr,int buffer_mode,SIZE_T buffer_size)

#include "nocturne.h"

int __cdecl _setvbuf(_FILE *stream_ptr,char *buffer_ptr,int buffer_mode,SIZE_T buffer_size)

{
  streambuf *psVar1;
  char *pcVar2;
  byte bVar3;
  
  DetectDeviceAndSetBuffering(stream_ptr);
  if (stream_ptr->_bufsize == 0) {
    if ((stream_ptr->_flag & 0x200) == 0) {
      if ((stream_ptr->_flag & 0x400) == 0) {
        stream_ptr->_bufsize = 0x1000;
      }
      else {
        stream_ptr->_bufsize = 1;
      }
    }
    else {
      stream_ptr->_bufsize = 0x86;
    }
  }
  pcVar2 = (char *)malloc(stream_ptr->_bufsize);
  stream_ptr->_link->__reserve_end = pcVar2;
  if (stream_ptr->_link->__reserve_end == (char *)0x0) {
    bVar3 = *(byte *)((int)&stream_ptr->_flag + 1) & 0xf8;
    *(byte *)((int)&stream_ptr->_flag + 1) = bVar3;
    psVar1 = stream_ptr->_link;
    *(byte *)((int)&stream_ptr->_flag + 1) = bVar3 | 4;
    psVar1->__reserve_end = (char *)&stream_ptr->_ungotten;
    stream_ptr->_bufsize = 1;
  }
  else {
    *(byte *)&stream_ptr->_flag = (byte)stream_ptr->_flag | 8;
  }
  pcVar2 = stream_ptr->_link->__reserve_end;
  stream_ptr->_cnt = 0;
  stream_ptr->_ptr = pcVar2;
  return (int)pcVar2;
}
