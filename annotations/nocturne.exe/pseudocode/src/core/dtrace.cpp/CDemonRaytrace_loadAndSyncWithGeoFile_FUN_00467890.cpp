// Name: core_dtrace.cpp_CDemonRaytrace_loadAndSyncWithGeoFile_FUN_00467890
// Address: 00467890
// Address Range: [[00467890, 004678cd]]
// Convention: __cdecl
// Signature: int __cdecl core_dtrace_cpp_CDemonRaytrace_loadAndSyncWithGeoFile_FUN_00467890(CDemonRaytrace *this_ptr,char *filename)

#include "nocturne.h"

int __cdecl core_dtrace_cpp_CDemonRaytrace_loadAndSyncWithGeoFile_FUN_00467890(CDemonRaytrace *this_ptr,char *filename)

{
  _FILE *file_handle;
  
  file_handle = engine_dosio_cpp_getFile_FUN_00456a60("data",filename,"rb");
  if (file_handle == (_FILE *)0x0) {
    return 0;
  }
  core_dtrace_cpp_CDemonRaytrace_loadBinary_FUN_004676c0(this_ptr,file_handle);
  _fclose(file_handle);
  return 1;
}
