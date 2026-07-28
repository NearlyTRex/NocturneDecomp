// Name: core_texlist.cpp_CTextureList_captureTexture_FUN_00544db0
// Address: 00544db0
// Address Range: [[00544db0, 00544ddf]]
// Convention: unknown
// Signature: void core_texlist_cpp_CTextureList_captureTexture_FUN_00544db0(int param_1,uint param_2)

#include "nocturne.h"

void core_texlist_cpp_CTextureList_captureTexture_FUN_00544db0(int param_1,uint param_2)

{
  engine_drender_cpp_CDemonRenderer_captureTexture_FUN_00461eb0
            (DAT_005ae704,(SMRGLTextureBasic *)((param_2 & 0xfff) * 0x18 + param_1 + 4));
  return;
}
