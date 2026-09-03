// Name: engine_3d.c_initTextureCache_FUN_00404480
// Address: 00404480
// Address Range: [[00404480, 00404484]]
// Convention: __cdecl
// Signature: CTextureCache * __cdecl engine_3d_c_initTextureCache_FUN_00404480(void)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

CTextureCache * __cdecl engine_3d_c_initTextureCache_FUN_00404480(void)

{
  CTextureCache *this_ptr;
  
  this_ptr = operator_new(0xd300c);
  if (this_ptr == (CTextureCache *)0x0) {
    _DAT_02dd0f84 = this_ptr;
    return (CTextureCache *)0x0;
  }
  _DAT_02dd0f84 = engine_texture_cpp_CTextureCache_ctor_FUN_00544de0(this_ptr,0x400);
  return _DAT_02dd0f84;
}
