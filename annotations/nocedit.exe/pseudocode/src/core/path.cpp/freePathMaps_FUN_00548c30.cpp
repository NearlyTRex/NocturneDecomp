// Name: core_path.cpp_freePathMaps_FUN_00548c30
// Address: 00548c30
// Address Range: [[00548c30, 00548c44]]
// Convention: __cdecl
// Signature: CPathMap * __cdecl core_path_cpp_freePathMaps_FUN_00548c30(CPathMap *objs)

#include "nocturne.h"

CPathMap * __cdecl core_path_cpp_freePathMaps_FUN_00548c30(CPathMap *objs)

{
  CPathMap *pCVar1;
  
  pCVar1 = __arrfini(objs,0xc,&g_CPathMapTypeInfo);
  return pCVar1;
}
