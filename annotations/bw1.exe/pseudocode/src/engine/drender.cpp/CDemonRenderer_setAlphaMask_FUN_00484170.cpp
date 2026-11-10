// Name: engine_drender.cpp_CDemonRenderer_setAlphaMask_FUN_00484170
// Address: 00484170
// Address Range: [[00484170, 0048417e]]
// Convention: __cdecl
// Signature: void __cdecl engine_drender_cpp_CDemonRenderer_setAlphaMask_FUN_00484170(CDemonRenderer *this_ptr,int alpha_mask)

#include "nocturne.h"

void __cdecl engine_drender_cpp_CDemonRenderer_setAlphaMask_FUN_00484170(CDemonRenderer *this_ptr,int alpha_mask)

{
  this_ptr->alpha_mask = alpha_mask << 0x18;
  return;
}
