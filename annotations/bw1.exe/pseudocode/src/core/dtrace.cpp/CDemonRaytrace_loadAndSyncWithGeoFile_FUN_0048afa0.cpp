// Name: core_dtrace.cpp_CDemonRaytrace_loadAndSyncWithGeoFile_FUN_0048afa0
// Address: 0048afa0
// Address Range: [[0048afa0, 0048afdd]]
// Convention: __cdecl
// Signature: int __cdecl core_dtrace_cpp_CDemonRaytrace_loadAndSyncWithGeoFile_FUN_0048afa0(CDemonRaytrace *this_ptr,char *filename)

#include "nocturne.h"

int __cdecl core_dtrace_cpp_CDemonRaytrace_loadAndSyncWithGeoFile_FUN_0048afa0(CDemonRaytrace *this_ptr,char *filename)

{
  _FILE *file_handle;
  
  file_handle = engine_dosio_cpp_getFile_FUN_00479180("data",filename,"rb");
  if (file_handle == (_FILE *)0x0) {
    return 0;
  }
  core_dtrace_cpp_CDemonRaytrace_loadBinary_FUN_0048adc0(this_ptr,file_handle);
  _fclose(file_handle);
  return 1;
}
