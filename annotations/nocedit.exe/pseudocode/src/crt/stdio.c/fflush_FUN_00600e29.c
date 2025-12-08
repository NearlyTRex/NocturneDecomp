// Name: crt_stdio.c_fflush_FUN_00600e29
// Address: 00600e29
// Address Range: [[00600e29, 00600e63]]
// Convention: __cdecl
// Signature: int crt_stdio.c_fflush_FUN_00600e29(FILE * stream)

#include "nocturne.h"

int __cdecl crt_stdio_c_fflush_FUN_00600e29(FILE *stream)

{
  filebuf *pfVar1;
  int extraout_EAX;
  FileEmbeddedData *embedded_data;
  
  embedded_data = (FileEmbeddedData *)((int)&stream->_ptr + *(int *)(stream->_ptr + 4));
  if ((filebuf *)embedded_data->stream != (filebuf *)0x0) {
    pfVar1 = crt_fstream_cpp_filebuf_close_FUN_00608bcc((filebuf *)embedded_data->stream);
    if (pfVar1 != (filebuf *)0x0) {
      return (int)pfVar1;
    }
    embedded_data = (FileEmbeddedData *)((int)&stream->_ptr + *(int *)(stream->_ptr + 4));
  }
  crt_stdio_c_reportStreamError_FUN_00606020(embedded_data,2);
  return extraout_EAX;
}
