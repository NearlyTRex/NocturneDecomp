// Name: engine_texture.cpp_FUN_0056aa10
// Address: 0056aa10
// Address Range: [[0056aa10, 0056aa86]]
// Convention: unknown
// Signature: int engine_texture_cpp_FUN_0056aa10(int param_1)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int engine_texture_cpp_FUN_0056aa10(int param_1)

{
  int iVar1;
  bool bVar2;
  
  if ((DAT_007303f4 == 0) && (*(char *)(param_1 + 8) != '\0')) {
    iVar1 = engine_texture_cpp_FUN_0056a0a0
                      (_DAT_02cfd0d0,*(uint *)(param_1 + 4) & 0xffff,(char *)(param_1 + 8));
    bVar2 = iVar1 == -1;
    if (bVar2) {
      iVar1 = engine_texture_cpp_CTextureCache_loadTexture_FUN_00569790
                        (_DAT_02cfd0d0,(char *)(param_1 + 8));
    }
    *(int *)(param_1 + 4) = iVar1;
    _DAT_02cfd0cc = iVar1;
    engine_texture_cpp_FUN_0056a130(_DAT_02cfd0d0,param_1,bVar2);
    return param_1 + 0x18;
  }
  return param_1 + 0x18;
}
