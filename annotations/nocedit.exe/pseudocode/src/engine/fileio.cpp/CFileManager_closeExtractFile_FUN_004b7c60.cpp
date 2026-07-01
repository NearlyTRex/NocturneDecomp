// Name: engine_fileio.cpp_CFileManager_closeExtractFile_FUN_004b7c60
// Address: 004b7c60
// Address Range: [[004b7c60, 004b7c87]]
// Convention: __cdecl
// Signature: void __cdecl engine_fileio_cpp_CFileManager_closeExtractFile_FUN_004b7c60(CFileManager *this_ptr)

#include "nocturne.h"

void __cdecl engine_fileio_cpp_CFileManager_closeExtractFile_FUN_004b7c60(CFileManager *this_ptr)

{
  if (this_ptr->file_ptr == (_FILE *)0x0) {
    return;
  }
  shape_memdbg_cpp_closeFile_FUN_0050f9b0(this_ptr->file_ptr,"..\\engine\\fileio.cpp",2715);
  this_ptr->file_ptr = (_FILE *)0x0;
  return;
}
