// Name: core_path.cpp_getPathMap_FUN_00548500
// Address: 00548500
// Address Range: [[00548500, 0054850d]]
// Convention: __cdecl
// Signature: CPathMap * __cdecl core_path_cpp_getPathMap_FUN_00548500(CLocation *location)

#include "nocturne.h"

CPathMap * __cdecl core_path_cpp_getPathMap_FUN_00548500(CLocation *location)

{
  CPathMap *pCVar1;
  
  pCVar1 = core_path_cpp_getOrCreatePathMap_FUN_00548390(location);
  return pCVar1;
}
