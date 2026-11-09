// Name: engine_drender.cpp_CDemonRenderer_ctor_FUN_0046b0e0
// Address: 0046b0e0
// Address Range: [[0046b0e0, 0046b11b]]
// Convention: __cdecl
// Signature: CDemonRenderer * __cdecl engine_drender_cpp_CDemonRenderer_ctor_FUN_0046b0e0(CDemonRenderer *this_ptr)

#include "nocturne.h"

CDemonRenderer * __cdecl engine_drender_cpp_CDemonRenderer_ctor_FUN_0046b0e0(CDemonRenderer *this_ptr)

{
  *(uint *)(this_ptr + 8) = 0;
  *(uint **)this_ptr = &DAT_0060b014;
  *(uint *)(this_ptr + 0xc) = 1;
  *(uint *)(this_ptr + 0x10) = 1;
  *(uint *)(this_ptr + 0x14) = 0;
  *(uint *)(this_ptr + 0x1c) = 0;
  *(uint *)(this_ptr + 0x20) = 0;
  *(uint *)(this_ptr + 4) = 0;
  return this_ptr;
}
