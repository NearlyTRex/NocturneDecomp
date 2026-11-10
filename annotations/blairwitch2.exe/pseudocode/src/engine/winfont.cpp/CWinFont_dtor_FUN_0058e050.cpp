// Name: engine_winfont.cpp_CWinFont_dtor_FUN_0058e050
// Address: 0058e050
// Address Range: [[0058e050, 0058e0b0]]
// Convention: __cdecl
// Signature: CWinFont * __cdecl engine_winfont_cpp_CWinFont_dtor_FUN_0058e050(CWinFont *this_ptr,uint flags)

#include "nocturne.h"

CWinFont * __cdecl engine_winfont_cpp_CWinFont_dtor_FUN_0058e050(CWinFont *this_ptr,uint flags)

{
  CWinFont *pCVar1;
  void *ptr;
  
  if ((flags & 4) != 0) {
    ptr = (void *)__vec_delete(this_ptr,&g_CWinFontTypeInfo);
    FUN_005b7fce(ptr);
    return this_ptr;
  }
  *(byte ***)&this_ptr->field_0x6a44 =
       &PTR_engine_winfont_cpp_CWinFont_dtor_FUN_0058e050_005fe274;
  engine_winfont_cpp_CWinFont_reset_FUN_0058e640(this_ptr);
  pCVar1 = (CWinFont *)engine_palette_cpp_FUN_00510cc0((CFont *)this_ptr,1);
  if ((flags & 2) == 0) {
    return pCVar1;
  }
  FUN_005b7fdc(pCVar1);
  return pCVar1;
}
