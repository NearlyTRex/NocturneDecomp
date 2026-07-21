// Name: core_gore.cpp_CGore_loadAssets_FUN_004b04b0
// Address: 004b04b0
// Address Range: [[004b04b0, 004b057a]]
// Convention: __cdecl
// Signature: void __cdecl core_gore_cpp_CGore_loadAssets_FUN_004b04b0(void)

#include "nocturne.h"

void __cdecl core_gore_cpp_CGore_loadAssets_FUN_004b04b0(void)

{
  byte *puVar1;
  byte *puVar2;
  int iVar3;
  
  puVar1 = &DAT_005b96ec;
  engine_drender_cpp_CDemonRenderer_captureTexture_FUN_00461eb0(DAT_005ae704,&DAT_005b96d4);
  do {
    engine_drender_cpp_CDemonRenderer_captureTexture_FUN_00461eb0(DAT_005ae704,puVar1);
    puVar1 = puVar1 + 0x18;
  } while (puVar1 != &DAT_005b974c);
  iVar3 = 0;
  puVar1 = &DAT_005b98cc;
  do {
    puVar2 = &DAT_005b974c + iVar3 * 0x180;
    do {
      engine_drender_cpp_CDemonRenderer_captureTexture_FUN_00461eb0(DAT_005ae704,puVar2);
      puVar2 = puVar2 + 0x18;
    } while (puVar2 != puVar1);
    iVar3 = iVar3 + 1;
    puVar1 = puVar1 + 0x180;
  } while (iVar3 < 4);
  iVar3 = 0;
  puVar1 = &DAT_005ba004;
  do {
    puVar2 = &DAT_005b9d4c + iVar3 * 0x2b8;
    do {
      engine_drender_cpp_CDemonRenderer_captureTexture_FUN_00461eb0(DAT_005ae704,puVar2);
      puVar2 = puVar2 + 0x18;
    } while (puVar2 != puVar1);
    iVar3 = iVar3 + 1;
    puVar1 = puVar1 + 0x2b8;
  } while (iVar3 < 4);
  engine_drender_cpp_CDemonRenderer_captureTexture_FUN_00461eb0(DAT_005ae704,&DAT_005ba84c);
  return;
}
