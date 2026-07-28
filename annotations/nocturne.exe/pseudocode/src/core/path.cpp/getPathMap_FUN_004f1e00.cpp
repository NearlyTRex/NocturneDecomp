// Name: core_path.cpp_getPathMap_FUN_004f1e00
// Address: 004f1e00
// Address Range: [[004f1e00, 004f1e0d]]
// Convention: __cdecl
// Signature: CPathMap * __cdecl core_path_cpp_getPathMap_FUN_004f1e00(CLocation *location)

#include "nocturne.h"

CPathMap * __cdecl core_path_cpp_getPathMap_FUN_004f1e00(CLocation *location)

{
  CPathMap *pCVar1;
  
  pCVar1 = core_path_cpp_getOrCreatePathMap_FUN_004f1c90(location);
  return pCVar1;
}
