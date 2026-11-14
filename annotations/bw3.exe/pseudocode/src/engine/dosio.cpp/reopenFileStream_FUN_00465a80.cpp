// Name: engine_dosio.cpp_reopenFileStream_FUN_00465a80
// Address: 00465a80
// Address Range: [[00465a80, 00465b54]]
// Convention: __cdecl
// Signature: void __cdecl engine_dosio_cpp_reopenFileStream_FUN_00465a80(char *directory_path,char *filename,uint mode_flags,ifstream *file_stream)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl engine_dosio_cpp_reopenFileStream_FUN_00465a80(char *directory_path,char *filename,uint mode_flags,ifstream *file_stream)

{
  int iVar1;
  int unaff_EBX;
  uint in_stack_00000014;
  uint in_stack_00000018;
  char acStack_214 [4];
  char acStack_210 [4];
  char acStack_114 [264];
  
  _fflush((_FILE *)file_stream);
  ios_clear
            ((ios *)((file_stream->_fstreambase_core)._filebuf.__unbuffered_get_area +
                    *(int *)((int)(file_stream->_fstreambase_core).layout_info + 4) + -0x38),0);
  engine_dosio_cpp_FUN_00465660(acStack_214,directory_path,in_stack_00000014);
  if ((in_stack_00000018 & 0x52) == 0) {
    iVar1 = engine_dosio_cpp_findFile_FUN_004656d0((SFoundFileInfo *)acStack_214);
    if (iVar1 != 0) {
      openFile(file_stream,acStack_114,in_stack_00000018,_DAT_005e8800);
      if (unaff_EBX != 0) {
        builtin_strncpy(acStack_210,"H[F",4);
        istream_seekg(&file_stream->_istream_core,unaff_EBX);
        return;
      }
    }
  }
  else {
    if (directory_path != (char *)0x0) {
      _mkdir(directory_path);
    }
    openFile(file_stream,acStack_214,in_stack_00000018,_DAT_005e8800);
  }
  return;
}
