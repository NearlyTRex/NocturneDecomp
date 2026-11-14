// Name: engine_winfont.cpp_CWinFont_dtor_FUN_0057fe10
// Address: 0057fe10
// Address Range: [[0057fe10, 0057fe70]]
// Convention: __cdecl
// Signature: CWinFont * __cdecl engine_winfont_cpp_CWinFont_dtor_FUN_0057fe10(CWinFont *this_ptr,uint flags)

#include "nocturne.h"

CWinFont * __cdecl engine_winfont_cpp_CWinFont_dtor_FUN_0057fe10(CWinFont *this_ptr,uint flags)

{
  CWinFont *pCVar1;
  void *ptr;
  
  if ((flags & 4) != 0) {
    ptr = __vec_delete(this_ptr,&g_CWinFontTypeInfo);
    FUN_005a30b6(ptr);
    return this_ptr;
  }
  (this_ptr->base).vtable =
       (CFont_vtable *)&PTR_engine_winfont_cpp_CWinFont_dtor_FUN_0057fe10_005e6534;
  engine_winfont_cpp_CWinFont_reset_FUN_00580300(this_ptr);
  pCVar1 = (CWinFont *)engine_palette_cpp_FUN_00509bb0(&this_ptr->base,1);
  if ((flags & 2) == 0) {
    return pCVar1;
  }
  FUN_005a30c4(pCVar1);
  return pCVar1;
}
