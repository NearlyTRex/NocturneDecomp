// Name: core_bird.cpp_CBird_getPathMap_FUN_004101e0
// Address: 004101e0
// Address Range: [[004101e0, 004101e9]]
// Convention: __cdecl
// Signature: CPathMap * __cdecl core_bird_cpp_CBird_getPathMap_FUN_004101e0(CBird *this_ptr)

#include "nocturne.h"

CPathMap * __cdecl core_bird_cpp_CBird_getPathMap_FUN_004101e0(CBird *this_ptr)

{
  return &this_ptr->path_map;
}
