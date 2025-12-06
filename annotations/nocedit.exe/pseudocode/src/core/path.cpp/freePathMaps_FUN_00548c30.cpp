// Name: core_path.cpp_freePathMaps_FUN_00548c30
// Address: 00548c30
// Address Range: [[00548c30, 00548c44]]
// Convention: __cdecl
// Signature: void core_path.cpp_freePathMaps_FUN_00548c30(CPathMap * * array)

#include "nocturne.h"

void __cdecl core_path_cpp_freePathMaps_FUN_00548c30(CPathMap **array)

{
  crt_memory_c_freeTypeArray_FUN_005feee9(array,0xc,&g_CPathMapTypeInfo);
  return;
}
