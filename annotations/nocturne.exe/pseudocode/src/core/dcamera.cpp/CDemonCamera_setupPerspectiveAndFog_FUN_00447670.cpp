// Name: core_dcamera.cpp_CDemonCamera_setupPerspectiveAndFog_FUN_00447670
// Address: 00447670
// Address Range: [[00447670, 0044775d]]
// Convention: __cdecl
// Signature: void __cdecl core_dcamera_cpp_CDemonCamera_setupPerspectiveAndFog_FUN_00447670(CDemonCamera *this_ptr,CVector3f *position,SProjectedVertex *projected_vertex)

#include "nocturne.h"

void __cdecl core_dcamera_cpp_CDemonCamera_setupPerspectiveAndFog_FUN_00447670(CDemonCamera *this_ptr,CVector3f *position,SProjectedVertex *projected_vertex)

{
  uint uVar1;
  uint uVar2;
  CVector3i local_10;
  
  if (position == (CVector3f *)0x0) {
    g_INT_01c038f4 = (int)position;
    return;
  }
  if (g_BackgroundSceneDepth != 0) {
    g_INT_01c038f4 = 0;
    return;
  }
  local_10.x = (int)ROUND(position->x * 256.0f);
  local_10.y = (int)ROUND(position->y * 256.0f);
  local_10.z = (int)ROUND(position->z * 256.0f);
  g_INT_01c038f4 =
       core_dcamera_cpp_CDemonCamera_getFogValueAtPosition_FUN_004475a0
                 (this_ptr,&local_10,projected_vertex);
  uVar1 = g_UINT_ARRAY_00b0e1fc[g_INT_005ad458] & 0xff;
  if (g_BitsPerPixel == 0x20) {
    uVar2 = (g_UINT_ARRAY_00b0e1fc[(int)g_CHAR_ARRAY_005ad450] & 0xff) <<
            (g_RedBitPosition.bytes[0] & 0x1f) |
            (g_UINT_ARRAY_00b0e1fc[g_INT_005ad454] & 0xff) << (g_GreenBitPosition.bytes[0] & 0x1f);
    uVar1 = uVar1 << (g_BlueBitPosition.bytes[0] & 0x1f);
  }
  else {
    uVar2 = (g_UINT_ARRAY_00b0e1fc[(int)g_CHAR_ARRAY_005ad450] & 0xff) << 0x10 |
            (g_UINT_ARRAY_00b0e1fc[g_INT_005ad454] & 0xff) << 8;
  }
  g_SolidColorMode = uVar2 | uVar1;
  return;
}
