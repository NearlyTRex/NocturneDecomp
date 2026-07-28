// Name: core_texlist.cpp_CTextureList_captureAllTextures_FUN_00544d70
// Address: 00544d70
// Address Range: [[00544d70, 00544da1]]
// Convention: unknown
// Signature: void core_texlist_cpp_CTextureList_captureAllTextures_FUN_00544d70(int *param_1)

#include "nocturne.h"

void core_texlist_cpp_CTextureList_captureAllTextures_FUN_00544d70(int *param_1)

{
  int iVar1;
  SMRGLTextureBasic *texture;
  
  iVar1 = 0;
  if (0 < *param_1) {
    texture = (SMRGLTextureBasic *)(param_1 + 1);
    do {
      iVar1 = iVar1 + 1;
      engine_drender_cpp_CDemonRenderer_captureTexture_FUN_00461eb0(DAT_005ae704,texture);
      texture = texture + 1;
    } while (iVar1 < *param_1);
  }
  return;
}
