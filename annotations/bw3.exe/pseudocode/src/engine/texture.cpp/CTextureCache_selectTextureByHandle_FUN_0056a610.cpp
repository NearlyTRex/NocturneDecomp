// Name: engine_texture.cpp_CTextureCache_selectTextureByHandle_FUN_0056a610
// Address: 0056a610
// Address Range: [[0056a610, 0056a683]]
// Convention: __cdecl
// Signature: void __cdecl engine_texture_cpp_CTextureCache_selectTextureByHandle_FUN_0056a610(CTextureCache *this_ptr,SMRGLTextureBasic *texture)

#include "nocturne.h"

void __cdecl engine_texture_cpp_CTextureCache_selectTextureByHandle_FUN_0056a610(CTextureCache *this_ptr,SMRGLTextureBasic *texture)

{
  int iVar1;
  
  iVar1 = (texture->base).count;
  if ((iVar1 < 0) || (this_ptr->current_texture_count <= iVar1)) {
    g_CurrentFilename = "..\\engine\\texture.cpp";
    g_CurrentLineNumber = 745;
    core_main_c_displayErrorAndQuit_FUN_004e4330("CTextureCache::selectTextureByHandle - Out of range : %d,%s");
  }
  (*(code *)g_APIDLL_setFog)(this_ptr->entries[(texture->base).count].hw_texture_handle,0);
  return;
}
