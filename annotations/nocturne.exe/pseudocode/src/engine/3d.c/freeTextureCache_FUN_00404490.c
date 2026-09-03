// Name: engine_3d.c_freeTextureCache_FUN_00404490
// Address: 00404490
// Address Range: [[00404490, 00404494]]
// Convention: __cdecl
// Signature: void __cdecl engine_3d_c_freeTextureCache_FUN_00404490(void)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl engine_3d_c_freeTextureCache_FUN_00404490(void)

{
  CTextureCache *ptr;
  
  engine_texture_cpp_CTextureCache_reset_FUN_00544e50(_DAT_02dd0f84);
  ptr = _DAT_02dd0f84;
  if (_DAT_02dd0f84 == (CTextureCache *)0x0) {
    _DAT_02dd0f84 = (CTextureCache *)0x0;
    return;
  }
  engine_texture_cpp_CTextureCache_freeTextures_FUN_00544e60(_DAT_02dd0f84);
  operator_delete(ptr);
  _DAT_02dd0f84 = (CTextureCache *)0x0;
  return;
}
