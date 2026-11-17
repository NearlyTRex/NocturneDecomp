// Name: core_dtrace.cpp_CDemonRaytrace_loadAndSyncWithGeoFile_FUN_00473b20
// Address: 00473b20
// Address Range: [[00473b20, 00473b5d]]
// Convention: __cdecl
// Signature: int __cdecl core_dtrace_cpp_CDemonRaytrace_loadAndSyncWithGeoFile_FUN_00473b20(CDemonRaytrace *this_ptr,char *filename)

#include "nocturne.h"

int __cdecl core_dtrace_cpp_CDemonRaytrace_loadAndSyncWithGeoFile_FUN_00473b20(CDemonRaytrace *this_ptr,char *filename)

{
  _FILE *file_handle;
  
  file_handle = engine_dosio_cpp_getFile_FUN_004659c0("data",filename,"rb");
  if (file_handle == (_FILE *)0x0) {
    return 0;
  }
  core_dtrace_cpp_CDemonRaytrace_loadBinary_FUN_00473940(this_ptr,file_handle);
  _fclose(file_handle);
  return 1;
}
