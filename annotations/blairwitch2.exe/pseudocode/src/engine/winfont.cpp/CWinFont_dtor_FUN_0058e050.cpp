// Name: engine_winfont.cpp_CWinFont_dtor_FUN_0058e050
// Address: 0058e050
// Address Range: [[0058e050, 0058e0b0]]
// Convention: __cdecl
// Signature: CWinFont * __cdecl engine_winfont_cpp_CWinFont_dtor_FUN_0058e050(CWinFont *this_ptr,uint flags)

#include "nocturne.h"

CWinFont * __cdecl engine_winfont_cpp_CWinFont_dtor_FUN_0058e050(CWinFont *this_ptr,uint flags)

{
  CWinFont *ptr;
  void *ptr_00;
  
  if ((flags & 4) != 0) {
    ptr_00 = __vec_delete(this_ptr,&g_CWinFontTypeInfo);
    free(ptr_00);
    return this_ptr;
  }
  (this_ptr->base).vtable = &g_CFont_vtable_005fe274;
  engine_winfont_cpp_CWinFont_reset_FUN_0058e640(this_ptr);
  ptr = (CWinFont *)engine_palette_cpp_CFont_dtor_FUN_00510cc0(&this_ptr->base,1);
  if ((flags & 2) == 0) {
    return ptr;
  }
  debugFreeChecked(ptr);
  return ptr;
}
