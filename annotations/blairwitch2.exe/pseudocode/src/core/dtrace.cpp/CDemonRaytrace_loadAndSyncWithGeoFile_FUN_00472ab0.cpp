// Name: core_dtrace.cpp_CDemonRaytrace_loadAndSyncWithGeoFile_FUN_00472ab0
// Address: 00472ab0
// Address Range: [[00472ab0, 00472aed]]
// Convention: __cdecl
// Signature: int __cdecl core_dtrace_cpp_CDemonRaytrace_loadAndSyncWithGeoFile_FUN_00472ab0(CDemonRaytrace *this_ptr,char *filename)

#include "nocturne.h"

int __cdecl core_dtrace_cpp_CDemonRaytrace_loadAndSyncWithGeoFile_FUN_00472ab0(CDemonRaytrace *this_ptr,char *filename)

{
  _FILE *p_Var1;
  
  p_Var1 = engine_dosio_cpp_FUN_00460c70(&DAT_005d1b4e,filename,&DAT_005d1b4b);
  if (p_Var1 == (_FILE *)0x0) {
    return 0;
  }
  core_dtrace_cpp_CDemonRaytrace_loadBinary_FUN_004728d0(this_ptr,p_Var1);
  _fclose(p_Var1);
  return 1;
}
