// Name: core_hero.cpp_CHero_getPathMap_FUN_004b4c00
// Address: 004b4c00
// Address Range: [[004b4c00, 004b4c09]]
// Convention: __cdecl
// Signature: CPathMap * __cdecl core_hero_cpp_CHero_getPathMap_FUN_004b4c00(CHero *this_ptr)

#include "nocturne.h"

CPathMap * __cdecl core_hero_cpp_CHero_getPathMap_FUN_004b4c00(CHero *this_ptr)

{
  return &this_ptr->path_map;
}
