// Name: core_dcamera.cpp_CDemonCamera_processCorona_FUN_00451130
// Address: 00451130
// Address Range: [[00451130, 004511bf]]
// Convention: __cdecl
// Signature: void core_dcamera.cpp_CDemonCamera_processCorona_FUN_00451130(CDemonCamera * this_ptr)

#include "nocturne.h"

void __cdecl core_dcamera_cpp_CDemonCamera_processCorona_FUN_00451130(CDemonCamera *this_ptr)

{
  int iVar1;
  int iVar2;
  
  iVar1 = this_ptr->corona_blend_factor >> 0x1f;
  iVar1 = (this_ptr->corona_blend_factor + iVar1 * -0x100) - (uint)(iVar1 << 7 < 0);
  iVar2 = iVar1 >> 0x1f;
  INT_00c199f8 = (int)(((iVar1 >> 8) + iVar2 * -4) - (uint)(iVar2 << 1 < 0)) >> 2;
  core_event_cpp_FUN_004b19d0();
  if (1 < g_ImageBytesPerPixel) {
    core_dcamera_cpp_CDemonCamera_blendFogPlanes_FUN_00453160
              (this_ptr,g_ImageProcessingState1,g_ImageProcessingState2);
    return;
  }
  if (g_BackdropSaveActive == 0) {
    return;
  }
  core_event_cpp_FUN_004b1a78();
  g_BackdropSaveActive = 0;
  return;
}
