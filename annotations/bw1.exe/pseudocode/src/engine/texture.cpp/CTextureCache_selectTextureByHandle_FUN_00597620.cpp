// Name: engine_texture.cpp_CTextureCache_selectTextureByHandle_FUN_00597620
// Address: 00597620
// Address Range: [[00597620, 00597693]]
// Convention: __cdecl
// Signature: void __cdecl engine_texture_cpp_CTextureCache_selectTextureByHandle_FUN_00597620(CTextureCache *this_ptr,SMRGLTextureBasic *texture)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl engine_texture_cpp_CTextureCache_selectTextureByHandle_FUN_00597620(CTextureCache *this_ptr,SMRGLTextureBasic *texture)

{
  int iVar1;
  
  iVar1 = (texture->base).count;
  if ((iVar1 < 0) || (this_ptr->current_texture_count <= iVar1)) {
    _DAT_01d1d400 = "..\\engine\\texture.cpp";
    _DAT_01d1d404 = 0x2e9;
    core_main_c_displayErrorAndQuit_FUN_005030e0("CTextureCache::selectTextureByHandle - Out of range : %d,%s");
  }
  (*_DAT_02c83488)(this_ptr->entries[(texture->base).count].hw_texture_handle,0);
  return;
}
