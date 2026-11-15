// Name: engine_texture.cpp_FUN_00574f60
// Address: 00574f60
// Address Range: [[00574f60, 00575000]]
// Convention: unknown
// Signature: void engine_texture_cpp_FUN_00574f60(void)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void engine_texture_cpp_FUN_00574f60(void)

{
  int iVar1;
  SMRGLTextureBasic *in_stack_00000004;
  uint in_stack_00000008;
  uint in_stack_0000000c;
  
  if ((DAT_0070ca74 == 0) && (in_stack_00000004->texture_name[0] != '\0')) {
    iVar1 = engine_texture_cpp_CTextureCache_findTexture_FUN_00574490
                      (_DAT_02652eb0,(in_stack_00000004->base).count & 0xffff,
                       in_stack_00000004->texture_name);
    if (iVar1 == -1) {
      iVar1 = engine_texture_cpp_FUN_005742b0
                        (_DAT_02652eb0,in_stack_00000004->texture_name,in_stack_00000008,
                         in_stack_0000000c);
      (in_stack_00000004->base).count = iVar1;
    }
    else {
      (in_stack_00000004->base).count = iVar1;
      engine_texture_cpp_FUN_005743e0(_DAT_02652eb0);
    }
    _DAT_02652eac = iVar1;
    engine_texture_cpp_CTextureCache_setupTexture_FUN_00574520(_DAT_02652eb0,in_stack_00000004,2);
    return;
  }
  return;
}
