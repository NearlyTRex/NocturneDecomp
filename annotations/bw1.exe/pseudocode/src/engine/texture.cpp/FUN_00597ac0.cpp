// Name: engine_texture.cpp_FUN_00597ac0
// Address: 00597ac0
// Address Range: [[00597ac0, 00597b75]]
// Convention: unknown
// Signature: void engine_texture_cpp_FUN_00597ac0(SMRGLTextureBasic *param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,undefined4 param_5)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void engine_texture_cpp_FUN_00597ac0(SMRGLTextureBasic *param_1,uint param_2,uint param_3,uint param_4,uint param_5)

{
  int iVar1;
  
  if ((DAT_00713a74 == 0) && (param_1->texture_name[0] != '\0')) {
    iVar1 = engine_texture_cpp_CTextureCache_findTexture_FUN_005970b0
                      (_DAT_02c8a680,(param_1->base).count & 0xffff,param_1->texture_name);
    if (iVar1 == -1) {
      iVar1 = engine_texture_cpp_FUN_00596e60
                        (_DAT_02c8a680,param_1->texture_name,param_2,param_3,param_4,param_5);
      (param_1->base).count = iVar1;
    }
    else {
      (param_1->base).count = iVar1;
      engine_texture_cpp_FUN_00596f30(_DAT_02c8a680,param_1,param_2,param_3,param_4,param_5);
    }
    _DAT_02c8a67c = iVar1;
    engine_texture_cpp_CTextureCache_setupTexture_FUN_00597140(_DAT_02c8a680,param_1,1);
    return;
  }
  return;
}
