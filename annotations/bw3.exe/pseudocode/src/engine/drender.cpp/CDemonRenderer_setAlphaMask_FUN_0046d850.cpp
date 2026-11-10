// Name: engine_drender.cpp_CDemonRenderer_setAlphaMask_FUN_0046d850
// Address: 0046d850
// Address Range: [[0046d850, 0046d85e]]
// Convention: __cdecl
// Signature: void __cdecl engine_drender_cpp_CDemonRenderer_setAlphaMask_FUN_0046d850(CDemonRenderer *this_ptr,int alpha_mask)

#include "nocturne.h"

void __cdecl engine_drender_cpp_CDemonRenderer_setAlphaMask_FUN_0046d850(CDemonRenderer *this_ptr,int alpha_mask)

{
  this_ptr->alpha_mask = alpha_mask << 0x18;
  return;
}
