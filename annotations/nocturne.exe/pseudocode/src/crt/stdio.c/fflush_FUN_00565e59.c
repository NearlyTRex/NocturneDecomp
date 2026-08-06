// Name: crt_stdio.c_fflush_FUN_00565e59
// Address: 00565e59
// Address Range: [[00565e59, 00565e93]]
// Convention: __cdecl
// Signature: int __cdecl crt_stdio_c_fflush_FUN_00565e59(_FILE *stream)

#include "nocturne.h"

int __cdecl _fflush(_FILE *stream)

{
  int iVar1;
  int extraout_EAX;
  FileEmbeddedData *embedded_data;
  
  embedded_data = (FileEmbeddedData *)((int)&stream->_ptr + *(int *)(stream->_ptr + 4));
  if (embedded_data->stream != (_FILE *)0x0) {
    iVar1 = FUN_0056cd52(embedded_data->stream);
    if (iVar1 != 0) {
      return iVar1;
    }
    embedded_data = (FileEmbeddedData *)((int)&stream->_ptr + *(int *)(stream->_ptr + 4));
  }
  reportStreamError(embedded_data,2);
  return extraout_EAX;
}
