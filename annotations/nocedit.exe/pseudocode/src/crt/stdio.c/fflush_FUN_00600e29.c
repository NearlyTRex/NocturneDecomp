// Name: crt_stdio.c_fflush_FUN_00600e29
// Address: 00600e29
// Address Range: [[00600e29, 00600e63]]
// Convention: __cdecl
// Signature: void __cdecl crt_stdio_c_fflush_FUN_00600e29(_FILE *stream)

#include "nocturne.h"

void __cdecl _fflush(_FILE *stream)

{
  filebuf *pfVar1;
  FileEmbeddedData *embedded_data;
  
  embedded_data = (FileEmbeddedData *)((int)&stream->_ptr + *(int *)(stream->_ptr + 4));
  if ((filebuf *)embedded_data->stream != (filebuf *)0x0) {
    pfVar1 = crt_fstream_cpp_filebuf_close_FUN_00608bcc((filebuf *)embedded_data->stream);
    if (pfVar1 != (filebuf *)0x0) {
      return;
    }
    embedded_data = (FileEmbeddedData *)((int)&stream->_ptr + *(int *)(stream->_ptr + 4));
  }
  reportStreamError(embedded_data,2);
  return;
}
