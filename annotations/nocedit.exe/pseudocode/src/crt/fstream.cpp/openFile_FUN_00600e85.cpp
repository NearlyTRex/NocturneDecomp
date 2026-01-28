// Name: crt_fstream.cpp_openFile_FUN_00600e85
// Address: 00600e85
// Address Range: [[00600e85, 00600ee3]]
// Convention: __cdecl
// Signature: void __cdecl crt_fstream_cpp_openFile_FUN_00600e85 (ifstream *stream_obj,char *filename,int open_mode,SIZE_T buffer_size)

#include "nocturne.h"

void __cdecl
crt_fstream_cpp_openFile_FUN_00600e85
          (ifstream *stream_obj,char *filename,int open_mode,SIZE_T buffer_size)

{
  int iVar1;
  FileEmbeddedData *embedded_data;
  
  embedded_data =
       (FileEmbeddedData *)
       ((stream_obj->_fstreambase_core)._filebuf.__unbuffered_get_area +
       *(int *)((int)(stream_obj->_fstreambase_core).layout_info + 4) + -0x38);
  if ((filebuf *)embedded_data->stream != (filebuf *)0x0) {
    iVar1 = crt_fstream_cpp_filebuf_open_FUN_00608c15
                      ((filebuf *)embedded_data->stream,filename,open_mode,buffer_size);
    if (iVar1 != 0) {
      crt_stdio_c_clear_and_preserve_state_FUN_00600e64
                ((FileEmbeddedData *)
                 ((stream_obj->_fstreambase_core)._filebuf.__unbuffered_get_area +
                 *(int *)((int)(stream_obj->_fstreambase_core).layout_info + 4) + -0x38),0);
      return;
    }
    embedded_data =
         (FileEmbeddedData *)
         ((stream_obj->_fstreambase_core)._filebuf.__unbuffered_get_area +
         *(int *)((int)(stream_obj->_fstreambase_core).layout_info + 4) + -0x38);
  }
  crt_stdio_c_reportStreamError_FUN_00606020(embedded_data,2);
  return;
}
