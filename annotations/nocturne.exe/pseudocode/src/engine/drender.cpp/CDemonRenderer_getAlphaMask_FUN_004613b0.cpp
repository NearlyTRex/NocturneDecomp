// Name: engine_drender.cpp_CDemonRenderer_getAlphaMask_FUN_004613b0
// Address: 004613b0
// Address Range: [[004613b0, 004613ba]]
// Convention: __cdecl
// Signature: int __cdecl engine_drender_cpp_CDemonRenderer_getAlphaMask_FUN_004613b0(CDemonRenderer *this_ptr)

#include "nocturne.h"

int __cdecl engine_drender_cpp_CDemonRenderer_getAlphaMask_FUN_004613b0(CDemonRenderer *this_ptr)

{
  return this_ptr->alpha_mask >> 0x18;
}
