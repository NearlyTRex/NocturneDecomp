// Name: engine_texture.cpp_CTextureCache_selectTextureByHandle_FUN_0056a610
// Address: 0056a610
// Address Range: [[0056a610, 0056a683]]
// Convention: __cdecl
// Signature: void __cdecl engine_texture_cpp_CTextureCache_selectTextureByHandle_FUN_0056a610(CTextureCache *this_ptr,SMRGLTextureBasic *texture)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl engine_texture_cpp_CTextureCache_selectTextureByHandle_FUN_0056a610(CTextureCache *this_ptr,SMRGLTextureBasic *texture)

{
  int iVar1;
  
  iVar1 = (texture->base).count;
  if ((iVar1 < 0) || (this_ptr->current_texture_count <= iVar1)) {
    _DAT_01d71de0 = "..\\engine\\texture.cpp";
    _DAT_01d71de4 = 0x2e9;
    core_main_c_displayErrorAndQuit_FUN_004e4330("CTextureCache::selectTextureByHandle - Out of range : %d,%s");
  }
  (*_DAT_02cf60e4)(this_ptr->entries[(texture->base).count].hw_texture_handle,0);
  return;
}
