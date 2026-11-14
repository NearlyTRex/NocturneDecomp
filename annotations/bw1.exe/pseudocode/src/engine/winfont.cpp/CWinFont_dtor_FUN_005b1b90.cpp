// Name: engine_winfont.cpp_CWinFont_dtor_FUN_005b1b90
// Address: 005b1b90
// Address Range: [[005b1b90, 005b1bf0]]
// Convention: __cdecl
// Signature: CWinFont * __cdecl engine_winfont_cpp_CWinFont_dtor_FUN_005b1b90(CWinFont *this_ptr,uint flags)

#include "nocturne.h"

CWinFont * __cdecl engine_winfont_cpp_CWinFont_dtor_FUN_005b1b90(CWinFont *this_ptr,uint flags)

{
  CWinFont *pCVar1;
  void *ptr;
  
  if ((flags & 4) != 0) {
    ptr = __vec_delete(this_ptr,&g_CWinFontTypeInfo);
    FUN_005c0336(ptr);
    return this_ptr;
  }
  (this_ptr->base).vtable =
       (CFont_vtable *)&PTR_engine_winfont_cpp_CWinFont_dtor_FUN_005b1b90_00608164;
  engine_winfont_cpp_CWinFont_reset_FUN_005b2080(this_ptr);
  pCVar1 = (CWinFont *)engine_palette_cpp_FUN_00531ed0(&this_ptr->base,1);
  if ((flags & 2) == 0) {
    return pCVar1;
  }
  FUN_005c0344(pCVar1);
  return pCVar1;
}
