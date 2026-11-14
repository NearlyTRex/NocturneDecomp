// Name: core_fire.cpp_CFireEffect_preloadExplosionStyle_FUN_004a42f0
// Address: 004a42f0
// Address Range: [[004a42f0, 004a433e]]
// Convention: __cdecl
// Signature: void __cdecl core_fire_cpp_CFireEffect_preloadExplosionStyle_FUN_004a42f0(CFireEffect *this_ptr,int explosion_type)

#include "nocturne.h"

void __cdecl core_fire_cpp_CFireEffect_preloadExplosionStyle_FUN_004a42f0(CFireEffect *this_ptr,int explosion_type)

{
  SMRGLTextureBasic *pSVar1;
  SMRGLTextureBasic *pSVar2;
  SMRGLTextureBasic *texture;
  
  pSVar1 = (SMRGLTextureBasic *)&DAT_005fcb14;
  pSVar2 = (SMRGLTextureBasic *)&DAT_005fd084;
  do {
    texture = pSVar1;
    if (((explosion_type == 0) || (explosion_type == 2)) || (texture = pSVar2, explosion_type == 3))
    {
      engine_drender_cpp_CDemonRenderer_captureTexture_FUN_0046e5e0(DAT_005f2afc,texture);
    }
    pSVar1 = pSVar1 + 1;
    pSVar2 = pSVar2 + 1;
  } while (pSVar1 != (SMRGLTextureBasic *)&DAT_005fd084);
  return;
}
