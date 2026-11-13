// Name: core_fire.cpp_CFireEffect_preloadLightningBoltStyle_FUN_004a4130
// Address: 004a4130
// Address Range: [[004a4130, 004a41c5]]
// Convention: __cdecl
// Signature: void __cdecl core_fire_cpp_CFireEffect_preloadLightningBoltStyle_FUN_004a4130(CFireEffect *this_ptr,int bolt_style)

#include "nocturne.h"

void __cdecl core_fire_cpp_CFireEffect_preloadLightningBoltStyle_FUN_004a4130(CFireEffect *this_ptr,int bolt_style)

{
  SMRGLTextureBasic *texture;
  int iVar1;
  SMRGLTextureBasic *texture_00;
  
  texture_00 = (SMRGLTextureBasic *)&DAT_005fd8f4;
  iVar1 = 0;
  do {
    if (bolt_style == 1) {
      engine_drender_cpp_CDemonRenderer_captureTexture_FUN_0046e5e0(DAT_005f2afc,texture_00);
    }
    if (bolt_style == 2) {
      texture = (SMRGLTextureBasic *)(&DAT_005fd984 + iVar1);
LAB_004a4158:
      engine_drender_cpp_CDemonRenderer_captureTexture_FUN_0046e5e0(DAT_005f2afc,texture);
    }
    else {
      if (bolt_style == 3) {
        texture = (SMRGLTextureBasic *)(&DAT_005fda14 + iVar1);
        goto LAB_004a4158;
      }
      if (bolt_style == 4) {
        texture = (SMRGLTextureBasic *)(&DAT_005fdaa4 + iVar1);
        goto LAB_004a4158;
      }
      if (bolt_style == 5) {
        texture = (SMRGLTextureBasic *)(&DAT_005fdb34 + iVar1);
        goto LAB_004a4158;
      }
    }
    iVar1 = iVar1 + 0x18;
    texture_00 = texture_00 + 1;
    if (iVar1 == 0x90) {
      return;
    }
  } while( true );
}
