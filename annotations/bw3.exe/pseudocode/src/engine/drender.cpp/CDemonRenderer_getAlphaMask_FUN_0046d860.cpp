// Name: engine_drender.cpp_CDemonRenderer_getAlphaMask_FUN_0046d860
// Address: 0046d860
// Address Range: [[0046d860, 0046d86a]]
// Convention: __cdecl
// Signature: int __cdecl engine_drender_cpp_CDemonRenderer_getAlphaMask_FUN_0046d860(CDemonRenderer *this_ptr)

#include "nocturne.h"

int __cdecl engine_drender_cpp_CDemonRenderer_getAlphaMask_FUN_0046d860(CDemonRenderer *this_ptr)

{
  return this_ptr->alpha_mask >> 0x18;
}
