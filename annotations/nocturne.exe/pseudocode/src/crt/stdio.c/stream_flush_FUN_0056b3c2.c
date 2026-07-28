// Name: crt_stdio.c_stream_flush_FUN_0056b3c2
// Address: 0056b3c2
// Address Range: [[0056b3c2, 0056b404]]
// Convention: __watcallStack
// Signature: _FILE * __watcallStack crt_stdio_c_stream_flush_FUN_0056b3c2(_FILE *stream)

#include "nocturne.h"

_FILE * __watcallStack stream_flush(_FILE *stream)

{
  int iVar1;
  
  if (*(int *)((int)&stream->_handle + *(int *)(stream->_ptr + 4)) == 0) {
    iVar1 = *(int *)((int)&stream->_cnt + *(int *)(stream->_ptr + 4));
    iVar1 = (**(code **)(*(int *)(iVar1 + 0x28) + 0x20))(iVar1);
    if (iVar1 == -1) {
      reportStreamError
                ((FileEmbeddedData *)((int)&stream->_ptr + *(int *)(stream->_ptr + 4)),2);
      return stream;
    }
  }
  return stream;
}
