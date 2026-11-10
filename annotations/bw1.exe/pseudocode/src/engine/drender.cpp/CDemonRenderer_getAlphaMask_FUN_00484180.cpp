// Name: engine_drender.cpp_CDemonRenderer_getAlphaMask_FUN_00484180
// Address: 00484180
// Address Range: [[00484180, 0048418a]]
// Convention: __cdecl
// Signature: int __cdecl engine_drender_cpp_CDemonRenderer_getAlphaMask_FUN_00484180(CDemonRenderer *this_ptr)

#include "nocturne.h"

int __cdecl engine_drender_cpp_CDemonRenderer_getAlphaMask_FUN_00484180(CDemonRenderer *this_ptr)

{
  return this_ptr->alpha_mask >> 0x18;
}
