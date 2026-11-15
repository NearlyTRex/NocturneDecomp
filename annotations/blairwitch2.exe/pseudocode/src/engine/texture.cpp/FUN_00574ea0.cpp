// Name: engine_texture.cpp_FUN_00574ea0
// Address: 00574ea0
// Address Range: [[00574ea0, 00574f55]]
// Convention: unknown
// Signature: void engine_texture_cpp_FUN_00574ea0(SMRGLTextureBasic *param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,undefined4 param_5)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void engine_texture_cpp_FUN_00574ea0(SMRGLTextureBasic *param_1,uint param_2,uint param_3,uint param_4,uint param_5)

{
  int iVar1;
  
  if ((DAT_0070ca74 == 0) && (param_1->texture_name[0] != '\0')) {
    iVar1 = engine_texture_cpp_CTextureCache_findTexture_FUN_00574490
                      (_DAT_02652eb0,(param_1->base).count & 0xffff,param_1->texture_name);
    if (iVar1 == -1) {
      iVar1 = engine_texture_cpp_FUN_00574240
                        (_DAT_02652eb0,param_1->texture_name,param_2,param_3,param_4,param_5);
      (param_1->base).count = iVar1;
    }
    else {
      (param_1->base).count = iVar1;
      engine_texture_cpp_FUN_00574310(_DAT_02652eb0,param_1,param_2,param_3,param_4,param_5);
    }
    _DAT_02652eac = iVar1;
    engine_texture_cpp_CTextureCache_setupTexture_FUN_00574520(_DAT_02652eb0,param_1,1);
    return;
  }
  return;
}
