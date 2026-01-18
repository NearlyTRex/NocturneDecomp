// Name: engine_dosio.c_reopenFileStream_FUN_00481b50
// Address: 00481b50
// Address Range: [[00481b50, 00481c24]]
// Convention: __cdecl
// Signature: void engine_dosio.c_reopenFileStream_FUN_00481b50(char * directory_path, char * filename, byte file_mode_flags, ifstream * file_stream)

#include "nocturne.h"

void __cdecl
engine_dosio_c_reopenFileStream_FUN_00481b50
          (char *directory_path,char *filename,byte file_mode_flags,ifstream *file_stream)

{
  int iVar1;
  undefined3 in_stack_0000000d;
  SFoundFileInfo local_220;
  
  crt_stdio_c_fflush_FUN_00600e29((FILE *)file_stream);
  crt_stdio_c_clear_and_preserve_state_FUN_00600e64
            ((FileEmbeddedData *)
             ((file_stream->_fstreambase_core)._filebuf.__unbuffered_get_area +
             *(int *)((int)(file_stream->_fstreambase_core).layout_info + 4) + -0x38),0);
  engine_dosio_c_getRelativeFilePath_FUN_004816c0(local_220.found_path,directory_path,filename);
  if ((file_mode_flags & 0x52) == 0) {
    iVar1 = engine_dosio_c_findFile_FUN_00481760(&local_220);
    if (iVar1 != 0) {
      crt_fstream_cpp_openFile_FUN_00600e85
                (file_stream,local_220.target_path,_file_mode_flags,g_DefaultStreamBufferSize);
      if (local_220.file_offset != 0) {
        crt_unknown_c_FUN_00600ee4();
        return;
      }
    }
  }
  else {
    if (directory_path != (char *)0x0) {
      crt_file_c_create_directory_FUN_00600e10(directory_path);
    }
    crt_fstream_cpp_openFile_FUN_00600e85
              (file_stream,local_220.found_path,_file_mode_flags,g_DefaultStreamBufferSize);
  }
  return;
}
