// Name: core_dcamera.cpp_CDemonCamera_processCorona_FUN_00451d90
// Address: 00451d90
// Address Range: [[00451d90, 00451e1f]]
// Convention: __cdecl
// Signature: void __cdecl core_dcamera_cpp_CDemonCamera_processCorona_FUN_00451d90(CDemonCamera *this_ptr)

#include "nocturne.h"

void __cdecl core_dcamera_cpp_CDemonCamera_processCorona_FUN_00451d90(CDemonCamera *this_ptr)

{
  int iVar1;
  int iVar2;
  
  iVar1 = this_ptr->corona_blend_factor >> 0x1f;
  iVar1 = (this_ptr->corona_blend_factor + iVar1 * -0x100) - (uint)(iVar1 << 7 < 0);
  iVar2 = iVar1 >> 0x1f;
  g_INT_00b81498 = (int)(((iVar1 >> 8) + iVar2 * -4) - (uint)(iVar2 << 1 < 0)) >> 2;
  _memset(g_CHAR_ARRAY_ARRAY_00b10718,g_INT_00b81498 & 0xff,0x12c00);
  if (1 < g_INT_01480e28) {
    core_dcamera_cpp_CDemonCamera_blendFogPlanes_FUN_00453dc0
              (this_ptr,g_INT_01480e20,g_INT_01480e24);
    return;
  }
  if (g_INT_013238cc == 0) {
    return;
  }
  _memcpy(&g_SFogImagePlane_01342220,g_CHAR_ARRAY_01354e20,0x12c00);
  g_INT_013238cc = 0;
  return;
}
