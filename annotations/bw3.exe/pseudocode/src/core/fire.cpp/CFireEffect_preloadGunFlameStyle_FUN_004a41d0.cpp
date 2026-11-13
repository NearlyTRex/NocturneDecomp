// Name: core_fire.cpp_CFireEffect_preloadGunFlameStyle_FUN_004a41d0
// Address: 004a41d0
// Address Range: [[004a41d0, 004a42b9]]
// Convention: __cdecl
// Signature: void __cdecl core_fire_cpp_CFireEffect_preloadGunFlameStyle_FUN_004a41d0(CFireEffect *this_ptr,int flame_style)

#include "nocturne.h"

void __cdecl core_fire_cpp_CFireEffect_preloadGunFlameStyle_FUN_004a41d0(CFireEffect *this_ptr,int flame_style)

{
  int iVar1;
  byte *puVar2;
  SMRGLTextureBasic *texture;
  int iVar3;
  
  if ((((flame_style == 2) || (flame_style == 4)) || (flame_style == 3)) || (flame_style == 6)) {
    iVar1 = 1;
  }
  else if (flame_style == 5) {
    iVar1 = 6;
  }
  else {
    iVar1 = 0x14;
  }
  iVar3 = 0;
  do {
    if (flame_style == 2) {
      puVar2 = &DAT_005fd7ec;
LAB_004a41fa:
      texture = (SMRGLTextureBasic *)(puVar2 + iVar3);
    }
    else if (flame_style == 7) {
      texture = (SMRGLTextureBasic *)(&DAT_005fd804 + iVar3);
    }
    else if (flame_style == 4) {
      texture = (SMRGLTextureBasic *)(&DAT_005fd81c + iVar3);
    }
    else if (flame_style == 3) {
      texture = (SMRGLTextureBasic *)(&DAT_005fd834 + iVar3);
    }
    else {
      if (flame_style == 5) {
        puVar2 = &DAT_005fd84c;
        goto LAB_004a41fa;
      }
      if (flame_style == 6) {
        texture = (SMRGLTextureBasic *)(&DAT_005fd8dc + iVar3);
      }
      else {
        texture = (SMRGLTextureBasic *)(&DAT_005fd60c + iVar3);
      }
    }
    engine_drender_cpp_CDemonRenderer_captureTexture_FUN_0046e5e0(DAT_005f2afc,texture);
    iVar3 = iVar3 + 0x18;
    if (iVar1 * 0x18 <= iVar3) {
      return;
    }
  } while( true );
}
