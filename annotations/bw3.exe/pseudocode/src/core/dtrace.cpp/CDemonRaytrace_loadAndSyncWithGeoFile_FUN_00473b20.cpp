// Name: core_dtrace.cpp_CDemonRaytrace_loadAndSyncWithGeoFile_FUN_00473b20
// Address: 00473b20
// Address Range: [[00473b20, 00473b5d]]
// Convention: __cdecl
// Signature: int __cdecl core_dtrace_cpp_CDemonRaytrace_loadAndSyncWithGeoFile_FUN_00473b20(CDemonRaytrace *this_ptr,char *filename)

#include "nocturne.h"

int __cdecl core_dtrace_cpp_CDemonRaytrace_loadAndSyncWithGeoFile_FUN_00473b20(CDemonRaytrace *this_ptr,char *filename)

{
  _FILE *p_Var1;
  
  p_Var1 = engine_dosio_cpp_FUN_004659c0(&DAT_005bca04,filename,&DAT_005bca01);
  if (p_Var1 == (_FILE *)0x0) {
    return 0;
  }
  core_dtrace_cpp_CDemonRaytrace_loadBinary_FUN_00473940(this_ptr,p_Var1);
  _fclose(p_Var1);
  return 1;
}
