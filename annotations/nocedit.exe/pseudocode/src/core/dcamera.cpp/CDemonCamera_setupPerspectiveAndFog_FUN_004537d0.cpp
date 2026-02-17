// Name: core_dcamera.cpp_CDemonCamera_setupPerspectiveAndFog_FUN_004537d0
// Address: 004537d0
// Address Range: [[004537d0, 004538bd]]
// Convention: __cdecl
// Signature: void __cdecl core_dcamera_cpp_CDemonCamera_setupPerspectiveAndFog_FUN_004537d0(CDemonCamera *this_ptr,CVector3f *position,float max_distance)

#include "nocturne.h"

void __cdecl core_dcamera_cpp_CDemonCamera_setupPerspectiveAndFog_FUN_004537d0(CDemonCamera *this_ptr,CVector3f *position,float max_distance)

{
  uint uVar1;
  uint uVar2;
  int local_10;
  int local_c;
  int local_8;
  
  if (position == (CVector3f *)0x0) {
    g_PerspectiveReciprocal = (float)position;
    return;
  }
  if (g_BackgroundSceneDepth != 0) {
    g_PerspectiveReciprocal = 0.0;
    return;
  }
  local_10 = (int)ROUND(position->x * 256.0f);
  local_c = (int)ROUND(position->y * 256.0f);
  local_8 = (int)ROUND(position->z * 256.0f);
  g_PerspectiveReciprocal =
       (float)(*((this_ptr->base).vtable)->calculatePerspective)(this_ptr,&local_10,max_distance);
  uVar1 = g_LightmapTexturePalette[g_FogColorIndexB] & 0xff;
  if (g_BitsPerPixel == 0x20) {
    uVar2 = (g_LightmapTexturePalette[g_FogColorIndexR] & 0xff) <<
            (g_RedBitPosition.bytes[0] & 0x1f) |
            (g_LightmapTexturePalette[g_FogColorIndexG] & 0xff) <<
            (g_GreenBitPosition.bytes[0] & 0x1f);
    uVar1 = uVar1 << (g_BlueBitPosition.bytes[0] & 0x1f);
  }
  else {
    uVar2 = (g_LightmapTexturePalette[g_FogColorIndexR] & 0xff) << 0x10 |
            (g_LightmapTexturePalette[g_FogColorIndexG] & 0xff) << 8;
  }
  g_SolidColorMode = uVar2 | uVar1;
  return;
}
