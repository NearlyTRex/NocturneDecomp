// Name: core_dcamera.cpp_CDemonCamera_setupPerspectiveAndFog_FUN_00450580
// Address: 00450580
// Address Range: [[00450580, 0045066d]]
// Convention: __cdecl
// Signature: void __cdecl core_dcamera_cpp_CDemonCamera_setupPerspectiveAndFog_FUN_00450580(CDemonCamera *this_ptr,CVector3f *position,SProjectedVertex *projected_vertex)

#include "nocturne.h"

void __cdecl core_dcamera_cpp_CDemonCamera_setupPerspectiveAndFog_FUN_00450580(CDemonCamera *this_ptr,CVector3f *position,SProjectedVertex *projected_vertex)

{
  uint uVar1;
  uint uVar2;
  CVector3i local_10;
  
  if (position == (CVector3f *)0x0) {
    g_INT_01c6e24c = (int)position;
    return;
  }
  if (g_INT_0149ef08 != 0) {
    g_INT_01c6e24c = 0;
    return;
  }
  local_10.x = (int)ROUND(position->x * 256.0f);
  local_10.y = (int)ROUND(position->y * 256.0f);
  local_10.z = (int)ROUND(position->z * 256.0f);
  g_INT_01c6e24c =
       (*((this_ptr->base).vtable)->getFogValueAtPosition)(this_ptr,&local_10,projected_vertex);
  uVar1 = g_UINT_ARRAY_00b9e14c[g_INT_005f17ec] & 0xff;
  if (g_INT_005fba20 == 0x20) {
    uVar2 = (g_UINT_ARRAY_00b9e14c[g_INT_005f17e4] & 0xff) <<
            (g_BIT_INTEGER32_01c6af74.bytes[0] & 0x1f) |
            (g_UINT_ARRAY_00b9e14c[g_INT_005f17e8] & 0xff) <<
            (g_BIT_INTEGER32_01c6af80.bytes[0] & 0x1f);
    uVar1 = uVar1 << (g_BIT_INTEGER32_01c6af8c.bytes[0] & 0x1f);
  }
  else {
    uVar2 = (g_UINT_ARRAY_00b9e14c[g_INT_005f17e4] & 0xff) << 0x10 |
            (g_UINT_ARRAY_00b9e14c[g_INT_005f17e8] & 0xff) << 8;
  }
  g_ULONG_01c6e2bc = uVar2 | uVar1;
  return;
}
