// Name: shape_quantize.cpp_CColorQuantizer_ctor_FUN_00554900
// Address: 00554900
// Address Range: [[00554900, 00554936]]
// Convention: __cdecl
// Signature: CColorQuantizer * __cdecl shape_quantize_cpp_CColorQuantizer_ctor_FUN_00554900(CColorQuantizer *this_ptr)

#include "nocturne.h"

CColorQuantizer * __cdecl
shape_quantize_cpp_CColorQuantizer_ctor_FUN_00554900(CColorQuantizer *this_ptr)

{
  CColorQuantizer *in_stack_00000004;
  
  crt_stack_c_stack_probe_FUN_005ff9f3(0x14);
  crt_memory_c_memset_FUN_005fde40(in_stack_00000004,0,0x4b44);
  in_stack_00000004->num_colors = 0x100;
  in_stack_00000004->status = -1;
  return in_stack_00000004;
}
