// Name: crt_stdio.c_stream_flush_FUN_006060bb
// Address: 006060bb
// Address Range: [[006060bb, 006060fd]]
// Convention: __watcallStack
// Signature: FILE * __watcallStack crt_stdio_c_stream_flush_FUN_006060bb(FILE *stream)

#include "nocturne.h"

FILE * __watcallStack crt_stdio_c_stream_flush_FUN_006060bb(FILE *stream)

{
  int iVar1;
  
  if (*(int *)((int)&stream->_handle + *(int *)(stream->_ptr + 4)) == 0) {
    iVar1 = (**(code **)(*(int *)(*(int *)((int)&stream->_cnt + *(int *)(stream->_ptr + 4)) + 0x28)
                        + 0x20))();
    if (iVar1 == -1) {
      crt_stdio_c_reportStreamError_FUN_00606020
                ((FileEmbeddedData *)((int)&stream->_ptr + *(int *)(stream->_ptr + 4)),2);
      return stream;
    }
  }
  return stream;
}
