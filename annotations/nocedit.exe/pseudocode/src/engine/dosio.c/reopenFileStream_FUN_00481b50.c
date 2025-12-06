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
  BADSPACEBASE *in_ESP;
  int unaff_EBP;
  byte in_stack_00000018;
  int in_stack_0000001c;
  char acStack_210 [256];
  char acStack_110 [260];
  
  crt_stdio_c_fflush_FUN_00600e29((FILE *)file_stream);
  crt_stdio_c_clear_and_preserve_state_FUN_00600e64
            ((FileEmbeddedData *)
             ((file_stream->fstreambase_core).filebuf.__unbuffered_get_area +
             *(int *)((int)(file_stream->fstreambase_core).layout_info + 4) + -0x38),0);
  engine_dosio_c_getRelativeFilePath_FUN_004816c0
            (&stack0xfffffde8,directory_path,(char *)file_stream);
  if ((in_stack_00000018 & 0x52) == 0) {
    iVar1 = engine_dosio_c_findFile_FUN_00481760((SFoundFileInfo *)&stack0xfffffdec);
    if (iVar1 != 0) {
      crt_fstream_cpp_openFile_FUN_00600e85
                (file_stream,acStack_110,in_stack_0000001c,g_DefaultStreamBufferSize);
      if (unaff_EBP != 0) {
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
              (file_stream,acStack_210,in_stack_0000001c,g_DefaultStreamBufferSize);
  }
  return;
}
