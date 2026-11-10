// Name: core_fire.cpp_FUN_004a42f0
// Address: 004a42f0
// Address Range: [[004a42f0, 004a433e]]
// Convention: unknown
// Signature: void core_fire_cpp_FUN_004a42f0(undefined4 param_1,int param_2)

#include "nocturne.h"

void core_fire_cpp_FUN_004a42f0(uint param_1,int param_2)

{
  SMRGLTextureBasic *pSVar1;
  SMRGLTextureBasic *pSVar2;
  SMRGLTextureBasic *texture;
  
  pSVar1 = (SMRGLTextureBasic *)&DAT_005fcb14;
  pSVar2 = (SMRGLTextureBasic *)&DAT_005fd084;
  do {
    texture = pSVar1;
    if (((param_2 == 0) || (param_2 == 2)) || (texture = pSVar2, param_2 == 3)) {
      engine_drender_cpp_CDemonRenderer_captureTexture_FUN_0046e5e0(DAT_005f2afc,texture);
    }
    pSVar1 = pSVar1 + 1;
    pSVar2 = pSVar2 + 1;
  } while (pSVar1 != (SMRGLTextureBasic *)&DAT_005fd084);
  return;
}
