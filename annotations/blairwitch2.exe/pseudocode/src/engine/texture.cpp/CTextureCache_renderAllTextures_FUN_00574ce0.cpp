// Name: engine_texture.cpp_CTextureCache_renderAllTextures_FUN_00574ce0
// Address: 00574ce0
// Address Range: [[00574ce0, 00574d48]]
// Convention: __cdecl
// Signature: void __cdecl engine_texture_cpp_CTextureCache_renderAllTextures_FUN_00574ce0(CTextureCache *this_ptr)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl engine_texture_cpp_CTextureCache_renderAllTextures_FUN_00574ce0(CTextureCache *this_ptr)

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
    pcVar6 = (char *)0x2652e68;
    iVar2 = iVar3;
    pcVar4 = pcVar5;
LAB_00574d05:
    do {
      _DAT_02652e64 = iVar2;
      cVar1 = *pcVar5;
      *pcVar6 = cVar1;
      if (cVar1 != '\0') {
        cVar1 = pcVar5[1];
        pcVar5 = pcVar5 + 2;
        pcVar6[1] = cVar1;
        pcVar6 = pcVar6 + 2;
        iVar2 = _DAT_02652e64;
        if (cVar1 != '\0') goto LAB_00574d05;
      }
      engine_texture_cpp_CTextureCache_setupTexture_FUN_00574520
                (this_ptr,(SMRGLTextureBasic *)0x2652e60,1);
      iVar3 = iVar3 + 1;
      pcVar5 = pcVar4 + 0x60;
      pcVar6 = (char *)0x2652e68;
      iVar2 = iVar3;
      pcVar4 = pcVar5;
    } while (iVar3 < this_ptr->current_texture_count);
  }
  return;
}
