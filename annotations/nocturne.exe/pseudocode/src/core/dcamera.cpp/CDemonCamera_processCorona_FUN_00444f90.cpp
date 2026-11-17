// Name: core_dcamera.cpp_CDemonCamera_processCorona_FUN_00444f90
// Address: 00444f90
// Address Range: [[00444f90, 0044501f]]
// Convention: __cdecl
// Signature: void __cdecl core_dcamera_cpp_CDemonCamera_processCorona_FUN_00444f90(CDemonCamera *this_ptr)

#include "nocturne.h"

void __cdecl core_dcamera_cpp_CDemonCamera_processCorona_FUN_00444f90(CDemonCamera *this_ptr)

{
  int iVar1;
  int iVar2;
  
  iVar1 = this_ptr->corona_blend_factor >> 0x1f;
  iVar1 = (this_ptr->corona_blend_factor + iVar1 * -0x100) - (uint)(iVar1 << 7 < 0);
  iVar2 = iVar1 >> 0x1f;
  g_INT_00b0ddf8 = (int)(((iVar1 >> 8) + iVar2 * -4) - (uint)(iVar2 << 1 < 0)) >> 2;
  _memset(g_CHAR_ARRAY_ARRAY_00a9d078,g_INT_00b0ddf8 & 0xff,0x12c00);
  if (1 < g_INT_0140d780) {
    core_dcamera_cpp_CDemonCamera_blendFogPlanes_FUN_00446fe0
              (this_ptr,g_INT_0140d778,g_INT_0140d77c);
    return;
  }
  if (g_INT_012b022c == 0) {
    return;
  }
  _memcpy
            (&g_SFogImagePlane_012ceb78,g_SFogImagePlane_ARRAY_012e1778,0x12c00);
  g_INT_012b022c = 0;
  return;
}
