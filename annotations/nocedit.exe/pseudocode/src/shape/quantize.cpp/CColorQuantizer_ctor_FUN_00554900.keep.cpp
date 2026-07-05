// Name: shape_quantize.cpp_CColorQuantizer_ctor_FUN_00554900
// Address: 00554900
// MANUAL RECONSTRUCTION
// Address Range: [[00554900, 00554936]]
// Convention: __cdecl
// Signature: CColorQuantizer * __cdecl shape_quantize_cpp_CColorQuantizer_ctor_FUN_00554900(CColorQuantizer *this_ptr)

#include "nocturne.h"

CColorQuantizer * __cdecl shape_quantize_cpp_CColorQuantizer_ctor_FUN_00554900(CColorQuantizer *this_ptr)

{
  memset(this_ptr,0,sizeof(CColorQuantizer));
  this_ptr->num_colors = 0x100;
  this_ptr->status = -1;
  return this_ptr;
}
