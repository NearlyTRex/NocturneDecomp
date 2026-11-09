// Name: engine_palette.cpp_FUN_00531ed0
// Address: 00531ed0
// Address Range: [[00531ed0, 00531ede]]
// Convention: __cdecl
// Signature: CFont * __cdecl engine_palette_cpp_FUN_00531ed0(CFont *this_ptr,uint flags)

#include "nocturne.h"

CFont * __cdecl engine_palette_cpp_FUN_00531ed0(CFont *this_ptr,uint flags)

{
  *(byte ***)(this_ptr + 0x6a44) = &PTR_engine_palette_cpp_FUN_00531ed0_006045b0;
  return this_ptr;
}
