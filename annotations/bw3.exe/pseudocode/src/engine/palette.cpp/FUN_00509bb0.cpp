// Name: engine_palette.cpp_FUN_00509bb0
// Address: 00509bb0
// Address Range: [[00509bb0, 00509bbe]]
// Convention: __cdecl
// Signature: CFont * __cdecl engine_palette_cpp_FUN_00509bb0(CFont *this_ptr,uint flags)

#include "nocturne.h"

CFont * __cdecl engine_palette_cpp_FUN_00509bb0(CFont *this_ptr,uint flags)

{
  *(byte ***)(this_ptr + 0x6a44) = &PTR_engine_palette_cpp_FUN_00509bb0_005e2f74;
  return this_ptr;
}
