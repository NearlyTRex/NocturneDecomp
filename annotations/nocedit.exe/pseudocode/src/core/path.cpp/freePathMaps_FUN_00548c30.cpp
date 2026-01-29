// Name: core_path.cpp_freePathMaps_FUN_00548c30
// Address: 00548c30
// Address Range: [[00548c30, 00548c44]]
// Convention: __cdecl
// Signature: void __cdecl core_path_cpp_freePathMaps_FUN_00548c30(CPathMap **array)

#include "nocturne.h"

void __cdecl core_path_cpp_freePathMaps_FUN_00548c30(CPathMap **array)

{
  __arrfini(array,0xc,&g_CPathMapTypeInfo);
  return;
}
