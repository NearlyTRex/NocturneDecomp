// Name: engine_texture.cpp_CTextureCache_renderAllTextures_FUN_0056a8f0
// Address: 0056a8f0
// Address Range: [[0056a8f0, 0056a958]]
// Convention: __cdecl
// Signature: void __cdecl engine_texture_cpp_CTextureCache_renderAllTextures_FUN_0056a8f0(CTextureCache *this_ptr)

#include "nocturne.h"

void __cdecl engine_texture_cpp_CTextureCache_renderAllTextures_FUN_0056a8f0(CTextureCache *this_ptr)

{
  char cVar1;
  int iVar2;
  int iVar3;
  char *pcVar4;
  char *pcVar5;
  char *pcVar6;
  
  iVar3 = 0;
  if (0 < this_ptr->current_texture_count) {
    pcVar5 = this_ptr->entries[0].texture_name;
    pcVar6 = g_SMRGLTextureBasic_02cfd080.texture_name;
    iVar2 = iVar3;
    pcVar4 = pcVar5;
LAB_0056a915:
    do {
      g_SMRGLTextureBasic_02cfd080.base.count = iVar2;
      cVar1 = *pcVar5;
      *pcVar6 = cVar1;
      if (cVar1 != '\0') {
        cVar1 = pcVar5[1];
        pcVar5 = pcVar5 + 2;
        pcVar6[1] = cVar1;
        pcVar6 = pcVar6 + 2;
        iVar2 = g_SMRGLTextureBasic_02cfd080.base.count;
        if (cVar1 != '\0') goto LAB_0056a915;
      }
      engine_texture_cpp_CTextureCache_setupTexture_FUN_0056a130
                (this_ptr,&g_SMRGLTextureBasic_02cfd080,1);
      iVar3 = iVar3 + 1;
      pcVar5 = pcVar4 + 0x60;
      pcVar6 = g_SMRGLTextureBasic_02cfd080.texture_name;
      iVar2 = iVar3;
      pcVar4 = pcVar5;
    } while (iVar3 < this_ptr->current_texture_count);
  }
  return;
}
