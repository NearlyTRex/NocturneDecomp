// Name: engine_dosio.cpp_reopenFileStream_FUN_00481b50
// Address: 00481b50
// MANUAL RECONSTRUCTION
// Address Range: [[00481b50, 00481c24]]
// Convention: __cdecl
// Signature: void __cdecl engine_dosio_cpp_reopenFileStream_FUN_00481b50(char *directory_path,char *filename,uint mode_flags,ifstream *file_stream)

#include "nocturne.h"
#include "watcom/stream_compat.h"

void __cdecl engine_dosio_cpp_reopenFileStream_FUN_00481b50(char *directory_path,char *filename,uint mode_flags,ifstream *file_stream)

{
  SFoundFileInfo local_220;
  std::ifstream &stream = std_ifstream_from(file_stream);

  _fflush((_FILE *)file_stream);
  stream.clear();
  engine_dosio_cpp_getRelativeFilePath_FUN_004816c0(local_220.found_path,directory_path,filename);
  if ((mode_flags & 0x52) == 0) {
    if (engine_dosio_cpp_findFile_FUN_00481760(&local_220) != 0) {
      crt_fstream_cpp_openFile_FUN_00600e85
                (file_stream,local_220.target_path,mode_flags,g_DefaultStreamBufferSize);
      if (local_220.file_offset != 0) {
        stream.seekg(local_220.file_offset);
      }
    }
  }
  else {
    if (directory_path != (char *)0x0) {
      _mkdir(directory_path);
    }
    crt_fstream_cpp_openFile_FUN_00600e85
              (file_stream,local_220.found_path,mode_flags,g_DefaultStreamBufferSize);
  }
  return;
}
