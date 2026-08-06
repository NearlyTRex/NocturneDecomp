// Name: engine_winfont.cpp_CWinFont_dtor_FUN_00558000
// Address: 00558000
// Address Range: [[00558000, 0055805c]]
// Convention: __cdecl
// Signature: CWinFont * __cdecl engine_winfont_cpp_CWinFont_dtor_FUN_00558000(CWinFont *this_ptr,uint flags)

#include "nocturne.h"

CWinFont * __cdecl engine_winfont_cpp_CWinFont_dtor_FUN_00558000(CWinFont *this_ptr,uint flags)

{
  CWinFont *ptr;
  void *ptr_00;
  
  if ((flags & 4) != 0) {
    ptr_00 = __vec_delete(this_ptr,(WatcomTypeInfo *)&DAT_005a44a0);
    shape_memdbg_cpp_free_FUN_00564486(ptr_00);
    return this_ptr;
  }
  (this_ptr->base).vtable = &g_CWinFontVTable;
  engine_winfont_cpp_CWinFont_reset_FUN_005586a0(this_ptr);
  ptr = (CWinFont *)engine_palette_cpp_CFont_dtor_FUN_004eefc0(&this_ptr->base,1);
  if ((flags & 2) == 0) {
    return ptr;
  }
  operator_delete(ptr);
  return ptr;
}
