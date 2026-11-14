// Name: core_fire.cpp_loadLightningBoltAssets_FUN_0049f380
// Address: 0049f380
// Address Range: [[0049f380, 0049f407]]
// Convention: __cdecl
// Signature: void __cdecl core_fire_cpp_loadLightningBoltAssets_FUN_0049f380(int bolt_style)

#include "nocturne.h"

void __cdecl core_fire_cpp_loadLightningBoltAssets_FUN_0049f380(int bolt_style)

{
  SMRGLTextureBasic *texture;
  int iVar1;
  
  iVar1 = 0;
  do {
    if (bolt_style == 2) {
      texture = (SMRGLTextureBasic *)(&DAT_005fd984 + iVar1);
    }
    else if (bolt_style == 3) {
      texture = (SMRGLTextureBasic *)(&DAT_005fda14 + iVar1);
    }
    else if (bolt_style == 4) {
      texture = (SMRGLTextureBasic *)(&DAT_005fdaa4 + iVar1);
    }
    else if (bolt_style == 5) {
      texture = (SMRGLTextureBasic *)(&DAT_005fdb34 + iVar1);
    }
    else {
      texture = (SMRGLTextureBasic *)(&DAT_005fd8f4 + iVar1);
    }
    engine_drender_cpp_CDemonRenderer_captureTexture_FUN_0046e5e0(DAT_005f2afc,texture);
    iVar1 = iVar1 + 0x18;
  } while (iVar1 != 0x90);
  return;
}
