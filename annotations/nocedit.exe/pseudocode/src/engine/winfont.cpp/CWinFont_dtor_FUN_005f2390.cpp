// Name: engine_winfont.cpp_CWinFont_dtor_FUN_005f2390
// Address: 005f2390
// Address Range: [[005f2390, 005f23ec]]
// Convention: __cdecl
// Signature: CWinFont * __cdecl engine_winfont_cpp_CWinFont_dtor_FUN_005f2390(CWinFont *this_ptr,uint flags)

#include "nocturne.h"

CWinFont * __cdecl engine_winfont_cpp_CWinFont_dtor_FUN_005f2390(CWinFont *this_ptr,uint flags)

{
  CWinFont *ptr;
  void *ptr_00;
  
  if ((flags & 4) != 0) {
    ptr_00 = __vec_delete(this_ptr,&g_CWinFontTypeInfo);
    shape_memdbg_cpp_free_FUN_005fe659(ptr_00);
    return this_ptr;
  }
  (this_ptr->base).vtable = &g_CWinFontVTable;
  engine_winfont_cpp_CWinFont_reset_FUN_005f2a30(this_ptr);
  ptr = (CWinFont *)engine_palette_cpp_CFont_dtor_FUN_00544ec0(&this_ptr->base);
  if ((flags & 2) == 0) {
    return ptr;
  }
  shape_memdbg_cpp_debugFree_FUN_0050f210(ptr);
  return ptr;
}
