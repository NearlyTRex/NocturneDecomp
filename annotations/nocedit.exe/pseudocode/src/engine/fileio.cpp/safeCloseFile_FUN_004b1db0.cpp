// Name: engine_fileio.cpp_safeCloseFile_FUN_004b1db0
// Address: 004b1db0
// Address Range: [[004b1db0, 004b1dd7]]
// Convention: __cdecl
// Signature: void __cdecl engine_fileio_cpp_safeCloseFile_FUN_004b1db0(_FILE **file_ptr)

#include "nocturne.h"

void __cdecl engine_fileio_cpp_safeCloseFile_FUN_004b1db0(_FILE **file_ptr)

{
  if (*file_ptr == (_FILE *)0x0) {
    return;
  }
  shape_memdbg_cpp_closeFile_FUN_0050f9b0(*file_ptr,"..\\engine\\fileio.cpp",0xc4);
  *file_ptr = (_FILE *)0x0;
  return;
}
