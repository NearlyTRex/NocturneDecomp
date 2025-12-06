// Name: engine_drender.cpp_CDemonRenderer_getAlphaMask_FUN_0048ce00
// Address: 0048ce00
// Address Range: [[0048ce00, 0048ce0a]]
// Convention: __cdecl
// Signature: int engine_drender.cpp_CDemonRenderer_getAlphaMask_FUN_0048ce00(CDemonRenderer * this_ptr)

#include "nocturne.h"

int __cdecl engine_drender_cpp_CDemonRenderer_getAlphaMask_FUN_0048ce00(CDemonRenderer *this_ptr)

{
  return this_ptr->alpha_mask >> 0x18;
}
