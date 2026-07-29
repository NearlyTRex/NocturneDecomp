// Name: engine_drender.cpp_CDemonRenderer_setAlphaMask_FUN_004613a0
// Address: 004613a0
// Address Range: [[004613a0, 004613ae]]
// Convention: __cdecl
// Signature: void __cdecl engine_drender_cpp_CDemonRenderer_setAlphaMask_FUN_004613a0(CDemonRenderer *this_ptr,int alpha_mask)

#include "nocturne.h"

void __cdecl engine_drender_cpp_CDemonRenderer_setAlphaMask_FUN_004613a0(CDemonRenderer *this_ptr,int alpha_mask)

{
  this_ptr->alpha_mask = alpha_mask << 0x18;
  return;
}
