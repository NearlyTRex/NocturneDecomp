// Name: engine_texture.cpp_CTextureCache_getTextureCacheStats_FUN_00545810
// Address: 00545810
// Address Range: [[00545810, 0054589d]]
// Convention: __cdecl
// Signature: void __cdecl engine_texture_cpp_CTextureCache_getTextureCacheStats_FUN_00545810(int *param_1,undefined4 param_2)

#include "nocturne.h"

void __cdecl engine_texture_cpp_CTextureCache_getTextureCacheStats_FUN_00545810(int *param_1,uint param_2)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  
  iVar6 = 0;
  iVar5 = 0;
  iVar2 = 0;
  iVar4 = 0;
  if (*param_1 == 0) {
    iVar3 = 0;
    piVar1 = param_1;
    if (0 < param_1[0x34c02]) {
      do {
        if (piVar1[2] == 0x20) {
          iVar4 = iVar4 + 1;
        }
        if (piVar1[2] == 0x40) {
          iVar6 = iVar6 + 1;
        }
        if (piVar1[2] == 0x80) {
          iVar5 = iVar5 + 1;
        }
        if (piVar1[2] == 0x100) {
          iVar2 = iVar2 + 1;
        }
        iVar3 = iVar3 + 1;
        piVar1 = piVar1 + 1;
      } while (iVar3 < param_1[0x34c02]);
    }
    _sprintf(param_2,"Total: %d, 32: %d, 64: %d, 128: %d, 256: %d",param_1[0x34c02],iVar4,iVar6,
               iVar5,iVar2);
    return;
  }
  _sprintf(param_2,"Texture cache has wrapped.  Make it bigger, please.");
  return;
}
