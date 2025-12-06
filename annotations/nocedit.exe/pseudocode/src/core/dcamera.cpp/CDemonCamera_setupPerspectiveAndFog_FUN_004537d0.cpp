// Name: core_dcamera.cpp_CDemonCamera_setupPerspectiveAndFog_FUN_004537d0
// Address: 004537d0
// Address Range: [[004537d0, 004538bd]]
// Convention: __cdecl
// Signature: void core_dcamera.cpp_CDemonCamera_setupPerspectiveAndFog_FUN_004537d0(CDemonCamera * this_ptr, CVector3f * position, float max_distance)

#include "nocturne.h"

void __cdecl
core_dcamera_cpp_CDemonCamera_setupPerspectiveAndFog_FUN_004537d0
          (CDemonCamera *this_ptr,CVector3f *position,float max_distance)

{
  uint uVar1;
  uint uVar2;
  
  if (position == (CVector3f *)0x0) {
    g_PerspectiveReciprocal = (float)position;
    return;
  }
  if (g_BackgroundSceneDepth != 0) {
    g_PerspectiveReciprocal = 0.0;
    return;
  }
  g_PerspectiveReciprocal = (float)(*(code *)((this_ptr->base).vtable)->calculatePerspective)();
  uVar1 = g_LightmapTexturePalette[g_FogColorIndexB] & 0xff;
  if (g_BitsPerPixel == 0x20) {
    uVar2 = (g_LightmapTexturePalette[g_FogColorIndexR] & 0xff) << ((byte)g_RedBitPosition & 0x1f) |
            (g_LightmapTexturePalette[g_FogColorIndexG] & 0xff) << ((byte)g_GreenBitPosition & 0x1f)
    ;
    uVar1 = uVar1 << ((byte)g_BlueBitPosition & 0x1f);
  }
  else {
    uVar2 = (g_LightmapTexturePalette[g_FogColorIndexR] & 0xff) << 0x10 |
            (g_LightmapTexturePalette[g_FogColorIndexG] & 0xff) << 8;
  }
  g_SolidColorMode = uVar2 | uVar1;
  return;
}
