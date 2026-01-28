// Name: engine_drender.cpp_CDemonRenderer_setAlphaMask_FUN_0048cdf0
// Address: 0048cdf0
// Address Range: [[0048cdf0, 0048cdfe]]
// Convention: __cdecl
// Signature: void __cdecl engine_drender_cpp_CDemonRenderer_setAlphaMask_FUN_0048cdf0(CDemonRenderer *this_ptr,int alpha_mask)

#include "nocturne.h"

void __cdecl
engine_drender_cpp_CDemonRenderer_setAlphaMask_FUN_0048cdf0(CDemonRenderer *this_ptr,int alpha_mask)

{
  this_ptr->alpha_mask = alpha_mask << 0x18;
  return;
}
