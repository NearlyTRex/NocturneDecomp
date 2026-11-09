// Name: core_fire.cpp_FUN_0049f380
// Address: 0049f380
// Address Range: [[0049f380, 0049f407]]
// Convention: unknown
// Signature: void core_fire_cpp_FUN_0049f380(int param_1)

#include "nocturne.h"

void core_fire_cpp_FUN_0049f380(int param_1)

{
  SMRGLTextureBasic *texture;
  int iVar1;
  
  iVar1 = 0;
  do {
    if (param_1 == 2) {
      texture = (SMRGLTextureBasic *)(&DAT_005fd984 + iVar1);
    }
    else if (param_1 == 3) {
      texture = (SMRGLTextureBasic *)(&DAT_005fda14 + iVar1);
    }
    else if (param_1 == 4) {
      texture = (SMRGLTextureBasic *)(&DAT_005fdaa4 + iVar1);
    }
    else if (param_1 == 5) {
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
