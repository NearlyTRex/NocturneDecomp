// Name: crt_stdio.c_setvbuf_FUN_00601490
// Address: 00601490
// Address Range: [[00601490, 0060153d]]
// Convention: __cdecl
// Signature: int __cdecl crt_stdio_c_setvbuf_FUN_00601490 (_FILE *stream_ptr,char *buffer_ptr,int buffer_mode,SIZE_T buffer_size)

#include "nocturne.h"

int __cdecl
_setvbuf(_FILE *stream_ptr,char *buffer_ptr,int buffer_mode,SIZE_T buffer_size)

{
  byte *pbVar1;
  bool bVar2;
  
  if (0x7fffffff < buffer_size) {
    return -1;
  }
  if ((uint)buffer_mode < 0x200) {
    bVar2 = buffer_mode == 0x100;
  }
  else {
    if ((uint)buffer_mode < 0x201) goto LAB_006014da;
    bVar2 = buffer_mode == 0x400;
  }
  if (!bVar2) {
    return -1;
  }
LAB_006014da:
  if ((buffer_ptr != (char *)0x0) && (buffer_size == 0)) {
    return -1;
  }
  (*PTR_crt_sync_c_EnterCriticalSection_FUN_00602434_00684ee8)(stream_ptr->_handle);
  DetectDeviceAndSetBuffering(stream_ptr);
  if (buffer_size != 0) {
    stream_ptr->_bufsize = buffer_size;
  }
  stream_ptr->_link->__reserve_end = buffer_ptr;
  pbVar1 = (byte *)((int)&stream_ptr->_flag + 1);
  *pbVar1 = *pbVar1 & 0xf8;
  stream_ptr->_ptr = buffer_ptr;
  stream_ptr->_flag = stream_ptr->_flag | buffer_mode;
  if (buffer_ptr == (char *)0x0) {
    InitializeFileBuffer(stream_ptr);
  }
  (*PTR_crt_sync_c_ExitCriticalSection_FUN_00602434_00684eec)(stream_ptr->_handle);
  return 0;
}
