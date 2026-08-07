// Name: core_dcamera.cpp_CDemonCamera_setupPerspectiveAndFog_FUN_00447670
// Address: 00447670
// Address Range: [[00447670, 0044775d]]
// Convention: __cdecl
// Signature: void __cdecl core_dcamera_cpp_CDemonCamera_setupPerspectiveAndFog_FUN_00447670(CDemonCamera *this_ptr,CVector3f *position,SProjectedVertex *projected_vertex)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl core_dcamera_cpp_CDemonCamera_setupPerspectiveAndFog_FUN_00447670(CDemonCamera *this_ptr,CVector3f *position,SProjectedVertex *projected_vertex)

{
  uint uVar1;
  uint uVar2;
  CVector3i local_10;
  
  if (position == (CVector3f *)0x0) {
    _DAT_01c038f4 = position;
    return;
  }
  if (_DAT_0140efa8 != 0) {
    _DAT_01c038f4 = (CVector3f *)0x0;
    return;
  }
  local_10.x = (int)ROUND(position->x * 256.0f);
  local_10.y = (int)ROUND(position->y * 256.0f);
  local_10.z = (int)ROUND(position->z * 256.0f);
  _DAT_01c038f4 =
       (CVector3f *)
       core_dcamera_cpp_CDemonCamera_getFogValueAtPosition_FUN_004475a0
                 (this_ptr,&local_10,projected_vertex);
  uVar1 = *(uint *)(&DAT_00b0e1fc + DAT_005ad458 * 4) & 0xff;
  if (g_BitsPerPixel == 0x20) {
    uVar2 = (*(uint *)(&DAT_00b0e1fc + DAT_005ad450 * 4) & 0xff) <<
            (g_RedBitPosition.bytes[0] & 0x1f) |
            (*(uint *)(&DAT_00b0e1fc + DAT_005ad454 * 4) & 0xff) <<
            (g_GreenBitPosition.bytes[0] & 0x1f);
    uVar1 = uVar1 << (g_BlueBitPosition.bytes[0] & 0x1f);
  }
  else {
    uVar2 = (*(uint *)(&DAT_00b0e1fc + DAT_005ad450 * 4) & 0xff) << 0x10 |
            (*(uint *)(&DAT_00b0e1fc + DAT_005ad454 * 4) & 0xff) << 8;
  }
  g_SolidColorMode = uVar2 | uVar1;
  return;
}
