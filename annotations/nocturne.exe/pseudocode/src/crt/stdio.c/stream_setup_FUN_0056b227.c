// Name: crt_stdio.c_stream_setup_FUN_0056b227
// Address: 0056b227
// Address Range: [[0056b227, 0056b2b3]]
// Convention: __watcallStack
// Signature: int __watcallStack crt_stdio_c_stream_setup_FUN_0056b227(_FILE *stream,int operation_type)

#include "nocturne.h"

int __watcallStack stream_setup(_FILE *stream,int operation_type)

{
  _FILE *stream_00;
  FileEmbeddedData *embedded_data;
  
  if (*(int *)((int)&stream->_handle + *(int *)(stream->_ptr + 4)) == 0) {
    stream->_cnt = 0;
    stream_00 = *(_FILE **)((int)&stream->_link + *(int *)(stream->_ptr + 4));
    if (stream_00 != (_FILE *)0x0) {
      stream_flush(stream_00);
    }
    if ((operation_type == 0) &&
       ((*(uint *)((int)&stream->_flag + *(int *)(stream->_ptr + 4)) & 1) != 0)) {
      mbstrncpy_core(stream);
      embedded_data = (FileEmbeddedData *)((int)&stream->_ptr + *(int *)(stream->_ptr + 4));
      if ((embedded_data->state_field & 4) != 0) {
        reportStreamError(embedded_data,2);
      }
    }
    return (uint)(*(int *)((int)&stream->_handle + *(int *)(stream->_ptr + 4)) == 0);
  }
  reportStreamError
            ((FileEmbeddedData *)((int)&stream->_ptr + *(int *)(stream->_ptr + 4)),2);
  return 0;
}
