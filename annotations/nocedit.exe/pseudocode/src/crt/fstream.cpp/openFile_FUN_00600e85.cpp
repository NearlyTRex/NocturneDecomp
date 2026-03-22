// Name: crt_fstream.cpp_openFile_FUN_00600e85
// Address: 00600e85
// Address Range: [[00600e85, 00600ee3]]
// Convention: __cdecl
// Signature: void __cdecl crt_fstream_cpp_openFile_FUN_00600e85(void *stream_obj,char *filename,int open_mode,SIZE_T buffer_size)

#include "nocturne.h"

void __cdecl crt_fstream_cpp_openFile_FUN_00600e85(void *stream_obj,char *filename,int open_mode,SIZE_T buffer_size)

{
  FileEmbeddedData *embedded_data;
  int iVar1;
  
  embedded_data = (FileEmbeddedData *)(*(int *)(*(int *)stream_obj + 4) + (int)stream_obj);
  if (embedded_data->stream != (_FILE *)0x0) {
    iVar1 = func_0x00608c15(embedded_data->stream,filename,open_mode,buffer_size);
    if (iVar1 != 0) {
      crt_iostream_cpp_ios_clear_FUN_00600e64
                ((ios *)((int)stream_obj + *(int *)(*(int *)stream_obj + 4)),0);
      return;
    }
    embedded_data = (FileEmbeddedData *)((int)stream_obj + *(int *)(*(int *)stream_obj + 4));
  }
  reportStreamError(embedded_data,2);
  return;
}
