// Name: core_path.cpp_getPathMap_FUN_00513ea0
// Address: 00513ea0
// Address Range: [[00513ea0, 00513ead]]
// Convention: __cdecl
// Signature: CPathMap * __cdecl core_path_cpp_getPathMap_FUN_00513ea0(CLocation *location)

#include "nocturne.h"

CPathMap * __cdecl core_path_cpp_getPathMap_FUN_00513ea0(CLocation *location)

{
  CPathMap *pCVar1;
  
  pCVar1 = core_path_cpp_getOrCreatePathMap_FUN_00513d30(location);
  return pCVar1;
}
