// Name: engine_drender.cpp_CDemonRenderer_getAlphaMask_FUN_0046bc80
// Address: 0046bc80
// Address Range: [[0046bc80, 0046bc8a]]
// Convention: __cdecl
// Signature: int __cdecl engine_drender_cpp_CDemonRenderer_getAlphaMask_FUN_0046bc80(CDemonRenderer *this_ptr)

#include "nocturne.h"

int __cdecl engine_drender_cpp_CDemonRenderer_getAlphaMask_FUN_0046bc80(CDemonRenderer *this_ptr)

{
  return this_ptr->alpha_mask >> 0x18;
}
