// Name: crt_stdio.c_fflush_FUN_00600e29
// Address: 00600e29
// Address Range: [[00600e29, 00600e63]]
// Convention: __cdecl
// Signature: void __cdecl crt_stdio_c_fflush_FUN_00600e29(_FILE *stream)

#include "nocturne.h"

void __cdecl _fflush(_FILE *stream)

{
  int iVar1;
  FileEmbeddedData *embedded_data;
  
  embedded_data = (FileEmbeddedData *)((int)&stream->_ptr + *(int *)(stream->_ptr + 4));
  if (embedded_data->stream != (_FILE *)0x0) {
    iVar1 = func_0x00608bcc(embedded_data->stream);
    if (iVar1 != 0) {
      return;
    }
    embedded_data = (FileEmbeddedData *)((int)&stream->_ptr + *(int *)(stream->_ptr + 4));
  }
  reportStreamError(embedded_data,2);
  return;
}
