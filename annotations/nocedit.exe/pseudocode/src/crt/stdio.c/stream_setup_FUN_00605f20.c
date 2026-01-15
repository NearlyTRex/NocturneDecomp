// Name: crt_stdio.c_stream_setup_FUN_00605f20
// Address: 00605f20
// Address Range: [[00605f20, 00605fac]]
// Convention: __watcallStack
// Signature: int crt_stdio.c_stream_setup_FUN_00605f20(FILE * stream, int operation_type)

#include "nocturne.h"

int __watcallStack crt_stdio_c_stream_setup_FUN_00605f20(FILE *stream,int operation_type)

{
  FILE *stream_00;
  FileEmbeddedData *embedded_data;
  char *unaff_EBX;
  int unaff_retaddr;
  
  if (*(int *)((int)&stream->_handle + *(int *)(stream->_ptr + 4)) == 0) {
    stream->_cnt = 0;
    stream_00 = *(FILE **)((int)&stream->_link + *(int *)(stream->_ptr + 4));
    if (stream_00 != (FILE *)0x0) {
      crt_stdio_c_stream_flush_FUN_006060bb(stream_00);
    }
    if ((operation_type == 0) &&
       ((*(uint *)((int)&stream->_flag + *(int *)(stream->_ptr + 4)) & 1) != 0)) {
      crt_string_c_mbstrncpy_core_FUN_0060b670((char *)stream,unaff_EBX,unaff_retaddr);
      embedded_data = (FileEmbeddedData *)((int)&stream->_ptr + *(int *)(stream->_ptr + 4));
      if ((embedded_data->state_field & 4) != 0) {
        crt_stdio_c_reportStreamError_FUN_00606020(embedded_data,2);
      }
    }
    return (uint)(*(int *)((int)&stream->_handle + *(int *)(stream->_ptr + 4)) == 0);
  }
  crt_stdio_c_reportStreamError_FUN_00606020
            ((FileEmbeddedData *)((int)&stream->_ptr + *(int *)(stream->_ptr + 4)),2);
  return 0;
}
