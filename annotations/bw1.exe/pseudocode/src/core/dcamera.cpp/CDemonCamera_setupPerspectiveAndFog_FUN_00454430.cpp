// Name: core_dcamera.cpp_CDemonCamera_setupPerspectiveAndFog_FUN_00454430
// Address: 00454430
// Address Range: [[00454430, 0045451d]]
// Convention: __cdecl
// Signature: void __cdecl core_dcamera_cpp_CDemonCamera_setupPerspectiveAndFog_FUN_00454430(CDemonCamera *this_ptr,CVector3f *position,SProjectedVertex *projected_vertex)

#include "nocturne.h"

void __cdecl core_dcamera_cpp_CDemonCamera_setupPerspectiveAndFog_FUN_00454430(CDemonCamera *this_ptr,CVector3f *position,SProjectedVertex *projected_vertex)

{
  uint uVar1;
  uint uVar2;
  CVector3i local_10;
  
  if (position == (CVector3f *)0x0) {
    g_INT_01c51cac = (int)position;
    return;
  }
  if (g_INT_01482658 != 0) {
    g_INT_01c51cac = 0;
    return;
  }
  local_10.x = (int)ROUND(position->x * 256.0f);
  local_10.y = (int)ROUND(position->y * 256.0f);
  local_10.z = (int)ROUND(position->z * 256.0f);
  g_INT_01c51cac =
       (*((this_ptr->base).vtable)->getFogValueAtPosition)(this_ptr,&local_10,projected_vertex);
  uVar1 = g_UINT_ARRAY_00b8189c[g_INT_00611238] & 0xff;
  if (g_INT_0061b4a0 == 0x20) {
    uVar2 = (g_UINT_ARRAY_00b8189c[g_INT_00611230] & 0xff) <<
            (g_BIT_INTEGER32_01c4e9d4.bytes[0] & 0x1f) |
            (g_UINT_ARRAY_00b8189c[g_INT_00611234] & 0xff) <<
            (g_BIT_INTEGER32_01c4e9e0.bytes[0] & 0x1f);
    uVar1 = uVar1 << (g_BIT_INTEGER32_01c4e9ec.bytes[0] & 0x1f);
  }
  else {
    uVar2 = (g_UINT_ARRAY_00b8189c[g_INT_00611230] & 0xff) << 0x10 |
            (g_UINT_ARRAY_00b8189c[g_INT_00611234] & 0xff) << 8;
  }
  g_ULONG_01c51d1c = uVar2 | uVar1;
  return;
}
