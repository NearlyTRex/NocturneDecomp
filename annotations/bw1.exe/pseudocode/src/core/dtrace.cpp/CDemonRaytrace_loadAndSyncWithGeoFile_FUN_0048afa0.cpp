// Name: core_dtrace.cpp_CDemonRaytrace_loadAndSyncWithGeoFile_FUN_0048afa0
// Address: 0048afa0
// Address Range: [[0048afa0, 0048afdd]]
// Convention: __cdecl
// Signature: int __cdecl core_dtrace_cpp_CDemonRaytrace_loadAndSyncWithGeoFile_FUN_0048afa0(CDemonRaytrace *this_ptr,char *filename)

#include "nocturne.h"

int __cdecl core_dtrace_cpp_CDemonRaytrace_loadAndSyncWithGeoFile_FUN_0048afa0(CDemonRaytrace *this_ptr,char *filename)

{
  _FILE *p_Var1;
  
  p_Var1 = engine_dosio_cpp_FUN_00479180(&DAT_005db947,filename,&DAT_005db944);
  if (p_Var1 == (_FILE *)0x0) {
    return 0;
  }
  core_dtrace_cpp_FUN_0048adc0(this_ptr,p_Var1);
  _fclose(p_Var1);
  return 1;
}
