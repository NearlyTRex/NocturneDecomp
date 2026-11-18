// Name: core_charactr.cpp_preloadEtherealTextures_FUN_0042f280
// Address: 0042f280
// Address Range: [[0042f280, 0042f30b]]
// Convention: __cdecl
// Signature: void __cdecl core_charactr_cpp_preloadEtherealTextures_FUN_0042f280(int ethereal_type)

#include "nocturne.h"

void __cdecl core_charactr_cpp_preloadEtherealTextures_FUN_0042f280(int ethereal_type)

{
  SMRGLTextureBasic *texture;
  int iVar1;
  
  iVar1 = 0;
  do {
    if (ethereal_type == 0) {
      texture = (SMRGLTextureBasic *)(&DAT_005f1124 + iVar1);
LAB_0042f2a2:
      engine_drender_cpp_CDemonRenderer_captureTexture_FUN_0046e5e0
                (g_CDemonRenderer_PTR_005f2afc,texture);
    }
    else {
      if (ethereal_type == 1) {
        texture = (SMRGLTextureBasic *)(&DAT_005f1004 + iVar1);
        goto LAB_0042f2a2;
      }
      if (ethereal_type == 2) {
        texture = (SMRGLTextureBasic *)(&DAT_005f1094 + iVar1);
        goto LAB_0042f2a2;
      }
      if (ethereal_type == 4) {
        texture = (SMRGLTextureBasic *)(&DAT_005f11b4 + iVar1);
        goto LAB_0042f2a2;
      }
      if (ethereal_type == 3) {
        texture = (SMRGLTextureBasic *)(&DAT_005f1244 + iVar1);
        goto LAB_0042f2a2;
      }
    }
    iVar1 = iVar1 + 0x18;
    if (iVar1 == 0x90) {
      return;
    }
  } while( true );
}
