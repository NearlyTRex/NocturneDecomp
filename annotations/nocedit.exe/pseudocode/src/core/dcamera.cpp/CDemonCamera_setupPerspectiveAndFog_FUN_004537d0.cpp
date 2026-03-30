// Name: core_dcamera.cpp_CDemonCamera_setupPerspectiveAndFog_FUN_004537d0
// Address: 004537d0
// Address Range: [[004537d0, 004538bd]]
// Convention: __cdecl
// Signature: void __cdecl core_dcamera_cpp_CDemonCamera_setupPerspectiveAndFog_FUN_004537d0(CDemonCamera *this_ptr,CVector3f *position,SProjectedVertex *projected_vertex)

#include "nocturne.h"

void __cdecl core_dcamera_cpp_CDemonCamera_setupPerspectiveAndFog_FUN_004537d0(CDemonCamera *this_ptr,CVector3f *position,SProjectedVertex *projected_vertex)

{
  uint uVar1;
  uint uVar2;
  CVector3i local_10;
  
  if (position == (CVector3f *)0x0) {
    g_PerspectiveReciprocal = (int)position;
    return;
  }
  if (g_BackgroundSceneDepth != 0) {
    g_PerspectiveReciprocal = 0;
    return;
  }
  local_10.x = (int)ROUND(position->x * 256.0f);
  local_10.y = (int)ROUND(position->y * 256.0f);
  local_10.z = (int)ROUND(position->z * 256.0f);
  g_PerspectiveReciprocal =
       (*((this_ptr->base).vtable)->getFogValueAtPosition)(this_ptr,&local_10,projected_vertex);
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
