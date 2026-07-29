// Name: engine_palette.cpp_CFont_dtor_FUN_004eefc0
// Address: 004eefc0
// Address Range: [[004eefc0, 004eefca]]
// Convention: __cdecl
// Signature: CFont * __cdecl engine_palette_cpp_CFont_dtor_FUN_004eefc0(CFont *this_ptr,uint flags)

#include "nocturne.h"

CFont * __cdecl engine_palette_cpp_CFont_dtor_FUN_004eefc0(CFont *this_ptr,uint flags)

{
  this_ptr->vtable = &g_CFontVTable;
  return this_ptr;
}
