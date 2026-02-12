// Name: engine_palette.cpp_CFont_dtor_FUN_00544ec0
// Address: 00544ec0
// Address Range: [[00544ec0, 00544eca]]
// Convention: __cdecl
// Signature: CFont * __cdecl engine_palette_cpp_CFont_dtor_FUN_00544ec0(CFont *this_ptr,uint flags)

#include "nocturne.h"

CFont * __cdecl engine_palette_cpp_CFont_dtor_FUN_00544ec0(CFont *this_ptr,uint flags)

{
  this_ptr->vtable = &g_CFontVTable;
  return this_ptr;
}
