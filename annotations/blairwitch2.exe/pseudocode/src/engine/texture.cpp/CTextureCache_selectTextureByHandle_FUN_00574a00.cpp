// Name: engine_texture.cpp_CTextureCache_selectTextureByHandle_FUN_00574a00
// Address: 00574a00
// Address Range: [[00574a00, 00574a73]]
// Convention: __cdecl
// Signature: void __cdecl engine_texture_cpp_CTextureCache_selectTextureByHandle_FUN_00574a00(CTextureCache *this_ptr,SMRGLTextureBasic *texture)

#include "nocturne.h"

void __cdecl engine_texture_cpp_CTextureCache_selectTextureByHandle_FUN_00574a00(CTextureCache *this_ptr,SMRGLTextureBasic *texture)

{
  int iVar1;
  
  iVar1 = (texture->base).count;
  if ((iVar1 < 0) || (this_ptr->current_texture_count <= iVar1)) {
    g_CurrentFilename = "..\\engine\\texture.cpp";
    g_CurrentLineNumber = 745;
    core_main_c_displayErrorAndQuit_FUN_004e4500("CTextureCache::selectTextureByHandle - Out of range : %d,%s");
  }
  (*(code *)g_APIDLL_setAmbientLight)(this_ptr->entries[(texture->base).count].hw_texture_handle,0);
  return;
}
